// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: database.proto

#ifndef PROTOBUF_INCLUDED_database_2eproto
#define PROTOBUF_INCLUDED_database_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_database_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_database_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[6]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_database_2eproto();
namespace ProtoTransport {
class Bus;
class BusDefaultTypeInternal;
extern BusDefaultTypeInternal _Bus_default_instance_;
class Database;
class DatabaseDefaultTypeInternal;
extern DatabaseDefaultTypeInternal _Database_default_instance_;
class Database_BusesEntry_DoNotUse;
class Database_BusesEntry_DoNotUseDefaultTypeInternal;
extern Database_BusesEntry_DoNotUseDefaultTypeInternal _Database_BusesEntry_DoNotUse_default_instance_;
class Database_StopsEntry_DoNotUse;
class Database_StopsEntry_DoNotUseDefaultTypeInternal;
extern Database_StopsEntry_DoNotUseDefaultTypeInternal _Database_StopsEntry_DoNotUse_default_instance_;
class Stop;
class StopDefaultTypeInternal;
extern StopDefaultTypeInternal _Stop_default_instance_;
class Stop_DistanceToStopEntry_DoNotUse;
class Stop_DistanceToStopEntry_DoNotUseDefaultTypeInternal;
extern Stop_DistanceToStopEntry_DoNotUseDefaultTypeInternal _Stop_DistanceToStopEntry_DoNotUse_default_instance_;
}  // namespace ProtoTransport
namespace google {
namespace protobuf {
template<> ::ProtoTransport::Bus* Arena::CreateMaybeMessage<::ProtoTransport::Bus>(Arena*);
template<> ::ProtoTransport::Database* Arena::CreateMaybeMessage<::ProtoTransport::Database>(Arena*);
template<> ::ProtoTransport::Database_BusesEntry_DoNotUse* Arena::CreateMaybeMessage<::ProtoTransport::Database_BusesEntry_DoNotUse>(Arena*);
template<> ::ProtoTransport::Database_StopsEntry_DoNotUse* Arena::CreateMaybeMessage<::ProtoTransport::Database_StopsEntry_DoNotUse>(Arena*);
template<> ::ProtoTransport::Stop* Arena::CreateMaybeMessage<::ProtoTransport::Stop>(Arena*);
template<> ::ProtoTransport::Stop_DistanceToStopEntry_DoNotUse* Arena::CreateMaybeMessage<::ProtoTransport::Stop_DistanceToStopEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ProtoTransport {

// ===================================================================

class Stop_DistanceToStopEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<Stop_DistanceToStopEntry_DoNotUse, 
    ::std::string, ::google::protobuf::int32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    0 > {
public:
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
static bool _ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  typedef ::google::protobuf::internal::MapEntry<Stop_DistanceToStopEntry_DoNotUse, 
    ::std::string, ::google::protobuf::int32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    0 > SuperType;
  Stop_DistanceToStopEntry_DoNotUse();
  Stop_DistanceToStopEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const Stop_DistanceToStopEntry_DoNotUse& other);
  static const Stop_DistanceToStopEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Stop_DistanceToStopEntry_DoNotUse*>(&_Stop_DistanceToStopEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class Stop :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoTransport.Stop) */ {
 public:
  Stop();
  virtual ~Stop();

  Stop(const Stop& from);

  inline Stop& operator=(const Stop& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Stop(Stop&& from) noexcept
    : Stop() {
    *this = ::std::move(from);
  }

  inline Stop& operator=(Stop&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Stop& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Stop* internal_default_instance() {
    return reinterpret_cast<const Stop*>(
               &_Stop_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Stop* other);
  friend void swap(Stop& a, Stop& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Stop* New() const final {
    return CreateMaybeMessage<Stop>(nullptr);
  }

  Stop* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Stop>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Stop& from);
  void MergeFrom(const Stop& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Stop* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, int32> distance_to_stop_ = 3;
  int distance_to_stop__size() const;
  void clear_distance_to_stop_();
  static const int kDistanceToStopFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
      distance_to_stop_() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
      mutable_distance_to_stop_();

  // double lat = 1;
  void clear_lat();
  static const int kLatFieldNumber = 1;
  double lat() const;
  void set_lat(double value);

  // double lon = 2;
  void clear_lon();
  static const int kLonFieldNumber = 2;
  double lon() const;
  void set_lon(double value);

  // @@protoc_insertion_point(class_scope:ProtoTransport.Stop)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      Stop_DistanceToStopEntry_DoNotUse,
      ::std::string, ::google::protobuf::int32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      0 > distance_to_stop__;
  double lat_;
  double lon_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_database_2eproto;
};
// -------------------------------------------------------------------

class Bus :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoTransport.Bus) */ {
 public:
  Bus();
  virtual ~Bus();

  Bus(const Bus& from);

  inline Bus& operator=(const Bus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Bus(Bus&& from) noexcept
    : Bus() {
    *this = ::std::move(from);
  }

  inline Bus& operator=(Bus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Bus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Bus* internal_default_instance() {
    return reinterpret_cast<const Bus*>(
               &_Bus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Bus* other);
  friend void swap(Bus& a, Bus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Bus* New() const final {
    return CreateMaybeMessage<Bus>(nullptr);
  }

  Bus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Bus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Bus& from);
  void MergeFrom(const Bus& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Bus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint32 route = 4;
  int route_size() const;
  void clear_route();
  static const int kRouteFieldNumber = 4;
  ::google::protobuf::uint32 route(int index) const;
  void set_route(int index, ::google::protobuf::uint32 value);
  void add_route(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      route() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_route();

  // uint64 stops = 1;
  void clear_stops();
  static const int kStopsFieldNumber = 1;
  ::google::protobuf::uint64 stops() const;
  void set_stops(::google::protobuf::uint64 value);

  // uint64 unique_stops = 2;
  void clear_unique_stops();
  static const int kUniqueStopsFieldNumber = 2;
  ::google::protobuf::uint64 unique_stops() const;
  void set_unique_stops(::google::protobuf::uint64 value);

  // bool is_round_trip = 3;
  void clear_is_round_trip();
  static const int kIsRoundTripFieldNumber = 3;
  bool is_round_trip() const;
  void set_is_round_trip(bool value);

  // @@protoc_insertion_point(class_scope:ProtoTransport.Bus)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > route_;
  mutable std::atomic<int> _route_cached_byte_size_;
  ::google::protobuf::uint64 stops_;
  ::google::protobuf::uint64 unique_stops_;
  bool is_round_trip_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_database_2eproto;
};
// -------------------------------------------------------------------

class Database_StopsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<Database_StopsEntry_DoNotUse, 
    ::std::string, ::ProtoTransport::Stop,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
static bool _ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  typedef ::google::protobuf::internal::MapEntry<Database_StopsEntry_DoNotUse, 
    ::std::string, ::ProtoTransport::Stop,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  Database_StopsEntry_DoNotUse();
  Database_StopsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const Database_StopsEntry_DoNotUse& other);
  static const Database_StopsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Database_StopsEntry_DoNotUse*>(&_Database_StopsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class Database_BusesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<Database_BusesEntry_DoNotUse, 
    ::std::string, ::ProtoTransport::Bus,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
static bool _ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  typedef ::google::protobuf::internal::MapEntry<Database_BusesEntry_DoNotUse, 
    ::std::string, ::ProtoTransport::Bus,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  Database_BusesEntry_DoNotUse();
  Database_BusesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const Database_BusesEntry_DoNotUse& other);
  static const Database_BusesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Database_BusesEntry_DoNotUse*>(&_Database_BusesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class Database :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoTransport.Database) */ {
 public:
  Database();
  virtual ~Database();

  Database(const Database& from);

  inline Database& operator=(const Database& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Database(Database&& from) noexcept
    : Database() {
    *this = ::std::move(from);
  }

  inline Database& operator=(Database&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Database& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Database* internal_default_instance() {
    return reinterpret_cast<const Database*>(
               &_Database_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    5;

  void Swap(Database* other);
  friend void swap(Database& a, Database& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Database* New() const final {
    return CreateMaybeMessage<Database>(nullptr);
  }

  Database* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Database>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Database& from);
  void MergeFrom(const Database& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Database* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .ProtoTransport.Stop> stops = 1;
  int stops_size() const;
  void clear_stops();
  static const int kStopsFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::ProtoTransport::Stop >&
      stops() const;
  ::google::protobuf::Map< ::std::string, ::ProtoTransport::Stop >*
      mutable_stops();

  // map<string, .ProtoTransport.Bus> buses = 2;
  int buses_size() const;
  void clear_buses();
  static const int kBusesFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::ProtoTransport::Bus >&
      buses() const;
  ::google::protobuf::Map< ::std::string, ::ProtoTransport::Bus >*
      mutable_buses();

  // @@protoc_insertion_point(class_scope:ProtoTransport.Database)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      Database_StopsEntry_DoNotUse,
      ::std::string, ::ProtoTransport::Stop,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > stops_;
  ::google::protobuf::internal::MapField<
      Database_BusesEntry_DoNotUse,
      ::std::string, ::ProtoTransport::Bus,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > buses_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_database_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Stop

// double lat = 1;
inline void Stop::clear_lat() {
  lat_ = 0;
}
inline double Stop::lat() const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Stop.lat)
  return lat_;
}
inline void Stop::set_lat(double value) {
  
  lat_ = value;
  // @@protoc_insertion_point(field_set:ProtoTransport.Stop.lat)
}

// double lon = 2;
inline void Stop::clear_lon() {
  lon_ = 0;
}
inline double Stop::lon() const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Stop.lon)
  return lon_;
}
inline void Stop::set_lon(double value) {
  
  lon_ = value;
  // @@protoc_insertion_point(field_set:ProtoTransport.Stop.lon)
}

// map<string, int32> distance_to_stop_ = 3;
inline int Stop::distance_to_stop__size() const {
  return distance_to_stop__.size();
}
inline void Stop::clear_distance_to_stop_() {
  distance_to_stop__.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >&
Stop::distance_to_stop_() const {
  // @@protoc_insertion_point(field_map:ProtoTransport.Stop.distance_to_stop_)
  return distance_to_stop__.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >*
Stop::mutable_distance_to_stop_() {
  // @@protoc_insertion_point(field_mutable_map:ProtoTransport.Stop.distance_to_stop_)
  return distance_to_stop__.MutableMap();
}

// -------------------------------------------------------------------

// Bus

// uint64 stops = 1;
inline void Bus::clear_stops() {
  stops_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Bus::stops() const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Bus.stops)
  return stops_;
}
inline void Bus::set_stops(::google::protobuf::uint64 value) {
  
  stops_ = value;
  // @@protoc_insertion_point(field_set:ProtoTransport.Bus.stops)
}

// uint64 unique_stops = 2;
inline void Bus::clear_unique_stops() {
  unique_stops_ = PROTOBUF_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Bus::unique_stops() const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Bus.unique_stops)
  return unique_stops_;
}
inline void Bus::set_unique_stops(::google::protobuf::uint64 value) {
  
  unique_stops_ = value;
  // @@protoc_insertion_point(field_set:ProtoTransport.Bus.unique_stops)
}

// bool is_round_trip = 3;
inline void Bus::clear_is_round_trip() {
  is_round_trip_ = false;
}
inline bool Bus::is_round_trip() const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Bus.is_round_trip)
  return is_round_trip_;
}
inline void Bus::set_is_round_trip(bool value) {
  
  is_round_trip_ = value;
  // @@protoc_insertion_point(field_set:ProtoTransport.Bus.is_round_trip)
}

// repeated uint32 route = 4;
inline int Bus::route_size() const {
  return route_.size();
}
inline void Bus::clear_route() {
  route_.Clear();
}
inline ::google::protobuf::uint32 Bus::route(int index) const {
  // @@protoc_insertion_point(field_get:ProtoTransport.Bus.route)
  return route_.Get(index);
}
inline void Bus::set_route(int index, ::google::protobuf::uint32 value) {
  route_.Set(index, value);
  // @@protoc_insertion_point(field_set:ProtoTransport.Bus.route)
}
inline void Bus::add_route(::google::protobuf::uint32 value) {
  route_.Add(value);
  // @@protoc_insertion_point(field_add:ProtoTransport.Bus.route)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Bus::route() const {
  // @@protoc_insertion_point(field_list:ProtoTransport.Bus.route)
  return route_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Bus::mutable_route() {
  // @@protoc_insertion_point(field_mutable_list:ProtoTransport.Bus.route)
  return &route_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// Database

// map<string, .ProtoTransport.Stop> stops = 1;
inline int Database::stops_size() const {
  return stops_.size();
}
inline void Database::clear_stops() {
  stops_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::ProtoTransport::Stop >&
Database::stops() const {
  // @@protoc_insertion_point(field_map:ProtoTransport.Database.stops)
  return stops_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::ProtoTransport::Stop >*
Database::mutable_stops() {
  // @@protoc_insertion_point(field_mutable_map:ProtoTransport.Database.stops)
  return stops_.MutableMap();
}

// map<string, .ProtoTransport.Bus> buses = 2;
inline int Database::buses_size() const {
  return buses_.size();
}
inline void Database::clear_buses() {
  buses_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::ProtoTransport::Bus >&
Database::buses() const {
  // @@protoc_insertion_point(field_map:ProtoTransport.Database.buses)
  return buses_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::ProtoTransport::Bus >*
Database::mutable_buses() {
  // @@protoc_insertion_point(field_mutable_map:ProtoTransport.Database.buses)
  return buses_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoTransport

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_database_2eproto
