// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class TestProto;
class HeartBeatReq;

// ===================================================================

class TestProto : public ::google::protobuf::Message {
 public:
  TestProto();
  virtual ~TestProto();

  TestProto(const TestProto& from);

  inline TestProto& operator=(const TestProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestProto& default_instance();

  void Swap(TestProto* other);

  // implements Message ----------------------------------------------

  TestProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestProto& from);
  void MergeFrom(const TestProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:TestProto)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static TestProto* default_instance_;
};
// -------------------------------------------------------------------

class HeartBeatReq : public ::google::protobuf::Message {
 public:
  HeartBeatReq();
  virtual ~HeartBeatReq();

  HeartBeatReq(const HeartBeatReq& from);

  inline HeartBeatReq& operator=(const HeartBeatReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const HeartBeatReq& default_instance();

  void Swap(HeartBeatReq* other);

  // implements Message ----------------------------------------------

  HeartBeatReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeartBeatReq& from);
  void MergeFrom(const HeartBeatReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 connid = 1;
  inline bool has_connid() const;
  inline void clear_connid();
  static const int kConnidFieldNumber = 1;
  inline ::google::protobuf::int32 connid() const;
  inline void set_connid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:HeartBeatReq)
 private:
  inline void set_has_connid();
  inline void clear_has_connid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 connid_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static HeartBeatReq* default_instance_;
};
// ===================================================================


// ===================================================================

// TestProto

// optional int32 id = 1;
inline bool TestProto::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestProto::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestProto::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestProto::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TestProto::id() const {
  // @@protoc_insertion_point(field_get:TestProto.id)
  return id_;
}
inline void TestProto::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:TestProto.id)
}

// optional string name = 2;
inline bool TestProto::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestProto::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestProto::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestProto::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& TestProto::name() const {
  // @@protoc_insertion_point(field_get:TestProto.name)
  return *name_;
}
inline void TestProto::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:TestProto.name)
}
inline void TestProto::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:TestProto.name)
}
inline void TestProto::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TestProto.name)
}
inline ::std::string* TestProto::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:TestProto.name)
  return name_;
}
inline ::std::string* TestProto::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void TestProto::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:TestProto.name)
}

// -------------------------------------------------------------------

// HeartBeatReq

// optional int32 connid = 1;
inline bool HeartBeatReq::has_connid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HeartBeatReq::set_has_connid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HeartBeatReq::clear_has_connid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HeartBeatReq::clear_connid() {
  connid_ = 0;
  clear_has_connid();
}
inline ::google::protobuf::int32 HeartBeatReq::connid() const {
  // @@protoc_insertion_point(field_get:HeartBeatReq.connid)
  return connid_;
}
inline void HeartBeatReq::set_connid(::google::protobuf::int32 value) {
  set_has_connid();
  connid_ = value;
  // @@protoc_insertion_point(field_set:HeartBeatReq.connid)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
