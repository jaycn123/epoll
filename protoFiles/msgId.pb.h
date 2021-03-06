// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgId.proto

#ifndef PROTOBUF_msgId_2eproto__INCLUDED
#define PROTOBUF_msgId_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_msgId_2eproto();
void protobuf_AssignDesc_msgId_2eproto();
void protobuf_ShutdownFile_msgId_2eproto();

class Msg_Connetc_Info;
class Msg_Connetc_Notice;
class Msg_Heartbeat_Ack;
class Msg_Heartbeat_Req;

enum MessageID {
  MSGID_BEGIN = 0,
  MSGID_HEARTBEAT_REQ = 1,
  MSGID_HEARTBEAT_ACK = 2,
  MSGID_CONNETC_NOTICE = 3,
  MSGID_CONNETC_INFO = 4,
  MSGID_LOGINMSG_BEGIN = 1000000,
  MSGID_LOGINACCOUNT_REQ = 1000001,
  MSGID_LOGINACCOUNT_ACK = 1000002,
  MSGID_REGISTERACCOUNT_REQ = 1000003,
  MSGID_REGISTERACCOUNT_ACK = 1000004,
  MSGID_LOGINMSG_END = 1999999,
  MSGID_GAMEMSG_BEGIN = 2000000,
  MSGID_CREATEPLAYER_REQ = 2000001,
  MSGID_CREATEPLAYER_ACK = 2000002,
  MSGID_LOGINPLAYER_REQ = 2000003,
  MSGID_LOGINPLAYER_ACK = 2000004,
  MSGID_LOGINOFF_REQ = 2000005,
  MSGID_LOGINOFF_ACK = 2000006,
  MSGID_GAMEMSG_END = 2999999,
  MessageID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageID_IsValid(int value);
const MessageID MessageID_MIN = MSGID_BEGIN;
const MessageID MessageID_MAX = MSGID_GAMEMSG_END;
const int MessageID_ARRAYSIZE = MessageID_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageID_descriptor();
inline const ::std::string& MessageID_Name(MessageID value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageID_descriptor(), value);
}
inline bool MessageID_Parse(
    const ::std::string& name, MessageID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageID>(
    MessageID_descriptor(), name, value);
}
enum ErrorID {
  Succeed = 0,
  PasswordError = 1,
  UserRepetition = 2,
  UserIllegal = 3,
  UserNotFound = 4,
  ErrorID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ErrorID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ErrorID_IsValid(int value);
const ErrorID ErrorID_MIN = Succeed;
const ErrorID ErrorID_MAX = UserNotFound;
const int ErrorID_ARRAYSIZE = ErrorID_MAX + 1;

const ::google::protobuf::EnumDescriptor* ErrorID_descriptor();
inline const ::std::string& ErrorID_Name(ErrorID value) {
  return ::google::protobuf::internal::NameOfEnum(
    ErrorID_descriptor(), value);
}
inline bool ErrorID_Parse(
    const ::std::string& name, ErrorID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ErrorID>(
    ErrorID_descriptor(), name, value);
}
enum ServerType {
  ST_Client = 0,
  ST_Account = 1,
  ST_Game = 2,
  ST_Gate = 3,
  ST_World = 4,
  ServerType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ServerType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ServerType_IsValid(int value);
const ServerType ServerType_MIN = ST_Client;
const ServerType ServerType_MAX = ST_World;
const int ServerType_ARRAYSIZE = ServerType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ServerType_descriptor();
inline const ::std::string& ServerType_Name(ServerType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ServerType_descriptor(), value);
}
inline bool ServerType_Parse(
    const ::std::string& name, ServerType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ServerType>(
    ServerType_descriptor(), name, value);
}
// ===================================================================

class Msg_Heartbeat_Req : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg_Heartbeat_Req) */ {
 public:
  Msg_Heartbeat_Req();
  virtual ~Msg_Heartbeat_Req();

  Msg_Heartbeat_Req(const Msg_Heartbeat_Req& from);

  inline Msg_Heartbeat_Req& operator=(const Msg_Heartbeat_Req& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg_Heartbeat_Req& default_instance();

  void Swap(Msg_Heartbeat_Req* other);

  // implements Message ----------------------------------------------

  inline Msg_Heartbeat_Req* New() const { return New(NULL); }

  Msg_Heartbeat_Req* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg_Heartbeat_Req& from);
  void MergeFrom(const Msg_Heartbeat_Req& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Msg_Heartbeat_Req* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 index = 1;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::uint64 index() const;
  void set_index(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Msg_Heartbeat_Req)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 index_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msgId_2eproto();
  friend void protobuf_AssignDesc_msgId_2eproto();
  friend void protobuf_ShutdownFile_msgId_2eproto();

  void InitAsDefaultInstance();
  static Msg_Heartbeat_Req* default_instance_;
};
// -------------------------------------------------------------------

class Msg_Heartbeat_Ack : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg_Heartbeat_Ack) */ {
 public:
  Msg_Heartbeat_Ack();
  virtual ~Msg_Heartbeat_Ack();

  Msg_Heartbeat_Ack(const Msg_Heartbeat_Ack& from);

  inline Msg_Heartbeat_Ack& operator=(const Msg_Heartbeat_Ack& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg_Heartbeat_Ack& default_instance();

  void Swap(Msg_Heartbeat_Ack* other);

  // implements Message ----------------------------------------------

  inline Msg_Heartbeat_Ack* New() const { return New(NULL); }

  Msg_Heartbeat_Ack* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg_Heartbeat_Ack& from);
  void MergeFrom(const Msg_Heartbeat_Ack& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Msg_Heartbeat_Ack* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 index = 1;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::uint64 index() const;
  void set_index(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Msg_Heartbeat_Ack)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 index_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msgId_2eproto();
  friend void protobuf_AssignDesc_msgId_2eproto();
  friend void protobuf_ShutdownFile_msgId_2eproto();

  void InitAsDefaultInstance();
  static Msg_Heartbeat_Ack* default_instance_;
};
// -------------------------------------------------------------------

class Msg_Connetc_Notice : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg_Connetc_Notice) */ {
 public:
  Msg_Connetc_Notice();
  virtual ~Msg_Connetc_Notice();

  Msg_Connetc_Notice(const Msg_Connetc_Notice& from);

  inline Msg_Connetc_Notice& operator=(const Msg_Connetc_Notice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg_Connetc_Notice& default_instance();

  void Swap(Msg_Connetc_Notice* other);

  // implements Message ----------------------------------------------

  inline Msg_Connetc_Notice* New() const { return New(NULL); }

  Msg_Connetc_Notice* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg_Connetc_Notice& from);
  void MergeFrom(const Msg_Connetc_Notice& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Msg_Connetc_Notice* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 connid = 1;
  void clear_connid();
  static const int kConnidFieldNumber = 1;
  ::google::protobuf::int32 connid() const;
  void set_connid(::google::protobuf::int32 value);

  // optional int32 status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Msg_Connetc_Notice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 connid_;
  ::google::protobuf::int32 status_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msgId_2eproto();
  friend void protobuf_AssignDesc_msgId_2eproto();
  friend void protobuf_ShutdownFile_msgId_2eproto();

  void InitAsDefaultInstance();
  static Msg_Connetc_Notice* default_instance_;
};
// -------------------------------------------------------------------

class Msg_Connetc_Info : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg_Connetc_Info) */ {
 public:
  Msg_Connetc_Info();
  virtual ~Msg_Connetc_Info();

  Msg_Connetc_Info(const Msg_Connetc_Info& from);

  inline Msg_Connetc_Info& operator=(const Msg_Connetc_Info& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg_Connetc_Info& default_instance();

  void Swap(Msg_Connetc_Info* other);

  // implements Message ----------------------------------------------

  inline Msg_Connetc_Info* New() const { return New(NULL); }

  Msg_Connetc_Info* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg_Connetc_Info& from);
  void MergeFrom(const Msg_Connetc_Info& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Msg_Connetc_Info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .ServerType stype = 1;
  void clear_stype();
  static const int kStypeFieldNumber = 1;
  ::ServerType stype() const;
  void set_stype(::ServerType value);

  // optional int32 serverid = 2;
  void clear_serverid();
  static const int kServeridFieldNumber = 2;
  ::google::protobuf::int32 serverid() const;
  void set_serverid(::google::protobuf::int32 value);

  // optional string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:Msg_Connetc_Info)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int stype_;
  ::google::protobuf::int32 serverid_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_msgId_2eproto();
  friend void protobuf_AssignDesc_msgId_2eproto();
  friend void protobuf_ShutdownFile_msgId_2eproto();

  void InitAsDefaultInstance();
  static Msg_Connetc_Info* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Msg_Heartbeat_Req

// optional uint64 index = 1;
inline void Msg_Heartbeat_Req::clear_index() {
  index_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Msg_Heartbeat_Req::index() const {
  // @@protoc_insertion_point(field_get:Msg_Heartbeat_Req.index)
  return index_;
}
inline void Msg_Heartbeat_Req::set_index(::google::protobuf::uint64 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:Msg_Heartbeat_Req.index)
}

// -------------------------------------------------------------------

// Msg_Heartbeat_Ack

// optional uint64 index = 1;
inline void Msg_Heartbeat_Ack::clear_index() {
  index_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Msg_Heartbeat_Ack::index() const {
  // @@protoc_insertion_point(field_get:Msg_Heartbeat_Ack.index)
  return index_;
}
inline void Msg_Heartbeat_Ack::set_index(::google::protobuf::uint64 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:Msg_Heartbeat_Ack.index)
}

// -------------------------------------------------------------------

// Msg_Connetc_Notice

// optional int32 connid = 1;
inline void Msg_Connetc_Notice::clear_connid() {
  connid_ = 0;
}
inline ::google::protobuf::int32 Msg_Connetc_Notice::connid() const {
  // @@protoc_insertion_point(field_get:Msg_Connetc_Notice.connid)
  return connid_;
}
inline void Msg_Connetc_Notice::set_connid(::google::protobuf::int32 value) {
  
  connid_ = value;
  // @@protoc_insertion_point(field_set:Msg_Connetc_Notice.connid)
}

// optional int32 status = 2;
inline void Msg_Connetc_Notice::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 Msg_Connetc_Notice::status() const {
  // @@protoc_insertion_point(field_get:Msg_Connetc_Notice.status)
  return status_;
}
inline void Msg_Connetc_Notice::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:Msg_Connetc_Notice.status)
}

// -------------------------------------------------------------------

// Msg_Connetc_Info

// optional .ServerType stype = 1;
inline void Msg_Connetc_Info::clear_stype() {
  stype_ = 0;
}
inline ::ServerType Msg_Connetc_Info::stype() const {
  // @@protoc_insertion_point(field_get:Msg_Connetc_Info.stype)
  return static_cast< ::ServerType >(stype_);
}
inline void Msg_Connetc_Info::set_stype(::ServerType value) {
  
  stype_ = value;
  // @@protoc_insertion_point(field_set:Msg_Connetc_Info.stype)
}

// optional int32 serverid = 2;
inline void Msg_Connetc_Info::clear_serverid() {
  serverid_ = 0;
}
inline ::google::protobuf::int32 Msg_Connetc_Info::serverid() const {
  // @@protoc_insertion_point(field_get:Msg_Connetc_Info.serverid)
  return serverid_;
}
inline void Msg_Connetc_Info::set_serverid(::google::protobuf::int32 value) {
  
  serverid_ = value;
  // @@protoc_insertion_point(field_set:Msg_Connetc_Info.serverid)
}

// optional string name = 3;
inline void Msg_Connetc_Info::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Msg_Connetc_Info::name() const {
  // @@protoc_insertion_point(field_get:Msg_Connetc_Info.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg_Connetc_Info::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Msg_Connetc_Info.name)
}
inline void Msg_Connetc_Info::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Msg_Connetc_Info.name)
}
inline void Msg_Connetc_Info::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Msg_Connetc_Info.name)
}
inline ::std::string* Msg_Connetc_Info::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Msg_Connetc_Info.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msg_Connetc_Info::release_name() {
  // @@protoc_insertion_point(field_release:Msg_Connetc_Info.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg_Connetc_Info::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Msg_Connetc_Info.name)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MessageID>() {
  return ::MessageID_descriptor();
}
template <> struct is_proto_enum< ::ErrorID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ErrorID>() {
  return ::ErrorID_descriptor();
}
template <> struct is_proto_enum< ::ServerType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ServerType>() {
  return ::ServerType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msgId_2eproto__INCLUDED
