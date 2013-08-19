// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dota_commonmessages.proto

#ifndef PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED
#define PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/descriptor.pb.h"
#include "networkbasetypes.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

class CDOTAMsg_LocationPing;
class CDOTAMsg_ItemAlert;
class CDOTAMsg_MapLine;
class CDOTAMsg_WorldLine;
class CDOTAMsg_SendStatPopup;

enum EDOTAChatWheelMessage {
  k_EDOTA_CW_Ok = 0,
  k_EDOTA_CW_Care = 1,
  k_EDOTA_CW_GetBack = 2,
  k_EDOTA_CW_NeedWards = 3,
  k_EDOTA_CW_Stun = 4,
  k_EDOTA_CW_Help = 5,
  k_EDOTA_CW_Push = 6,
  k_EDOTA_CW_GoodJob = 7,
  k_EDOTA_CW_Missing = 8,
  k_EDOTA_CW_Missing_Top = 9,
  k_EDOTA_CW_Missing_Mid = 10,
  k_EDOTA_CW_Missing_Bottom = 11,
  k_EDOTA_CW_Go = 12,
  k_EDOTA_CW_Initiate = 13,
  k_EDOTA_CW_Follow = 14,
  k_EDOTA_CW_Group_Up = 15,
  k_EDOTA_CW_Spread_Out = 16,
  k_EDOTA_CW_Split_Farm = 17,
  k_EDOTA_CW_Attack = 18,
  k_EDOTA_CW_BRB = 19,
  k_EDOTA_CW_Dive = 20,
  k_EDOTA_CW_OMW = 21,
  k_EDOTA_CW_Get_Ready = 22,
  k_EDOTA_CW_Bait = 23,
  k_EDOTA_CW_Heal = 24,
  k_EDOTA_CW_Mana = 25,
  k_EDOTA_CW_OOM = 26,
  k_EDOTA_CW_Skill_Cooldown = 27,
  k_EDOTA_CW_Ulti_Ready = 28,
  k_EDOTA_CW_Enemy_Returned = 29,
  k_EDOTA_CW_All_Missing = 30,
  k_EDOTA_CW_Enemy_Incoming = 31,
  k_EDOTA_CW_Invis_Enemy = 32,
  k_EDOTA_CW_Enemy_Had_Rune = 33,
  k_EDOTA_CW_Split_Push = 34,
  k_EDOTA_CW_Coming_To_Gank = 35,
  k_EDOTA_CW_Request_Gank = 36,
  k_EDOTA_CW_Fight_Under_Tower = 37,
  k_EDOTA_CW_Deny_Tower = 38,
  k_EDOTA_CW_Buy_Courier = 39,
  k_EDOTA_CW_Upgrade_Courier = 40,
  k_EDOTA_CW_Need_Detection = 41,
  k_EDOTA_CW_They_Have_Detection = 42,
  k_EDOTA_CW_Buy_TP = 43,
  k_EDOTA_CW_Reuse_Courier = 44,
  k_EDOTA_CW_Deward = 45,
  k_EDOTA_CW_Building_Mek = 46,
  k_EDOTA_CW_Building_Pipe = 47,
  k_EDOTA_CW_Stack_And_Pull = 48,
  k_EDOTA_CW_Pull = 49,
  k_EDOTA_CW_Pulling = 50,
  k_EDOTA_CW_Stack = 51,
  k_EDOTA_CW_Jungling = 52,
  k_EDOTA_CW_Roshan = 53,
  k_EDOTA_CW_Affirmative = 54,
  k_EDOTA_CW_Wait = 55,
  k_EDOTA_CW_Pause = 56,
  k_EDOTA_CW_Current_Time = 57,
  k_EDOTA_CW_Check_Runes = 58,
  k_EDOTA_CW_Smoke_Gank = 59,
  k_EDOTA_CW_GLHF = 60,
  k_EDOTA_CW_Nice = 61,
  k_EDOTA_CW_Thanks = 62,
  k_EDOTA_CW_Sorry = 63,
  k_EDOTA_CW_No_Give_Up = 64,
  k_EDOTA_CW_Just_Happened = 65,
  k_EDOTA_CW_Game_Is_Hard = 66,
  k_EDOTA_CW_New_Meta = 67,
  k_EDOTA_CW_My_Bad = 68,
  k_EDOTA_CW_Regret = 69,
  k_EDOTA_CW_Relax = 70
};
bool EDOTAChatWheelMessage_IsValid(int value);
const EDOTAChatWheelMessage EDOTAChatWheelMessage_MIN = k_EDOTA_CW_Ok;
const EDOTAChatWheelMessage EDOTAChatWheelMessage_MAX = k_EDOTA_CW_Relax;
const int EDOTAChatWheelMessage_ARRAYSIZE = EDOTAChatWheelMessage_MAX + 1;

const ::google::protobuf::EnumDescriptor* EDOTAChatWheelMessage_descriptor();
inline const ::std::string& EDOTAChatWheelMessage_Name(EDOTAChatWheelMessage value) {
  return ::google::protobuf::internal::NameOfEnum(
    EDOTAChatWheelMessage_descriptor(), value);
}
inline bool EDOTAChatWheelMessage_Parse(
    const ::std::string& name, EDOTAChatWheelMessage* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EDOTAChatWheelMessage>(
    EDOTAChatWheelMessage_descriptor(), name, value);
}
enum EDOTAStatPopupTypes {
  k_EDOTA_SPT_Textline = 0,
  k_EDOTA_SPT_Basic = 1,
  k_EDOTA_SPT_Poll = 2
};
bool EDOTAStatPopupTypes_IsValid(int value);
const EDOTAStatPopupTypes EDOTAStatPopupTypes_MIN = k_EDOTA_SPT_Textline;
const EDOTAStatPopupTypes EDOTAStatPopupTypes_MAX = k_EDOTA_SPT_Poll;
const int EDOTAStatPopupTypes_ARRAYSIZE = EDOTAStatPopupTypes_MAX + 1;

const ::google::protobuf::EnumDescriptor* EDOTAStatPopupTypes_descriptor();
inline const ::std::string& EDOTAStatPopupTypes_Name(EDOTAStatPopupTypes value) {
  return ::google::protobuf::internal::NameOfEnum(
    EDOTAStatPopupTypes_descriptor(), value);
}
inline bool EDOTAStatPopupTypes_Parse(
    const ::std::string& name, EDOTAStatPopupTypes* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EDOTAStatPopupTypes>(
    EDOTAStatPopupTypes_descriptor(), name, value);
}
// ===================================================================

class CDOTAMsg_LocationPing : public ::google::protobuf::Message {
 public:
  CDOTAMsg_LocationPing();
  virtual ~CDOTAMsg_LocationPing();

  CDOTAMsg_LocationPing(const CDOTAMsg_LocationPing& from);

  inline CDOTAMsg_LocationPing& operator=(const CDOTAMsg_LocationPing& from) {
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
  static const CDOTAMsg_LocationPing& default_instance();

  void Swap(CDOTAMsg_LocationPing* other);

  // implements Message ----------------------------------------------

  CDOTAMsg_LocationPing* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_LocationPing& from);
  void MergeFrom(const CDOTAMsg_LocationPing& from);
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

  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // optional int32 target = 3;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 3;
  inline ::google::protobuf::int32 target() const;
  inline void set_target(::google::protobuf::int32 value);

  // optional bool direct_ping = 4;
  inline bool has_direct_ping() const;
  inline void clear_direct_ping();
  static const int kDirectPingFieldNumber = 4;
  inline bool direct_ping() const;
  inline void set_direct_ping(bool value);

  // optional int32 type = 5;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 5;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CDOTAMsg_LocationPing)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_direct_ping();
  inline void clear_has_direct_ping();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 target_;
  bool direct_ping_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

  void InitAsDefaultInstance();
  static CDOTAMsg_LocationPing* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_ItemAlert : public ::google::protobuf::Message {
 public:
  CDOTAMsg_ItemAlert();
  virtual ~CDOTAMsg_ItemAlert();

  CDOTAMsg_ItemAlert(const CDOTAMsg_ItemAlert& from);

  inline CDOTAMsg_ItemAlert& operator=(const CDOTAMsg_ItemAlert& from) {
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
  static const CDOTAMsg_ItemAlert& default_instance();

  void Swap(CDOTAMsg_ItemAlert* other);

  // implements Message ----------------------------------------------

  CDOTAMsg_ItemAlert* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_ItemAlert& from);
  void MergeFrom(const CDOTAMsg_ItemAlert& from);
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

  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // optional int32 itemid = 3;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemidFieldNumber = 3;
  inline ::google::protobuf::int32 itemid() const;
  inline void set_itemid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CDOTAMsg_ItemAlert)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_itemid();
  inline void clear_has_itemid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 itemid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

  void InitAsDefaultInstance();
  static CDOTAMsg_ItemAlert* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_MapLine : public ::google::protobuf::Message {
 public:
  CDOTAMsg_MapLine();
  virtual ~CDOTAMsg_MapLine();

  CDOTAMsg_MapLine(const CDOTAMsg_MapLine& from);

  inline CDOTAMsg_MapLine& operator=(const CDOTAMsg_MapLine& from) {
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
  static const CDOTAMsg_MapLine& default_instance();

  void Swap(CDOTAMsg_MapLine* other);

  // implements Message ----------------------------------------------

  CDOTAMsg_MapLine* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_MapLine& from);
  void MergeFrom(const CDOTAMsg_MapLine& from);
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

  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // optional bool initial = 3;
  inline bool has_initial() const;
  inline void clear_initial();
  static const int kInitialFieldNumber = 3;
  inline bool initial() const;
  inline void set_initial(bool value);

  // @@protoc_insertion_point(class_scope:CDOTAMsg_MapLine)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_initial();
  inline void clear_has_initial();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  bool initial_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

  void InitAsDefaultInstance();
  static CDOTAMsg_MapLine* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_WorldLine : public ::google::protobuf::Message {
 public:
  CDOTAMsg_WorldLine();
  virtual ~CDOTAMsg_WorldLine();

  CDOTAMsg_WorldLine(const CDOTAMsg_WorldLine& from);

  inline CDOTAMsg_WorldLine& operator=(const CDOTAMsg_WorldLine& from) {
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
  static const CDOTAMsg_WorldLine& default_instance();

  void Swap(CDOTAMsg_WorldLine* other);

  // implements Message ----------------------------------------------

  CDOTAMsg_WorldLine* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_WorldLine& from);
  void MergeFrom(const CDOTAMsg_WorldLine& from);
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

  // optional int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // optional int32 z = 3;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline ::google::protobuf::int32 z() const;
  inline void set_z(::google::protobuf::int32 value);

  // optional bool initial = 4;
  inline bool has_initial() const;
  inline void clear_initial();
  static const int kInitialFieldNumber = 4;
  inline bool initial() const;
  inline void set_initial(bool value);

  // optional bool end = 5;
  inline bool has_end() const;
  inline void clear_end();
  static const int kEndFieldNumber = 5;
  inline bool end() const;
  inline void set_end(bool value);

  // @@protoc_insertion_point(class_scope:CDOTAMsg_WorldLine)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();
  inline void set_has_initial();
  inline void clear_has_initial();
  inline void set_has_end();
  inline void clear_has_end();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 z_;
  bool initial_;
  bool end_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

  void InitAsDefaultInstance();
  static CDOTAMsg_WorldLine* default_instance_;
};
// -------------------------------------------------------------------

class CDOTAMsg_SendStatPopup : public ::google::protobuf::Message {
 public:
  CDOTAMsg_SendStatPopup();
  virtual ~CDOTAMsg_SendStatPopup();

  CDOTAMsg_SendStatPopup(const CDOTAMsg_SendStatPopup& from);

  inline CDOTAMsg_SendStatPopup& operator=(const CDOTAMsg_SendStatPopup& from) {
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
  static const CDOTAMsg_SendStatPopup& default_instance();

  void Swap(CDOTAMsg_SendStatPopup* other);

  // implements Message ----------------------------------------------

  CDOTAMsg_SendStatPopup* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAMsg_SendStatPopup& from);
  void MergeFrom(const CDOTAMsg_SendStatPopup& from);
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

  // optional .EDOTAStatPopupTypes style = 1 [default = k_EDOTA_SPT_Textline];
  inline bool has_style() const;
  inline void clear_style();
  static const int kStyleFieldNumber = 1;
  inline ::EDOTAStatPopupTypes style() const;
  inline void set_style(::EDOTAStatPopupTypes value);

  // repeated string stat_strings = 2;
  inline int stat_strings_size() const;
  inline void clear_stat_strings();
  static const int kStatStringsFieldNumber = 2;
  inline const ::std::string& stat_strings(int index) const;
  inline ::std::string* mutable_stat_strings(int index);
  inline void set_stat_strings(int index, const ::std::string& value);
  inline void set_stat_strings(int index, const char* value);
  inline void set_stat_strings(int index, const char* value, size_t size);
  inline ::std::string* add_stat_strings();
  inline void add_stat_strings(const ::std::string& value);
  inline void add_stat_strings(const char* value);
  inline void add_stat_strings(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& stat_strings() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_stat_strings();

  // repeated int32 stat_images = 3;
  inline int stat_images_size() const;
  inline void clear_stat_images();
  static const int kStatImagesFieldNumber = 3;
  inline ::google::protobuf::int32 stat_images(int index) const;
  inline void set_stat_images(int index, ::google::protobuf::int32 value);
  inline void add_stat_images(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      stat_images() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_stat_images();

  // @@protoc_insertion_point(class_scope:CDOTAMsg_SendStatPopup)
 private:
  inline void set_has_style();
  inline void clear_has_style();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> stat_strings_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > stat_images_;
  int style_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_AssignDesc_dota_5fcommonmessages_2eproto();
  friend void protobuf_ShutdownFile_dota_5fcommonmessages_2eproto();

  void InitAsDefaultInstance();
  static CDOTAMsg_SendStatPopup* default_instance_;
};
// ===================================================================


// ===================================================================

// CDOTAMsg_LocationPing

// optional int32 x = 1;
inline bool CDOTAMsg_LocationPing::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_LocationPing::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_LocationPing::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::x() const {
  return x_;
}
inline void CDOTAMsg_LocationPing::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_LocationPing::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_LocationPing::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_LocationPing::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::y() const {
  return y_;
}
inline void CDOTAMsg_LocationPing::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 target = 3;
inline bool CDOTAMsg_LocationPing::has_target() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_target() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_LocationPing::clear_has_target() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_LocationPing::clear_target() {
  target_ = 0;
  clear_has_target();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::target() const {
  return target_;
}
inline void CDOTAMsg_LocationPing::set_target(::google::protobuf::int32 value) {
  set_has_target();
  target_ = value;
}

// optional bool direct_ping = 4;
inline bool CDOTAMsg_LocationPing::has_direct_ping() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_direct_ping() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDOTAMsg_LocationPing::clear_has_direct_ping() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDOTAMsg_LocationPing::clear_direct_ping() {
  direct_ping_ = false;
  clear_has_direct_ping();
}
inline bool CDOTAMsg_LocationPing::direct_ping() const {
  return direct_ping_;
}
inline void CDOTAMsg_LocationPing::set_direct_ping(bool value) {
  set_has_direct_ping();
  direct_ping_ = value;
}

// optional int32 type = 5;
inline bool CDOTAMsg_LocationPing::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CDOTAMsg_LocationPing::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CDOTAMsg_LocationPing::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CDOTAMsg_LocationPing::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 CDOTAMsg_LocationPing::type() const {
  return type_;
}
inline void CDOTAMsg_LocationPing::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_ItemAlert

// optional int32 x = 1;
inline bool CDOTAMsg_ItemAlert::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_ItemAlert::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_ItemAlert::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::x() const {
  return x_;
}
inline void CDOTAMsg_ItemAlert::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_ItemAlert::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_ItemAlert::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_ItemAlert::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::y() const {
  return y_;
}
inline void CDOTAMsg_ItemAlert::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 itemid = 3;
inline bool CDOTAMsg_ItemAlert::has_itemid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_ItemAlert::set_has_itemid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_ItemAlert::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_ItemAlert::clear_itemid() {
  itemid_ = 0;
  clear_has_itemid();
}
inline ::google::protobuf::int32 CDOTAMsg_ItemAlert::itemid() const {
  return itemid_;
}
inline void CDOTAMsg_ItemAlert::set_itemid(::google::protobuf::int32 value) {
  set_has_itemid();
  itemid_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_MapLine

// optional int32 x = 1;
inline bool CDOTAMsg_MapLine::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_MapLine::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_MapLine::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_MapLine::x() const {
  return x_;
}
inline void CDOTAMsg_MapLine::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_MapLine::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_MapLine::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_MapLine::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_MapLine::y() const {
  return y_;
}
inline void CDOTAMsg_MapLine::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional bool initial = 3;
inline bool CDOTAMsg_MapLine::has_initial() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_MapLine::set_has_initial() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_MapLine::clear_has_initial() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_MapLine::clear_initial() {
  initial_ = false;
  clear_has_initial();
}
inline bool CDOTAMsg_MapLine::initial() const {
  return initial_;
}
inline void CDOTAMsg_MapLine::set_initial(bool value) {
  set_has_initial();
  initial_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_WorldLine

// optional int32 x = 1;
inline bool CDOTAMsg_WorldLine::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_WorldLine::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_WorldLine::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::x() const {
  return x_;
}
inline void CDOTAMsg_WorldLine::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 2;
inline bool CDOTAMsg_WorldLine::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAMsg_WorldLine::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAMsg_WorldLine::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::y() const {
  return y_;
}
inline void CDOTAMsg_WorldLine::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 z = 3;
inline bool CDOTAMsg_WorldLine::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAMsg_WorldLine::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAMsg_WorldLine::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline ::google::protobuf::int32 CDOTAMsg_WorldLine::z() const {
  return z_;
}
inline void CDOTAMsg_WorldLine::set_z(::google::protobuf::int32 value) {
  set_has_z();
  z_ = value;
}

// optional bool initial = 4;
inline bool CDOTAMsg_WorldLine::has_initial() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_initial() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDOTAMsg_WorldLine::clear_has_initial() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDOTAMsg_WorldLine::clear_initial() {
  initial_ = false;
  clear_has_initial();
}
inline bool CDOTAMsg_WorldLine::initial() const {
  return initial_;
}
inline void CDOTAMsg_WorldLine::set_initial(bool value) {
  set_has_initial();
  initial_ = value;
}

// optional bool end = 5;
inline bool CDOTAMsg_WorldLine::has_end() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CDOTAMsg_WorldLine::set_has_end() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CDOTAMsg_WorldLine::clear_has_end() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CDOTAMsg_WorldLine::clear_end() {
  end_ = false;
  clear_has_end();
}
inline bool CDOTAMsg_WorldLine::end() const {
  return end_;
}
inline void CDOTAMsg_WorldLine::set_end(bool value) {
  set_has_end();
  end_ = value;
}

// -------------------------------------------------------------------

// CDOTAMsg_SendStatPopup

// optional .EDOTAStatPopupTypes style = 1 [default = k_EDOTA_SPT_Textline];
inline bool CDOTAMsg_SendStatPopup::has_style() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAMsg_SendStatPopup::set_has_style() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAMsg_SendStatPopup::clear_has_style() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAMsg_SendStatPopup::clear_style() {
  style_ = 0;
  clear_has_style();
}
inline ::EDOTAStatPopupTypes CDOTAMsg_SendStatPopup::style() const {
  return static_cast< ::EDOTAStatPopupTypes >(style_);
}
inline void CDOTAMsg_SendStatPopup::set_style(::EDOTAStatPopupTypes value) {
  assert(::EDOTAStatPopupTypes_IsValid(value));
  set_has_style();
  style_ = value;
}

// repeated string stat_strings = 2;
inline int CDOTAMsg_SendStatPopup::stat_strings_size() const {
  return stat_strings_.size();
}
inline void CDOTAMsg_SendStatPopup::clear_stat_strings() {
  stat_strings_.Clear();
}
inline const ::std::string& CDOTAMsg_SendStatPopup::stat_strings(int index) const {
  return stat_strings_.Get(index);
}
inline ::std::string* CDOTAMsg_SendStatPopup::mutable_stat_strings(int index) {
  return stat_strings_.Mutable(index);
}
inline void CDOTAMsg_SendStatPopup::set_stat_strings(int index, const ::std::string& value) {
  stat_strings_.Mutable(index)->assign(value);
}
inline void CDOTAMsg_SendStatPopup::set_stat_strings(int index, const char* value) {
  stat_strings_.Mutable(index)->assign(value);
}
inline void CDOTAMsg_SendStatPopup::set_stat_strings(int index, const char* value, size_t size) {
  stat_strings_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CDOTAMsg_SendStatPopup::add_stat_strings() {
  return stat_strings_.Add();
}
inline void CDOTAMsg_SendStatPopup::add_stat_strings(const ::std::string& value) {
  stat_strings_.Add()->assign(value);
}
inline void CDOTAMsg_SendStatPopup::add_stat_strings(const char* value) {
  stat_strings_.Add()->assign(value);
}
inline void CDOTAMsg_SendStatPopup::add_stat_strings(const char* value, size_t size) {
  stat_strings_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CDOTAMsg_SendStatPopup::stat_strings() const {
  return stat_strings_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CDOTAMsg_SendStatPopup::mutable_stat_strings() {
  return &stat_strings_;
}

// repeated int32 stat_images = 3;
inline int CDOTAMsg_SendStatPopup::stat_images_size() const {
  return stat_images_.size();
}
inline void CDOTAMsg_SendStatPopup::clear_stat_images() {
  stat_images_.Clear();
}
inline ::google::protobuf::int32 CDOTAMsg_SendStatPopup::stat_images(int index) const {
  return stat_images_.Get(index);
}
inline void CDOTAMsg_SendStatPopup::set_stat_images(int index, ::google::protobuf::int32 value) {
  stat_images_.Set(index, value);
}
inline void CDOTAMsg_SendStatPopup::add_stat_images(::google::protobuf::int32 value) {
  stat_images_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CDOTAMsg_SendStatPopup::stat_images() const {
  return stat_images_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CDOTAMsg_SendStatPopup::mutable_stat_images() {
  return &stat_images_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EDOTAChatWheelMessage>() {
  return ::EDOTAChatWheelMessage_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EDOTAStatPopupTypes>() {
  return ::EDOTAStatPopupTypes_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dota_5fcommonmessages_2eproto__INCLUDED
