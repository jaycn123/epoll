// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* TestProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  TestProto_descriptor_ = file->message_type(0);
  static const int TestProto_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestProto, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestProto, name_),
  };
  TestProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestProto_descriptor_,
      TestProto::default_instance_,
      TestProto_offsets_,
      -1,
      -1,
      -1,
      sizeof(TestProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestProto, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestProto, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestProto_descriptor_, &TestProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete TestProto::default_instance_;
  delete TestProto_reflection_;
}

void protobuf_AddDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\"%\n\tTestProto\022\n\n\002id\030\001 \001(\005\022\014\n"
    "\004name\030\002 \001(\tb\006proto3", 59);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  TestProto::default_instance_ = new TestProto();
  TestProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestProto::kIdFieldNumber;
const int TestProto::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestProto::TestProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:TestProto)
}

void TestProto::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

TestProto::TestProto(const TestProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:TestProto)
}

void TestProto::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

TestProto::~TestProto() {
  // @@protoc_insertion_point(destructor:TestProto)
  SharedDtor();
}

void TestProto::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void TestProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestProto_descriptor_;
}

const TestProto& TestProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

TestProto* TestProto::default_instance_ = NULL;

TestProto* TestProto::New(::google::protobuf::Arena* arena) const {
  TestProto* n = new TestProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestProto::Clear() {
// @@protoc_insertion_point(message_clear_start:TestProto)
  id_ = 0;
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool TestProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TestProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "TestProto.name"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:TestProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TestProto)
  return false;
#undef DO_
}

void TestProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TestProto)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestProto.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // @@protoc_insertion_point(serialize_end:TestProto)
}

::google::protobuf::uint8* TestProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestProto)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestProto.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:TestProto)
  return target;
}

int TestProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:TestProto)
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TestProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TestProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TestProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TestProto)
    MergeFrom(*source);
  }
}

void TestProto::MergeFrom(const TestProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void TestProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TestProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestProto::CopyFrom(const TestProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestProto::IsInitialized() const {

  return true;
}

void TestProto::Swap(TestProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestProto::InternalSwap(TestProto* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestProto_descriptor_;
  metadata.reflection = TestProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestProto

// optional int32 id = 1;
void TestProto::clear_id() {
  id_ = 0;
}
 ::google::protobuf::int32 TestProto::id() const {
  // @@protoc_insertion_point(field_get:TestProto.id)
  return id_;
}
 void TestProto::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:TestProto.id)
}

// optional string name = 2;
void TestProto::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& TestProto::name() const {
  // @@protoc_insertion_point(field_get:TestProto.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TestProto::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TestProto.name)
}
 void TestProto::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestProto.name)
}
 void TestProto::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestProto.name)
}
 ::std::string* TestProto::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:TestProto.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* TestProto::release_name() {
  // @@protoc_insertion_point(field_release:TestProto.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void TestProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:TestProto.name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)