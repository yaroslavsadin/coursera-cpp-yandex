// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: phone.proto

#ifndef PROTOBUF_INCLUDED_phone_2eproto
#define PROTOBUF_INCLUDED_phone_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_phone_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_phone_2eproto {
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
void AddDescriptors_phone_2eproto();
namespace YellowPages {
class Phone;
class PhoneDefaultTypeInternal;
extern PhoneDefaultTypeInternal _Phone_default_instance_;
}  // namespace YellowPages
namespace google {
namespace protobuf {
template<> ::YellowPages::Phone* Arena::CreateMaybeMessage<::YellowPages::Phone>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace YellowPages {

enum Phone_Type {
  Phone_Type_PHONE = 0,
  Phone_Type_FAX = 1,
  Phone_Type_Phone_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Phone_Type_Phone_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Phone_Type_IsValid(int value);
const Phone_Type Phone_Type_Type_MIN = Phone_Type_PHONE;
const Phone_Type Phone_Type_Type_MAX = Phone_Type_FAX;
const int Phone_Type_Type_ARRAYSIZE = Phone_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Phone_Type_descriptor();
inline const ::std::string& Phone_Type_Name(Phone_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Phone_Type_descriptor(), value);
}
inline bool Phone_Type_Parse(
    const ::std::string& name, Phone_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Phone_Type>(
    Phone_Type_descriptor(), name, value);
}
// ===================================================================

class Phone :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:YellowPages.Phone) */ {
 public:
  Phone();
  virtual ~Phone();

  Phone(const Phone& from);

  inline Phone& operator=(const Phone& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Phone(Phone&& from) noexcept
    : Phone() {
    *this = ::std::move(from);
  }

  inline Phone& operator=(Phone&& from) noexcept {
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
  static const Phone& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Phone* internal_default_instance() {
    return reinterpret_cast<const Phone*>(
               &_Phone_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Phone* other);
  friend void swap(Phone& a, Phone& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Phone* New() const final {
    return CreateMaybeMessage<Phone>(nullptr);
  }

  Phone* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Phone>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Phone& from);
  void MergeFrom(const Phone& from);
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
  void InternalSwap(Phone* other);
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

  typedef Phone_Type Type;
  static const Type PHONE =
    Phone_Type_PHONE;
  static const Type FAX =
    Phone_Type_FAX;
  static inline bool Type_IsValid(int value) {
    return Phone_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Phone_Type_Type_MIN;
  static const Type Type_MAX =
    Phone_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Phone_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Phone_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Phone_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Phone_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string formatted = 1;
  void clear_formatted();
  static const int kFormattedFieldNumber = 1;
  const ::std::string& formatted() const;
  void set_formatted(const ::std::string& value);
  #if LANG_CXX11
  void set_formatted(::std::string&& value);
  #endif
  void set_formatted(const char* value);
  void set_formatted(const char* value, size_t size);
  ::std::string* mutable_formatted();
  ::std::string* release_formatted();
  void set_allocated_formatted(::std::string* formatted);

  // string country_code = 3;
  void clear_country_code();
  static const int kCountryCodeFieldNumber = 3;
  const ::std::string& country_code() const;
  void set_country_code(const ::std::string& value);
  #if LANG_CXX11
  void set_country_code(::std::string&& value);
  #endif
  void set_country_code(const char* value);
  void set_country_code(const char* value, size_t size);
  ::std::string* mutable_country_code();
  ::std::string* release_country_code();
  void set_allocated_country_code(::std::string* country_code);

  // string local_code = 4;
  void clear_local_code();
  static const int kLocalCodeFieldNumber = 4;
  const ::std::string& local_code() const;
  void set_local_code(const ::std::string& value);
  #if LANG_CXX11
  void set_local_code(::std::string&& value);
  #endif
  void set_local_code(const char* value);
  void set_local_code(const char* value, size_t size);
  ::std::string* mutable_local_code();
  ::std::string* release_local_code();
  void set_allocated_local_code(::std::string* local_code);

  // string number = 5;
  void clear_number();
  static const int kNumberFieldNumber = 5;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  #if LANG_CXX11
  void set_number(::std::string&& value);
  #endif
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // string extension = 6;
  void clear_extension();
  static const int kExtensionFieldNumber = 6;
  const ::std::string& extension() const;
  void set_extension(const ::std::string& value);
  #if LANG_CXX11
  void set_extension(::std::string&& value);
  #endif
  void set_extension(const char* value);
  void set_extension(const char* value, size_t size);
  ::std::string* mutable_extension();
  ::std::string* release_extension();
  void set_allocated_extension(::std::string* extension);

  // string description = 7;
  void clear_description();
  static const int kDescriptionFieldNumber = 7;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // .YellowPages.Phone.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::YellowPages::Phone_Type type() const;
  void set_type(::YellowPages::Phone_Type value);

  // @@protoc_insertion_point(class_scope:YellowPages.Phone)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr formatted_;
  ::google::protobuf::internal::ArenaStringPtr country_code_;
  ::google::protobuf::internal::ArenaStringPtr local_code_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  ::google::protobuf::internal::ArenaStringPtr extension_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_phone_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Phone

// string formatted = 1;
inline void Phone::clear_formatted() {
  formatted_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::formatted() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.formatted)
  return formatted_.GetNoArena();
}
inline void Phone::set_formatted(const ::std::string& value) {
  
  formatted_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.formatted)
}
#if LANG_CXX11
inline void Phone::set_formatted(::std::string&& value) {
  
  formatted_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.formatted)
}
#endif
inline void Phone::set_formatted(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  formatted_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.formatted)
}
inline void Phone::set_formatted(const char* value, size_t size) {
  
  formatted_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.formatted)
}
inline ::std::string* Phone::mutable_formatted() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.formatted)
  return formatted_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_formatted() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.formatted)
  
  return formatted_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_formatted(::std::string* formatted) {
  if (formatted != nullptr) {
    
  } else {
    
  }
  formatted_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), formatted);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.formatted)
}

// .YellowPages.Phone.Type type = 2;
inline void Phone::clear_type() {
  type_ = 0;
}
inline ::YellowPages::Phone_Type Phone::type() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.type)
  return static_cast< ::YellowPages::Phone_Type >(type_);
}
inline void Phone::set_type(::YellowPages::Phone_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:YellowPages.Phone.type)
}

// string country_code = 3;
inline void Phone::clear_country_code() {
  country_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::country_code() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.country_code)
  return country_code_.GetNoArena();
}
inline void Phone::set_country_code(const ::std::string& value) {
  
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.country_code)
}
#if LANG_CXX11
inline void Phone::set_country_code(::std::string&& value) {
  
  country_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.country_code)
}
#endif
inline void Phone::set_country_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.country_code)
}
inline void Phone::set_country_code(const char* value, size_t size) {
  
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.country_code)
}
inline ::std::string* Phone::mutable_country_code() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.country_code)
  return country_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_country_code() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.country_code)
  
  return country_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_country_code(::std::string* country_code) {
  if (country_code != nullptr) {
    
  } else {
    
  }
  country_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), country_code);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.country_code)
}

// string local_code = 4;
inline void Phone::clear_local_code() {
  local_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::local_code() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.local_code)
  return local_code_.GetNoArena();
}
inline void Phone::set_local_code(const ::std::string& value) {
  
  local_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.local_code)
}
#if LANG_CXX11
inline void Phone::set_local_code(::std::string&& value) {
  
  local_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.local_code)
}
#endif
inline void Phone::set_local_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  local_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.local_code)
}
inline void Phone::set_local_code(const char* value, size_t size) {
  
  local_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.local_code)
}
inline ::std::string* Phone::mutable_local_code() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.local_code)
  return local_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_local_code() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.local_code)
  
  return local_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_local_code(::std::string* local_code) {
  if (local_code != nullptr) {
    
  } else {
    
  }
  local_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), local_code);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.local_code)
}

// string number = 5;
inline void Phone::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::number() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.number)
  return number_.GetNoArena();
}
inline void Phone::set_number(const ::std::string& value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.number)
}
#if LANG_CXX11
inline void Phone::set_number(::std::string&& value) {
  
  number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.number)
}
#endif
inline void Phone::set_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.number)
}
inline void Phone::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.number)
}
inline ::std::string* Phone::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_number() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.number)
  
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_number(::std::string* number) {
  if (number != nullptr) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.number)
}

// string extension = 6;
inline void Phone::clear_extension() {
  extension_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::extension() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.extension)
  return extension_.GetNoArena();
}
inline void Phone::set_extension(const ::std::string& value) {
  
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.extension)
}
#if LANG_CXX11
inline void Phone::set_extension(::std::string&& value) {
  
  extension_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.extension)
}
#endif
inline void Phone::set_extension(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.extension)
}
inline void Phone::set_extension(const char* value, size_t size) {
  
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.extension)
}
inline ::std::string* Phone::mutable_extension() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.extension)
  return extension_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_extension() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.extension)
  
  return extension_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_extension(::std::string* extension) {
  if (extension != nullptr) {
    
  } else {
    
  }
  extension_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extension);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.extension)
}

// string description = 7;
inline void Phone::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Phone::description() const {
  // @@protoc_insertion_point(field_get:YellowPages.Phone.description)
  return description_.GetNoArena();
}
inline void Phone::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:YellowPages.Phone.description)
}
#if LANG_CXX11
inline void Phone::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:YellowPages.Phone.description)
}
#endif
inline void Phone::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:YellowPages.Phone.description)
}
inline void Phone::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:YellowPages.Phone.description)
}
inline ::std::string* Phone::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:YellowPages.Phone.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Phone::release_description() {
  // @@protoc_insertion_point(field_release:YellowPages.Phone.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Phone::set_allocated_description(::std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:YellowPages.Phone.description)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace YellowPages

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::YellowPages::Phone_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::YellowPages::Phone_Type>() {
  return ::YellowPages::Phone_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_phone_2eproto
