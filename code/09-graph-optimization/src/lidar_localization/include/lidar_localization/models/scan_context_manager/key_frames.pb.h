// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: key_frames.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_key_5fframes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_key_5fframes_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_key_5fframes_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_key_5fframes_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_key_5fframes_2eproto;
namespace scan_context_io {
class KeyFrame;
class KeyFrameDefaultTypeInternal;
extern KeyFrameDefaultTypeInternal _KeyFrame_default_instance_;
class KeyFrames;
class KeyFramesDefaultTypeInternal;
extern KeyFramesDefaultTypeInternal _KeyFrames_default_instance_;
class Quat;
class QuatDefaultTypeInternal;
extern QuatDefaultTypeInternal _Quat_default_instance_;
class Trans;
class TransDefaultTypeInternal;
extern TransDefaultTypeInternal _Trans_default_instance_;
}  // namespace scan_context_io
PROTOBUF_NAMESPACE_OPEN
template<> ::scan_context_io::KeyFrame* Arena::CreateMaybeMessage<::scan_context_io::KeyFrame>(Arena*);
template<> ::scan_context_io::KeyFrames* Arena::CreateMaybeMessage<::scan_context_io::KeyFrames>(Arena*);
template<> ::scan_context_io::Quat* Arena::CreateMaybeMessage<::scan_context_io::Quat>(Arena*);
template<> ::scan_context_io::Trans* Arena::CreateMaybeMessage<::scan_context_io::Trans>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace scan_context_io {

// ===================================================================

class Trans PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.Trans) */ {
 public:
  inline Trans() : Trans(nullptr) {}
  virtual ~Trans();

  Trans(const Trans& from);
  Trans(Trans&& from) noexcept
    : Trans() {
    *this = ::std::move(from);
  }

  inline Trans& operator=(const Trans& from) {
    CopyFrom(from);
    return *this;
  }
  inline Trans& operator=(Trans&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Trans& default_instance();

  static inline const Trans* internal_default_instance() {
    return reinterpret_cast<const Trans*>(
               &_Trans_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Trans& a, Trans& b) {
    a.Swap(&b);
  }
  inline void Swap(Trans* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Trans* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Trans* New() const final {
    return CreateMaybeMessage<Trans>(nullptr);
  }

  Trans* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Trans>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Trans& from);
  void MergeFrom(const Trans& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Trans* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.Trans";
  }
  protected:
  explicit Trans(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_key_5fframes_2eproto);
    return ::descriptor_table_key_5fframes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // required float x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // required float z = 3;
  bool has_z() const;
  private:
  bool _internal_has_z() const;
  public:
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:scan_context_io.Trans)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  friend struct ::TableStruct_key_5fframes_2eproto;
};
// -------------------------------------------------------------------

class Quat PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.Quat) */ {
 public:
  inline Quat() : Quat(nullptr) {}
  virtual ~Quat();

  Quat(const Quat& from);
  Quat(Quat&& from) noexcept
    : Quat() {
    *this = ::std::move(from);
  }

  inline Quat& operator=(const Quat& from) {
    CopyFrom(from);
    return *this;
  }
  inline Quat& operator=(Quat&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Quat& default_instance();

  static inline const Quat* internal_default_instance() {
    return reinterpret_cast<const Quat*>(
               &_Quat_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Quat& a, Quat& b) {
    a.Swap(&b);
  }
  inline void Swap(Quat* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Quat* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Quat* New() const final {
    return CreateMaybeMessage<Quat>(nullptr);
  }

  Quat* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Quat>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Quat& from);
  void MergeFrom(const Quat& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Quat* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.Quat";
  }
  protected:
  explicit Quat(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_key_5fframes_2eproto);
    return ::descriptor_table_key_5fframes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWFieldNumber = 1,
    kXFieldNumber = 2,
    kYFieldNumber = 3,
    kZFieldNumber = 4,
  };
  // required float w = 1;
  bool has_w() const;
  private:
  bool _internal_has_w() const;
  public:
  void clear_w();
  float w() const;
  void set_w(float value);
  private:
  float _internal_w() const;
  void _internal_set_w(float value);
  public:

  // required float x = 2;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 3;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // required float z = 4;
  bool has_z() const;
  private:
  bool _internal_has_z() const;
  public:
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:scan_context_io.Quat)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float w_;
  float x_;
  float y_;
  float z_;
  friend struct ::TableStruct_key_5fframes_2eproto;
};
// -------------------------------------------------------------------

class KeyFrame PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.KeyFrame) */ {
 public:
  inline KeyFrame() : KeyFrame(nullptr) {}
  virtual ~KeyFrame();

  KeyFrame(const KeyFrame& from);
  KeyFrame(KeyFrame&& from) noexcept
    : KeyFrame() {
    *this = ::std::move(from);
  }

  inline KeyFrame& operator=(const KeyFrame& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeyFrame& operator=(KeyFrame&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const KeyFrame& default_instance();

  static inline const KeyFrame* internal_default_instance() {
    return reinterpret_cast<const KeyFrame*>(
               &_KeyFrame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(KeyFrame& a, KeyFrame& b) {
    a.Swap(&b);
  }
  inline void Swap(KeyFrame* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(KeyFrame* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeyFrame* New() const final {
    return CreateMaybeMessage<KeyFrame>(nullptr);
  }

  KeyFrame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeyFrame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeyFrame& from);
  void MergeFrom(const KeyFrame& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KeyFrame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.KeyFrame";
  }
  protected:
  explicit KeyFrame(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_key_5fframes_2eproto);
    return ::descriptor_table_key_5fframes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kQFieldNumber = 1,
    kTFieldNumber = 2,
  };
  // required .scan_context_io.Quat q = 1;
  bool has_q() const;
  private:
  bool _internal_has_q() const;
  public:
  void clear_q();
  const ::scan_context_io::Quat& q() const;
  ::scan_context_io::Quat* release_q();
  ::scan_context_io::Quat* mutable_q();
  void set_allocated_q(::scan_context_io::Quat* q);
  private:
  const ::scan_context_io::Quat& _internal_q() const;
  ::scan_context_io::Quat* _internal_mutable_q();
  public:
  void unsafe_arena_set_allocated_q(
      ::scan_context_io::Quat* q);
  ::scan_context_io::Quat* unsafe_arena_release_q();

  // required .scan_context_io.Trans t = 2;
  bool has_t() const;
  private:
  bool _internal_has_t() const;
  public:
  void clear_t();
  const ::scan_context_io::Trans& t() const;
  ::scan_context_io::Trans* release_t();
  ::scan_context_io::Trans* mutable_t();
  void set_allocated_t(::scan_context_io::Trans* t);
  private:
  const ::scan_context_io::Trans& _internal_t() const;
  ::scan_context_io::Trans* _internal_mutable_t();
  public:
  void unsafe_arena_set_allocated_t(
      ::scan_context_io::Trans* t);
  ::scan_context_io::Trans* unsafe_arena_release_t();

  // @@protoc_insertion_point(class_scope:scan_context_io.KeyFrame)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::scan_context_io::Quat* q_;
  ::scan_context_io::Trans* t_;
  friend struct ::TableStruct_key_5fframes_2eproto;
};
// -------------------------------------------------------------------

class KeyFrames PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:scan_context_io.KeyFrames) */ {
 public:
  inline KeyFrames() : KeyFrames(nullptr) {}
  virtual ~KeyFrames();

  KeyFrames(const KeyFrames& from);
  KeyFrames(KeyFrames&& from) noexcept
    : KeyFrames() {
    *this = ::std::move(from);
  }

  inline KeyFrames& operator=(const KeyFrames& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeyFrames& operator=(KeyFrames&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const KeyFrames& default_instance();

  static inline const KeyFrames* internal_default_instance() {
    return reinterpret_cast<const KeyFrames*>(
               &_KeyFrames_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(KeyFrames& a, KeyFrames& b) {
    a.Swap(&b);
  }
  inline void Swap(KeyFrames* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(KeyFrames* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeyFrames* New() const final {
    return CreateMaybeMessage<KeyFrames>(nullptr);
  }

  KeyFrames* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeyFrames>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeyFrames& from);
  void MergeFrom(const KeyFrames& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KeyFrames* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "scan_context_io.KeyFrames";
  }
  protected:
  explicit KeyFrames(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_key_5fframes_2eproto);
    return ::descriptor_table_key_5fframes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // repeated .scan_context_io.KeyFrame data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  ::scan_context_io::KeyFrame* mutable_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::KeyFrame >*
      mutable_data();
  private:
  const ::scan_context_io::KeyFrame& _internal_data(int index) const;
  ::scan_context_io::KeyFrame* _internal_add_data();
  public:
  const ::scan_context_io::KeyFrame& data(int index) const;
  ::scan_context_io::KeyFrame* add_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::KeyFrame >&
      data() const;

  // @@protoc_insertion_point(class_scope:scan_context_io.KeyFrames)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::KeyFrame > data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_key_5fframes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Trans

// required float x = 1;
inline bool Trans::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Trans::has_x() const {
  return _internal_has_x();
}
inline void Trans::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float Trans::_internal_x() const {
  return x_;
}
inline float Trans::x() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Trans.x)
  return _internal_x();
}
inline void Trans::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void Trans::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Trans.x)
}

// required float y = 2;
inline bool Trans::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Trans::has_y() const {
  return _internal_has_y();
}
inline void Trans::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Trans::_internal_y() const {
  return y_;
}
inline float Trans::y() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Trans.y)
  return _internal_y();
}
inline void Trans::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void Trans::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Trans.y)
}

// required float z = 3;
inline bool Trans::_internal_has_z() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Trans::has_z() const {
  return _internal_has_z();
}
inline void Trans::clear_z() {
  z_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Trans::_internal_z() const {
  return z_;
}
inline float Trans::z() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Trans.z)
  return _internal_z();
}
inline void Trans::_internal_set_z(float value) {
  _has_bits_[0] |= 0x00000004u;
  z_ = value;
}
inline void Trans::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Trans.z)
}

// -------------------------------------------------------------------

// Quat

// required float w = 1;
inline bool Quat::_internal_has_w() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Quat::has_w() const {
  return _internal_has_w();
}
inline void Quat::clear_w() {
  w_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float Quat::_internal_w() const {
  return w_;
}
inline float Quat::w() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Quat.w)
  return _internal_w();
}
inline void Quat::_internal_set_w(float value) {
  _has_bits_[0] |= 0x00000001u;
  w_ = value;
}
inline void Quat::set_w(float value) {
  _internal_set_w(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Quat.w)
}

// required float x = 2;
inline bool Quat::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Quat::has_x() const {
  return _internal_has_x();
}
inline void Quat::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Quat::_internal_x() const {
  return x_;
}
inline float Quat::x() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Quat.x)
  return _internal_x();
}
inline void Quat::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000002u;
  x_ = value;
}
inline void Quat::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Quat.x)
}

// required float y = 3;
inline bool Quat::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Quat::has_y() const {
  return _internal_has_y();
}
inline void Quat::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Quat::_internal_y() const {
  return y_;
}
inline float Quat::y() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Quat.y)
  return _internal_y();
}
inline void Quat::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000004u;
  y_ = value;
}
inline void Quat::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Quat.y)
}

// required float z = 4;
inline bool Quat::_internal_has_z() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Quat::has_z() const {
  return _internal_has_z();
}
inline void Quat::clear_z() {
  z_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float Quat::_internal_z() const {
  return z_;
}
inline float Quat::z() const {
  // @@protoc_insertion_point(field_get:scan_context_io.Quat.z)
  return _internal_z();
}
inline void Quat::_internal_set_z(float value) {
  _has_bits_[0] |= 0x00000008u;
  z_ = value;
}
inline void Quat::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:scan_context_io.Quat.z)
}

// -------------------------------------------------------------------

// KeyFrame

// required .scan_context_io.Quat q = 1;
inline bool KeyFrame::_internal_has_q() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || q_ != nullptr);
  return value;
}
inline bool KeyFrame::has_q() const {
  return _internal_has_q();
}
inline void KeyFrame::clear_q() {
  if (q_ != nullptr) q_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::scan_context_io::Quat& KeyFrame::_internal_q() const {
  const ::scan_context_io::Quat* p = q_;
  return p != nullptr ? *p : reinterpret_cast<const ::scan_context_io::Quat&>(
      ::scan_context_io::_Quat_default_instance_);
}
inline const ::scan_context_io::Quat& KeyFrame::q() const {
  // @@protoc_insertion_point(field_get:scan_context_io.KeyFrame.q)
  return _internal_q();
}
inline void KeyFrame::unsafe_arena_set_allocated_q(
    ::scan_context_io::Quat* q) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(q_);
  }
  q_ = q;
  if (q) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:scan_context_io.KeyFrame.q)
}
inline ::scan_context_io::Quat* KeyFrame::release_q() {
  _has_bits_[0] &= ~0x00000001u;
  ::scan_context_io::Quat* temp = q_;
  q_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::scan_context_io::Quat* KeyFrame::unsafe_arena_release_q() {
  // @@protoc_insertion_point(field_release:scan_context_io.KeyFrame.q)
  _has_bits_[0] &= ~0x00000001u;
  ::scan_context_io::Quat* temp = q_;
  q_ = nullptr;
  return temp;
}
inline ::scan_context_io::Quat* KeyFrame::_internal_mutable_q() {
  _has_bits_[0] |= 0x00000001u;
  if (q_ == nullptr) {
    auto* p = CreateMaybeMessage<::scan_context_io::Quat>(GetArena());
    q_ = p;
  }
  return q_;
}
inline ::scan_context_io::Quat* KeyFrame::mutable_q() {
  // @@protoc_insertion_point(field_mutable:scan_context_io.KeyFrame.q)
  return _internal_mutable_q();
}
inline void KeyFrame::set_allocated_q(::scan_context_io::Quat* q) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete q_;
  }
  if (q) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(q);
    if (message_arena != submessage_arena) {
      q = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, q, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  q_ = q;
  // @@protoc_insertion_point(field_set_allocated:scan_context_io.KeyFrame.q)
}

// required .scan_context_io.Trans t = 2;
inline bool KeyFrame::_internal_has_t() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || t_ != nullptr);
  return value;
}
inline bool KeyFrame::has_t() const {
  return _internal_has_t();
}
inline void KeyFrame::clear_t() {
  if (t_ != nullptr) t_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::scan_context_io::Trans& KeyFrame::_internal_t() const {
  const ::scan_context_io::Trans* p = t_;
  return p != nullptr ? *p : reinterpret_cast<const ::scan_context_io::Trans&>(
      ::scan_context_io::_Trans_default_instance_);
}
inline const ::scan_context_io::Trans& KeyFrame::t() const {
  // @@protoc_insertion_point(field_get:scan_context_io.KeyFrame.t)
  return _internal_t();
}
inline void KeyFrame::unsafe_arena_set_allocated_t(
    ::scan_context_io::Trans* t) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(t_);
  }
  t_ = t;
  if (t) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:scan_context_io.KeyFrame.t)
}
inline ::scan_context_io::Trans* KeyFrame::release_t() {
  _has_bits_[0] &= ~0x00000002u;
  ::scan_context_io::Trans* temp = t_;
  t_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::scan_context_io::Trans* KeyFrame::unsafe_arena_release_t() {
  // @@protoc_insertion_point(field_release:scan_context_io.KeyFrame.t)
  _has_bits_[0] &= ~0x00000002u;
  ::scan_context_io::Trans* temp = t_;
  t_ = nullptr;
  return temp;
}
inline ::scan_context_io::Trans* KeyFrame::_internal_mutable_t() {
  _has_bits_[0] |= 0x00000002u;
  if (t_ == nullptr) {
    auto* p = CreateMaybeMessage<::scan_context_io::Trans>(GetArena());
    t_ = p;
  }
  return t_;
}
inline ::scan_context_io::Trans* KeyFrame::mutable_t() {
  // @@protoc_insertion_point(field_mutable:scan_context_io.KeyFrame.t)
  return _internal_mutable_t();
}
inline void KeyFrame::set_allocated_t(::scan_context_io::Trans* t) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete t_;
  }
  if (t) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(t);
    if (message_arena != submessage_arena) {
      t = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, t, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  t_ = t;
  // @@protoc_insertion_point(field_set_allocated:scan_context_io.KeyFrame.t)
}

// -------------------------------------------------------------------

// KeyFrames

// repeated .scan_context_io.KeyFrame data = 1;
inline int KeyFrames::_internal_data_size() const {
  return data_.size();
}
inline int KeyFrames::data_size() const {
  return _internal_data_size();
}
inline void KeyFrames::clear_data() {
  data_.Clear();
}
inline ::scan_context_io::KeyFrame* KeyFrames::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:scan_context_io.KeyFrames.data)
  return data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::KeyFrame >*
KeyFrames::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.KeyFrames.data)
  return &data_;
}
inline const ::scan_context_io::KeyFrame& KeyFrames::_internal_data(int index) const {
  return data_.Get(index);
}
inline const ::scan_context_io::KeyFrame& KeyFrames::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.KeyFrames.data)
  return _internal_data(index);
}
inline ::scan_context_io::KeyFrame* KeyFrames::_internal_add_data() {
  return data_.Add();
}
inline ::scan_context_io::KeyFrame* KeyFrames::add_data() {
  // @@protoc_insertion_point(field_add:scan_context_io.KeyFrames.data)
  return _internal_add_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::scan_context_io::KeyFrame >&
KeyFrames::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.KeyFrames.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace scan_context_io

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_key_5fframes_2eproto
