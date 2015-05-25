// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_import.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_import.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest_import {

namespace {

const ::google::protobuf::Descriptor* ImportMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImportMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ImportEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_import.proto");
  GOOGLE_CHECK(file != NULL);
  ImportMessage_descriptor_ = file->message_type(0);
  static const int ImportMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, d_),
  };
  ImportMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ImportMessage_descriptor_,
      ImportMessage::default_instance_,
      ImportMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(ImportMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, _internal_metadata_),
      -1);
  ImportEnum_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ImportMessage_descriptor_, &ImportMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto() {
  delete ImportMessage::default_instance_;
  delete ImportMessage_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_unittest_import::protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_5fpublic_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%google/protobuf/unittest_import.proto\022"
    "\030protobuf_unittest_import\032,google/protob"
    "uf/unittest_import_public.proto\"\032\n\rImpor"
    "tMessage\022\t\n\001d\030\001 \001(\005*<\n\nImportEnum\022\016\n\nIMP"
    "ORT_FOO\020\007\022\016\n\nIMPORT_BAR\020\010\022\016\n\nIMPORT_BAZ\020"
    "\tB\037\n\030com.google.protobuf.testH\001\370\001\001P\000", 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_import.proto", &protobuf_RegisterTypes);
  ImportMessage::default_instance_ = new ImportMessage();
  ImportMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fimport_2eproto_;
const ::google::protobuf::EnumDescriptor* ImportEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImportEnum_descriptor_;
}
bool ImportEnum_IsValid(int value) {
  switch(value) {
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int ImportMessage::kDFieldNumber;
#endif  // !_MSC_VER

ImportMessage::ImportMessage()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest_import.ImportMessage)
}

ImportMessage::ImportMessage(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest_import.ImportMessage)
}

void ImportMessage::InitAsDefaultInstance() {
}

ImportMessage::ImportMessage(const ImportMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest_import.ImportMessage)
}

void ImportMessage::SharedCtor() {
  _cached_size_ = 0;
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImportMessage::~ImportMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_import.ImportMessage)
  SharedDtor();
}

void ImportMessage::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void ImportMessage::ArenaDtor(void* object) {
  ImportMessage* _this = reinterpret_cast< ImportMessage* >(object);
  (void)_this;
}
void ImportMessage::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ImportMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImportMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImportMessage_descriptor_;
}

const ImportMessage& ImportMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  return *default_instance_;
}

ImportMessage* ImportMessage::default_instance_ = NULL;

ImportMessage* ImportMessage::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ImportMessage>(arena);
}

void ImportMessage::Clear() {
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ImportMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest_import.ImportMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 d = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &d_)));
          set_has_d();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest_import.ImportMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest_import.ImportMessage)
  return false;
#undef DO_
}

void ImportMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest_import.ImportMessage)
  // optional int32 d = 1;
  if (has_d()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->d(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest_import.ImportMessage)
}

::google::protobuf::uint8* ImportMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest_import.ImportMessage)
  // optional int32 d = 1;
  if (has_d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->d(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest_import.ImportMessage)
  return target;
}

int ImportMessage::ByteSize() const {
  int total_size = 0;

  // optional int32 d = 1;
  if (has_d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->d());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ImportMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ImportMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ImportMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ImportMessage::MergeFrom(const ImportMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_d()) {
      set_d(from.d());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ImportMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportMessage::CopyFrom(const ImportMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportMessage::IsInitialized() const {

  return true;
}

void ImportMessage::Swap(ImportMessage* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ImportMessage temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void ImportMessage::UnsafeArenaSwap(ImportMessage* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ImportMessage::InternalSwap(ImportMessage* other) {
  std::swap(d_, other->d_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ImportMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImportMessage_descriptor_;
  metadata.reflection = ImportMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ImportMessage

// optional int32 d = 1;
 bool ImportMessage::has_d() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void ImportMessage::set_has_d() {
  _has_bits_[0] |= 0x00000001u;
}
 void ImportMessage::clear_has_d() {
  _has_bits_[0] &= ~0x00000001u;
}
 void ImportMessage::clear_d() {
  d_ = 0;
  clear_has_d();
}
 ::google::protobuf::int32 ImportMessage::d() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest_import.ImportMessage.d)
  return d_;
}
 void ImportMessage::set_d(::google::protobuf::int32 value) {
  set_has_d();
  d_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest_import.ImportMessage.d)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_import

// @@protoc_insertion_point(global_scope)
