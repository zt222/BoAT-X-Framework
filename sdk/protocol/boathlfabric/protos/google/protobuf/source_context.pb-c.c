/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/protobuf/source_context.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "google/protobuf/source_context.pb-c.h"
void   google__protobuf__source_context__init
                     (Google__Protobuf__SourceContext         *message)
{
  static Google__Protobuf__SourceContext init_value = GOOGLE__PROTOBUF__SOURCE_CONTEXT__INIT;
  *message = init_value;
}
size_t google__protobuf__source_context__get_packed_size
                     (const Google__Protobuf__SourceContext *message)
{
  assert(message->base.descriptor == &google__protobuf__source_context__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t google__protobuf__source_context__pack
                     (const Google__Protobuf__SourceContext *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &google__protobuf__source_context__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t google__protobuf__source_context__pack_to_buffer
                     (const Google__Protobuf__SourceContext *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &google__protobuf__source_context__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Google__Protobuf__SourceContext *
       google__protobuf__source_context__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Google__Protobuf__SourceContext *)
     protobuf_c_message_unpack (&google__protobuf__source_context__descriptor,
                                allocator, len, data);
}
void   google__protobuf__source_context__free_unpacked
                     (Google__Protobuf__SourceContext *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &google__protobuf__source_context__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor google__protobuf__source_context__field_descriptors[1] =
{
  {
    "file_name",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Google__Protobuf__SourceContext, file_name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned google__protobuf__source_context__field_indices_by_name[] = {
  0,   /* field[0] = file_name */
};
static const ProtobufCIntRange google__protobuf__source_context__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor google__protobuf__source_context__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "google.protobuf.SourceContext",
  "SourceContext",
  "Google__Protobuf__SourceContext",
  "google.protobuf",
  sizeof(Google__Protobuf__SourceContext),
  1,
  google__protobuf__source_context__field_descriptors,
  google__protobuf__source_context__field_indices_by_name,
  1,  google__protobuf__source_context__number_ranges,
  (ProtobufCMessageInit) google__protobuf__source_context__init,
  NULL,NULL,NULL    /* reserved[123] */
};