// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/tensor_slice.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();

class TensorSliceProto;
class TensorSliceProto_Extent;

// ===================================================================

class TensorSliceProto_Extent : public ::google::protobuf::Message {
 public:
  TensorSliceProto_Extent();
  virtual ~TensorSliceProto_Extent();

  TensorSliceProto_Extent(const TensorSliceProto_Extent& from);

  inline TensorSliceProto_Extent& operator=(const TensorSliceProto_Extent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TensorSliceProto_Extent& default_instance();

  enum HasLengthCase {
    kLength = 2,
    HAS_LENGTH_NOT_SET = 0,
  };

  void Swap(TensorSliceProto_Extent* other);

  // implements Message ----------------------------------------------

  inline TensorSliceProto_Extent* New() const { return New(NULL); }

  TensorSliceProto_Extent* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TensorSliceProto_Extent& from);
  void MergeFrom(const TensorSliceProto_Extent& from);
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
  void InternalSwap(TensorSliceProto_Extent* other);
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

  // optional int64 start = 1;
  void clear_start();
  static const int kStartFieldNumber = 1;
  ::google::protobuf::int64 start() const;
  void set_start(::google::protobuf::int64 value);

  // optional int64 length = 2;
  private:
  bool has_length() const;
  public:
  void clear_length();
  static const int kLengthFieldNumber = 2;
  ::google::protobuf::int64 length() const;
  void set_length(::google::protobuf::int64 value);

  HasLengthCase has_length_case() const;
  // @@protoc_insertion_point(class_scope:tensorflow.TensorSliceProto.Extent)
 private:
  inline void set_has_length();

  inline bool has_has_length() const;
  void clear_has_length();
  inline void clear_has_has_length();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 start_;
  union HasLengthUnion {
    HasLengthUnion() {}
    ::google::protobuf::int64 length_;
  } has_length_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static TensorSliceProto_Extent* default_instance_;
};
// -------------------------------------------------------------------

class TensorSliceProto : public ::google::protobuf::Message {
 public:
  TensorSliceProto();
  virtual ~TensorSliceProto();

  TensorSliceProto(const TensorSliceProto& from);

  inline TensorSliceProto& operator=(const TensorSliceProto& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TensorSliceProto& default_instance();

  void Swap(TensorSliceProto* other);

  // implements Message ----------------------------------------------

  inline TensorSliceProto* New() const { return New(NULL); }

  TensorSliceProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TensorSliceProto& from);
  void MergeFrom(const TensorSliceProto& from);
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
  void InternalSwap(TensorSliceProto* other);
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

  typedef TensorSliceProto_Extent Extent;

  // accessors -------------------------------------------------------

  // repeated .tensorflow.TensorSliceProto.Extent extent = 1;
  int extent_size() const;
  void clear_extent();
  static const int kExtentFieldNumber = 1;
  const ::tensorflow::TensorSliceProto_Extent& extent(int index) const;
  ::tensorflow::TensorSliceProto_Extent* mutable_extent(int index);
  ::tensorflow::TensorSliceProto_Extent* add_extent();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto_Extent >*
      mutable_extent();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto_Extent >&
      extent() const;

  // @@protoc_insertion_point(class_scope:tensorflow.TensorSliceProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto_Extent > extent_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static TensorSliceProto* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TensorSliceProto_Extent

// optional int64 start = 1;
inline void TensorSliceProto_Extent::clear_start() {
  start_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 TensorSliceProto_Extent::start() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorSliceProto.Extent.start)
  return start_;
}
inline void TensorSliceProto_Extent::set_start(::google::protobuf::int64 value) {
  
  start_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.TensorSliceProto.Extent.start)
}

// optional int64 length = 2;
inline bool TensorSliceProto_Extent::has_length() const {
  return has_length_case() == kLength;
}
inline void TensorSliceProto_Extent::set_has_length() {
  _oneof_case_[0] = kLength;
}
inline void TensorSliceProto_Extent::clear_length() {
  if (has_length()) {
    has_length_.length_ = GOOGLE_LONGLONG(0);
    clear_has_has_length();
  }
}
inline ::google::protobuf::int64 TensorSliceProto_Extent::length() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorSliceProto.Extent.length)
  if (has_length()) {
    return has_length_.length_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void TensorSliceProto_Extent::set_length(::google::protobuf::int64 value) {
  if (!has_length()) {
    clear_has_length();
    set_has_length();
  }
  has_length_.length_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.TensorSliceProto.Extent.length)
}

inline bool TensorSliceProto_Extent::has_has_length() const {
  return has_length_case() != HAS_LENGTH_NOT_SET;
}
inline void TensorSliceProto_Extent::clear_has_has_length() {
  _oneof_case_[0] = HAS_LENGTH_NOT_SET;
}
inline TensorSliceProto_Extent::HasLengthCase TensorSliceProto_Extent::has_length_case() const {
  return TensorSliceProto_Extent::HasLengthCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// TensorSliceProto

// repeated .tensorflow.TensorSliceProto.Extent extent = 1;
inline int TensorSliceProto::extent_size() const {
  return extent_.size();
}
inline void TensorSliceProto::clear_extent() {
  extent_.Clear();
}
inline const ::tensorflow::TensorSliceProto_Extent& TensorSliceProto::extent(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorSliceProto.extent)
  return extent_.Get(index);
}
inline ::tensorflow::TensorSliceProto_Extent* TensorSliceProto::mutable_extent(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorSliceProto.extent)
  return extent_.Mutable(index);
}
inline ::tensorflow::TensorSliceProto_Extent* TensorSliceProto::add_extent() {
  // @@protoc_insertion_point(field_add:tensorflow.TensorSliceProto.extent)
  return extent_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto_Extent >*
TensorSliceProto::mutable_extent() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorSliceProto.extent)
  return &extent_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto_Extent >&
TensorSliceProto::extent() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorSliceProto.extent)
  return extent_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto__INCLUDED
