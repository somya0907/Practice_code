/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: somya.proto */

#ifndef PROTOBUF_C_somya_2eproto__INCLUDED
#define PROTOBUF_C_somya_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AMessage AMessage;


/* --- enums --- */


/* --- messages --- */

struct  _AMessage
{
  ProtobufCMessage base;
  int32_t a;
  protobuf_c_boolean has_b;
  int32_t b;
};
#define AMESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&amessage__descriptor) \
    , 0, 0,0 }


/* AMessage methods */
void   amessage__init
                     (AMessage         *message);
size_t amessage__get_packed_size
                     (const AMessage   *message);
size_t amessage__pack
                     (const AMessage   *message,
                      uint8_t             *out);
size_t amessage__pack_to_buffer
                     (const AMessage   *message,
                      ProtobufCBuffer     *buffer);
AMessage *
       amessage__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   amessage__free_unpacked
                     (AMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AMessage_Closure)
                 (const AMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor amessage__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_somya_2eproto__INCLUDED */
