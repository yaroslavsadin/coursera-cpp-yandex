// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: provider.proto

#include "provider.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace YellowPages {
class ProviderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Provider> _instance;
} _Provider_default_instance_;
}  // namespace YellowPages
static void InitDefaultsProvider_provider_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::YellowPages::_Provider_default_instance_;
    new (ptr) ::YellowPages::Provider();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::YellowPages::Provider::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Provider_provider_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProvider_provider_2eproto}, {}};

void InitDefaults_provider_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Provider_provider_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_provider_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_provider_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_provider_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_provider_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Provider, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Provider, name_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Provider, priority_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::YellowPages::Provider)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::YellowPages::_Provider_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_provider_2eproto = {
  {}, AddDescriptors_provider_2eproto, "provider.proto", schemas,
  file_default_instances, TableStruct_provider_2eproto::offsets,
  file_level_metadata_provider_2eproto, 1, file_level_enum_descriptors_provider_2eproto, file_level_service_descriptors_provider_2eproto,
};

const char descriptor_table_protodef_provider_2eproto[] =
  "\n\016provider.proto\022\013YellowPages\"*\n\010Provide"
  "r\022\014\n\004name\030\001 \001(\t\022\020\n\010priority\030\002 \001(\rb\006proto"
  "3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_provider_2eproto = {
  false, InitDefaults_provider_2eproto, 
  descriptor_table_protodef_provider_2eproto,
  "provider.proto", &assign_descriptors_table_provider_2eproto, 81,
};

void AddDescriptors_provider_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_provider_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_provider_2eproto = []() { AddDescriptors_provider_2eproto(); return true; }();
namespace YellowPages {

// ===================================================================

void Provider::InitAsDefaultInstance() {
}
class Provider::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Provider::kNameFieldNumber;
const int Provider::kPriorityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Provider::Provider()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YellowPages.Provider)
}
Provider::Provider(const Provider& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  priority_ = from.priority_;
  // @@protoc_insertion_point(copy_constructor:YellowPages.Provider)
}

void Provider::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Provider_provider_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  priority_ = 0u;
}

Provider::~Provider() {
  // @@protoc_insertion_point(destructor:YellowPages.Provider)
  SharedDtor();
}

void Provider::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Provider::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Provider& Provider::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Provider_provider_2eproto.base);
  return *internal_default_instance();
}


void Provider::Clear() {
// @@protoc_insertion_point(message_clear_start:YellowPages.Provider)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  priority_ = 0u;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Provider::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Provider*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("YellowPages.Provider.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // uint32 priority = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_priority(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Provider::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:YellowPages.Provider)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "YellowPages.Provider.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 priority = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &priority_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YellowPages.Provider)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YellowPages.Provider)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Provider::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YellowPages.Provider)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "YellowPages.Provider.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // uint32 priority = 2;
  if (this->priority() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->priority(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:YellowPages.Provider)
}

::google::protobuf::uint8* Provider::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:YellowPages.Provider)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "YellowPages.Provider.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // uint32 priority = 2;
  if (this->priority() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->priority(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:YellowPages.Provider)
  return target;
}

size_t Provider::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:YellowPages.Provider)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // uint32 priority = 2;
  if (this->priority() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->priority());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Provider::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:YellowPages.Provider)
  GOOGLE_DCHECK_NE(&from, this);
  const Provider* source =
      ::google::protobuf::DynamicCastToGenerated<Provider>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:YellowPages.Provider)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:YellowPages.Provider)
    MergeFrom(*source);
  }
}

void Provider::MergeFrom(const Provider& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:YellowPages.Provider)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.priority() != 0) {
    set_priority(from.priority());
  }
}

void Provider::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:YellowPages.Provider)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Provider::CopyFrom(const Provider& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:YellowPages.Provider)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Provider::IsInitialized() const {
  return true;
}

void Provider::Swap(Provider* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Provider::InternalSwap(Provider* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(priority_, other->priority_);
}

::google::protobuf::Metadata Provider::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_provider_2eproto);
  return ::file_level_metadata_provider_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace YellowPages
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::YellowPages::Provider* Arena::CreateMaybeMessage< ::YellowPages::Provider >(Arena* arena) {
  return Arena::CreateInternal< ::YellowPages::Provider >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>