#include "time_interval.h"
#include <cassert>

template<typename It> 
std::optional<std::pair<It,It>> FindDayIntervals(It intervals_begin, It intervals_end, DayT day)  
{
    auto it_lower = std::lower_bound(intervals_begin, intervals_end, day,
    [](const TimeInterval& interval, DayT day_){
        return static_cast<double>(*interval.Day()) < static_cast<double>(day_);
    });
    auto it_upper = std::upper_bound(intervals_begin, intervals_end, day,
    [](DayT day_, const TimeInterval& interval){
        return static_cast<double>(day_) < static_cast<double>(*interval.Day());
    });

    if(it_lower == it_upper) {
        return std::nullopt;
    } else {
        return std::pair{it_lower,it_upper};
    }
};

template<typename It>
std::optional<double> ProcessDayIntervals (It it_begin, It it_end, double mins) {
    auto it = std::upper_bound(it_begin, it_end, mins,
    [](double time, const TimeInterval& interval){
        return time < interval.MinsTo();
    });
    if(it == it_end) {
        return std::nullopt;
    } else if(it->MinsFrom() > mins) {
        return it->MinsFrom() - mins;
    }
    return 0ul;
};

double GetWaitingTime(const Time& start_time, const std::vector<TimeInterval>& intervals) {
    if(intervals.empty()) {
        return 0;
    }
    if(intervals[0].Day().has_value()) {
        double cur_mins = start_time.Mins();
        double acced_mins = 0;
        for(auto day = start_time.Day();;day = Time::IncDay(day)) {
            if(auto opt_it = FindDayIntervals(intervals.begin(),intervals.end(),day); opt_it) {
                auto [it_begin,it_end] = *opt_it;
                auto res = ProcessDayIntervals(it_begin,it_end,cur_mins);
                if(res) {
                    return *res + acced_mins;
                }
            }
            acced_mins += MINS_IN_DAY - cur_mins;
            cur_mins = 0;
        }
       
    } else {
        auto res = ProcessDayIntervals(intervals.begin(),intervals.end(),start_time.Mins());
        if(res) {
            return *res;
        } else {
            // Wait till the next day
            return *ProcessDayIntervals(intervals.begin(),intervals.end(),0ul) + MINS_IN_DAY - start_time.Mins();
        }
    }
    return 666;
}