#include "svg_render.h"
#include <vector>
#include "misc.h"

const std::unordered_map<std::string,std::function<void(const SvgRender*,Svg::Document&)>> SvgRender::render_table {
        { "bus_lines" , &SvgRender::RenderBuses },
        { "stop_points" , &SvgRender::RenderStops },
        { "bus_labels" , &SvgRender::RenderBusLabels },
        { "stop_labels" , &SvgRender::RenderStopLabels }
    };

SvgRender& SvgRender::SetWidth(double x){
    settings.width = x;
    return *this;
}
SvgRender& SvgRender::SetHeight(double x){
    settings.height = x;
    return *this;
}
SvgRender& SvgRender::SetPadding(double x){
    settings.padding = x;
    return *this;
}
SvgRender& SvgRender::SetStopRadius(double x){
    settings.stop_radius = x;
    return *this;
}
SvgRender& SvgRender::SetLineWidth(double x){
    settings.line_width = x;
    return *this;
}
SvgRender& SvgRender::SetStopLabelFontSize(int x){
    settings.stop_label_font_size = x;
    return *this;
}
SvgRender& SvgRender::SetStopLabelOffset(Svg::Point x){
    settings.stop_label_offset = x;
    return *this;
}
SvgRender& SvgRender::SetUnderlayerColor(Svg::Color x){
    settings.underlayer_color = x;
    return *this;
}
SvgRender& SvgRender::SetUnderlayerWidth(double x){
    settings.underlayer_width = x;
    return *this;
}
SvgRender& SvgRender::SetBusLabelFontSize(int x){
    settings.bus_label_font_size = x;
    return *this;
}
SvgRender& SvgRender::SetBusLabelOffset(Svg::Point x){
    settings.bus_label_offset = x;
    return *this;
}
SvgRender& SvgRender::SetColorPalette(std::vector<Svg::Color> x){
    settings.color_palette = move(x);
    return *this;
}

SvgRender& SvgRender::SetLayers(std::vector<std::string> x){
    settings.layers = move(x);
    return *this;
}

static double min_lat {0}, max_lat {0}, min_lon {0}, max_lon {0};
static double zoom_coef = 0;

Svg::Point SvgRender::PointFromLocation(double lat, double lon) const {
    double x = (lon - min_lon) * zoom_coef + settings.padding;
    double y = (max_lat - lat) * zoom_coef + settings.padding;
    return Svg::Point(x,y);
}

struct ColorGenerator {
    ColorGenerator(const std::vector<Svg::Color>& palette)
    : palette(palette),cur_index(0) {}
    Svg::Color operator()() {
        auto res = palette[cur_index++];
        if(cur_index == palette.size()) {
            cur_index = 0;
        }
        return res;
    }
    void Reset(void) { cur_index = 0; }
    const std::vector<Svg::Color>& palette;
    size_t cur_index;
};

void SvgRender::AddBusLabel(Svg::Document& doc,const std::string& bus_name, 
                            const std::string& stop, Svg::Color color) const {
    Svg::Text common = Svg::Text{}
        .SetPoint(PointFromLocation(stops.at(stop).latitude, stops.at(stop).longtitude))
        .SetOffset(settings.bus_label_offset)
        .SetFontSize(settings.bus_label_font_size)
        .SetFontFamily("Verdana")
        .SetFontWeight("bold")
        .SetData(bus_name);
    Svg::Text underlayer = common;
    doc.Add(
        underlayer
        .SetFillColor(settings.underlayer_color)
        .SetStrokeColor(settings.underlayer_color)
        .SetStrokeWidth(settings.underlayer_width)
        .SetStrokeLineCap("round")
        .SetStrokeLineJoin("round")
    );
    doc.Add(
        common.SetFillColor(color)
    );
}

void SvgRender::RenderBuses(Svg::Document& doc) const {
    ColorGenerator color_generator(settings.color_palette);
    for(const auto& [_,bus] : buses) {
        Svg::Polyline bus_line;
        bus_line.SetStrokeColor(color_generator())
                .SetStrokeWidth(settings.line_width)
                .SetStrokeLineCap("round")
                .SetStrokeLineJoin("round");
        for(const auto& stop : bus.route) {
            bus_line.AddPoint(PointFromLocation(stops.at(stop).latitude, stops.at(stop).longtitude));
        }
        if(bus.route.size() && bus.route_type == Bus::RouteType::LINEAR) {
            for(const auto& stop : Range(bus.route.rbegin() + 1,bus.route.rend())) {
                bus_line.AddPoint(PointFromLocation(stops.at(stop).latitude, stops.at(stop).longtitude));
            }
        }
        doc.Add(bus_line);
    }
}

void SvgRender::RenderStops(Svg::Document& doc) const {
    for(const auto& [_,stop] : stops) {
        doc.Add(
            Svg::Circle{}
            .SetFillColor("white")
            .SetRadius(settings.stop_radius)
            .SetCenter(PointFromLocation(stop.latitude, stop.longtitude))
        );
    }
}

void SvgRender::RenderBusLabels(Svg::Document& doc) const {
    ColorGenerator color_generator(settings.color_palette);
    for(const auto& [name,bus] : buses) {
        if(bus.route.size()) {
            const auto& start_stop = *bus.route.begin();
            const auto& finish_stop = *prev(bus.route.end());
            auto bus_color = color_generator();

            AddBusLabel(doc,name,start_stop,bus_color);
            if(start_stop != finish_stop) {
                AddBusLabel(doc,name,finish_stop,bus_color);
            }
        }
    }
}

void SvgRender::RenderStopLabels(Svg::Document& doc) const {
    for(const auto& [name,stop] : stops) {
        Svg::Text common = Svg::Text{}
            .SetPoint(PointFromLocation(stop.latitude, stop.longtitude))
            .SetOffset(settings.stop_label_offset)
            .SetFontSize(settings.stop_label_font_size)
            .SetFontFamily("Verdana")
            .SetData(name);
        Svg::Text underlayer = common;
        doc.Add(
            underlayer
            .SetFillColor(settings.underlayer_color)
            .SetStrokeColor(settings.underlayer_color)
            .SetStrokeWidth(settings.underlayer_width)
            .SetStrokeLineCap("round")
            .SetStrokeLineJoin("round")
        );
        doc.Add(
            common.SetFillColor("black")
        );
    }
}

Svg::Document SvgRender::Render() const {
    if(1) {
        min_lat = stops.begin()->second.latitude;
        min_lon = stops.begin()->second.longtitude;
        for(const auto& [_,stop] : stops) {
            if(stop.latitude < min_lat) min_lat = stop.latitude;
            if(stop.latitude > max_lat) max_lat = stop.latitude;
            if(stop.longtitude < min_lon) min_lon = stop.longtitude;
            if(stop.longtitude > max_lon) max_lon = stop.longtitude;
        }

        if((max_lon - min_lon) && (max_lat - min_lat)) {
            double width_zoom_coef = (settings.width - 2 * settings.padding) / (max_lon - min_lon);
            double height_zoom_coef = (settings.height - 2 * settings.padding) / (max_lat - min_lat);
            zoom_coef = std::min(width_zoom_coef,height_zoom_coef);
        } else if (max_lon - min_lon) {
            zoom_coef = (settings.width - 2 * settings.padding) / (max_lon - min_lon);
        } else if (max_lat - min_lat) {
            zoom_coef = (settings.height - 2 * settings.padding) / (max_lat - min_lat);
        } else {
            zoom_coef = 0;
        }
        
        Svg::Document doc;

        for(const auto& layer : settings.layers) {
            render_table.at(layer)(this,doc);
        }

        cache = std::move(doc);
    }
    return *cache;
}