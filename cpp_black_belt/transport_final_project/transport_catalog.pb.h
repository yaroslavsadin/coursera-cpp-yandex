// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport_catalog.proto

#ifndef PROTOBUF_INCLUDED_transport_5fcatalog_2eproto
#define PROTOBUF_INCLUDED_transport_5fcatalog_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "database.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_transport_5fcatalog_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_transport_5fcatalog_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_transport_5fcatalog_2eproto();
class PBTransport;
class PBTransportDefaultTypeInternal;
extern PBTransportDefaultTypeInternal _PBTransport_default_instance_;
namespace google {
namespace protobuf {
template<> ::PBTransport* Arena::CreateMaybeMessage<::PBTransport>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class PBTransport :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PBTransport) */ {
 public:
  PBTransport();
  virtual ~PBTransport();

  PBTransport(const PBTransport& from);

  inline PBTransport& operator=(const PBTransport& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PBTransport(PBTransport&& from) noexcept
    : PBTransport() {
    *this = ::std::move(from);
  }

  inline PBTransport& operator=(PBTransport&& from) noexcept {
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
  static const PBTransport& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PBTransport* internal_default_instance() {
    return reinterpret_cast<const PBTransport*>(
               &_PBTransport_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PBTransport* other);
  friend void swap(PBTransport& a, PBTransport& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PBTransport* New() const final {
    return CreateMaybeMessage<PBTransport>(nullptr);
  }

  PBTransport* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PBTransport>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PBTransport& from);
  void MergeFrom(const PBTransport& from);
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
  void InternalSwap(PBTransport* other);
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

  // .PBDatabase db = 1;
  bool has_db() const;
  void clear_db();
  static const int kDbFieldNumber = 1;
  const ::PBDatabase& db() const;
  ::PBDatabase* release_db();
  ::PBDatabase* mutable_db();
  void set_allocated_db(::PBDatabase* db);

  // @@protoc_insertion_point(class_scope:PBTransport)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::PBDatabase* db_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_transport_5fcatalog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PBTransport

// .PBDatabase db = 1;
inline bool PBTransport::has_db() const {
  return this != internal_default_instance() && db_ != nullptr;
}
inline const ::PBDatabase& PBTransport::db() const {
  const ::PBDatabase* p = db_;
  // @@protoc_insertion_point(field_get:PBTransport.db)
  return p != nullptr ? *p : *reinterpret_cast<const ::PBDatabase*>(
      &::_PBDatabase_default_instance_);
}
inline ::PBDatabase* PBTransport::release_db() {
  // @@protoc_insertion_point(field_release:PBTransport.db)
  
  ::PBDatabase* temp = db_;
  db_ = nullptr;
  return temp;
}
inline ::PBDatabase* PBTransport::mutable_db() {
  
  if (db_ == nullptr) {
    auto* p = CreateMaybeMessage<::PBDatabase>(GetArenaNoVirtual());
    db_ = p;
  }
  // @@protoc_insertion_point(field_mutable:PBTransport.db)
  return db_;
}
inline void PBTransport::set_allocated_db(::PBDatabase* db) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(db_);
  }
  if (db) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      db = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, db, submessage_arena);
    }
    
  } else {
    
  }
  db_ = db;
  // @@protoc_insertion_point(field_set_allocated:PBTransport.db)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_transport_5fcatalog_2eproto
