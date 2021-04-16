/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: peer/admin.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "peer/admin.pb-c.h"
void   protos__server_status__init
                     (Protos__ServerStatus         *message)
{
  static Protos__ServerStatus init_value = PROTOS__SERVER_STATUS__INIT;
  *message = init_value;
}
size_t protos__server_status__get_packed_size
                     (const Protos__ServerStatus *message)
{
  assert(message->base.descriptor == &protos__server_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__server_status__pack
                     (const Protos__ServerStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__server_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__server_status__pack_to_buffer
                     (const Protos__ServerStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__server_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__ServerStatus *
       protos__server_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__ServerStatus *)
     protobuf_c_message_unpack (&protos__server_status__descriptor,
                                allocator, len, data);
}
void   protos__server_status__free_unpacked
                     (Protos__ServerStatus *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__server_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protos__log_level_request__init
                     (Protos__LogLevelRequest         *message)
{
  static Protos__LogLevelRequest init_value = PROTOS__LOG_LEVEL_REQUEST__INIT;
  *message = init_value;
}
size_t protos__log_level_request__get_packed_size
                     (const Protos__LogLevelRequest *message)
{
  assert(message->base.descriptor == &protos__log_level_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__log_level_request__pack
                     (const Protos__LogLevelRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__log_level_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__log_level_request__pack_to_buffer
                     (const Protos__LogLevelRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__log_level_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__LogLevelRequest *
       protos__log_level_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__LogLevelRequest *)
     protobuf_c_message_unpack (&protos__log_level_request__descriptor,
                                allocator, len, data);
}
void   protos__log_level_request__free_unpacked
                     (Protos__LogLevelRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__log_level_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protos__log_level_response__init
                     (Protos__LogLevelResponse         *message)
{
  static Protos__LogLevelResponse init_value = PROTOS__LOG_LEVEL_RESPONSE__INIT;
  *message = init_value;
}
size_t protos__log_level_response__get_packed_size
                     (const Protos__LogLevelResponse *message)
{
  assert(message->base.descriptor == &protos__log_level_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__log_level_response__pack
                     (const Protos__LogLevelResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__log_level_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__log_level_response__pack_to_buffer
                     (const Protos__LogLevelResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__log_level_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__LogLevelResponse *
       protos__log_level_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__LogLevelResponse *)
     protobuf_c_message_unpack (&protos__log_level_response__descriptor,
                                allocator, len, data);
}
void   protos__log_level_response__free_unpacked
                     (Protos__LogLevelResponse *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__log_level_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protos__log_spec_request__init
                     (Protos__LogSpecRequest         *message)
{
  static Protos__LogSpecRequest init_value = PROTOS__LOG_SPEC_REQUEST__INIT;
  *message = init_value;
}
size_t protos__log_spec_request__get_packed_size
                     (const Protos__LogSpecRequest *message)
{
  assert(message->base.descriptor == &protos__log_spec_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__log_spec_request__pack
                     (const Protos__LogSpecRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__log_spec_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__log_spec_request__pack_to_buffer
                     (const Protos__LogSpecRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__log_spec_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__LogSpecRequest *
       protos__log_spec_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__LogSpecRequest *)
     protobuf_c_message_unpack (&protos__log_spec_request__descriptor,
                                allocator, len, data);
}
void   protos__log_spec_request__free_unpacked
                     (Protos__LogSpecRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__log_spec_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protos__log_spec_response__init
                     (Protos__LogSpecResponse         *message)
{
  static Protos__LogSpecResponse init_value = PROTOS__LOG_SPEC_RESPONSE__INIT;
  *message = init_value;
}
size_t protos__log_spec_response__get_packed_size
                     (const Protos__LogSpecResponse *message)
{
  assert(message->base.descriptor == &protos__log_spec_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__log_spec_response__pack
                     (const Protos__LogSpecResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__log_spec_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__log_spec_response__pack_to_buffer
                     (const Protos__LogSpecResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__log_spec_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__LogSpecResponse *
       protos__log_spec_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__LogSpecResponse *)
     protobuf_c_message_unpack (&protos__log_spec_response__descriptor,
                                allocator, len, data);
}
void   protos__log_spec_response__free_unpacked
                     (Protos__LogSpecResponse *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__log_spec_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protos__admin_operation__init
                     (Protos__AdminOperation         *message)
{
  static Protos__AdminOperation init_value = PROTOS__ADMIN_OPERATION__INIT;
  *message = init_value;
}
size_t protos__admin_operation__get_packed_size
                     (const Protos__AdminOperation *message)
{
  assert(message->base.descriptor == &protos__admin_operation__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protos__admin_operation__pack
                     (const Protos__AdminOperation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protos__admin_operation__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protos__admin_operation__pack_to_buffer
                     (const Protos__AdminOperation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protos__admin_operation__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protos__AdminOperation *
       protos__admin_operation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protos__AdminOperation *)
     protobuf_c_message_unpack (&protos__admin_operation__descriptor,
                                allocator, len, data);
}
void   protos__admin_operation__free_unpacked
                     (Protos__AdminOperation *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protos__admin_operation__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue protos__server_status__status_code__enum_values_by_number[6] =
{
  { "UNDEFINED", "PROTOS__SERVER_STATUS__STATUS_CODE__UNDEFINED", 0 },
  { "STARTED", "PROTOS__SERVER_STATUS__STATUS_CODE__STARTED", 1 },
  { "STOPPED", "PROTOS__SERVER_STATUS__STATUS_CODE__STOPPED", 2 },
  { "PAUSED", "PROTOS__SERVER_STATUS__STATUS_CODE__PAUSED", 3 },
  { "ERROR", "PROTOS__SERVER_STATUS__STATUS_CODE__ERROR", 4 },
  { "UNKNOWN", "PROTOS__SERVER_STATUS__STATUS_CODE__UNKNOWN", 5 },
};
static const ProtobufCIntRange protos__server_status__status_code__value_ranges[] = {
{0, 0},{0, 6}
};
static const ProtobufCEnumValueIndex protos__server_status__status_code__enum_values_by_name[6] =
{
  { "ERROR", 4 },
  { "PAUSED", 3 },
  { "STARTED", 1 },
  { "STOPPED", 2 },
  { "UNDEFINED", 0 },
  { "UNKNOWN", 5 },
};
const ProtobufCEnumDescriptor protos__server_status__status_code__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protos.ServerStatus.StatusCode",
  "StatusCode",
  "Protos__ServerStatus__StatusCode",
  "protos",
  6,
  protos__server_status__status_code__enum_values_by_number,
  6,
  protos__server_status__status_code__enum_values_by_name,
  1,
  protos__server_status__status_code__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor protos__server_status__field_descriptors[1] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Protos__ServerStatus, has_status),
    offsetof(Protos__ServerStatus, status),
    &protos__server_status__status_code__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__server_status__field_indices_by_name[] = {
  0,   /* field[0] = status */
};
static const ProtobufCIntRange protos__server_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protos__server_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.ServerStatus",
  "ServerStatus",
  "Protos__ServerStatus",
  "protos",
  sizeof(Protos__ServerStatus),
  1,
  protos__server_status__field_descriptors,
  protos__server_status__field_indices_by_name,
  1,  protos__server_status__number_ranges,
  (ProtobufCMessageInit) protos__server_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protos__log_level_request__field_descriptors[2] =
{
  {
    "log_module",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogLevelRequest, log_module),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_level",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogLevelRequest, log_level),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__log_level_request__field_indices_by_name[] = {
  1,   /* field[1] = log_level */
  0,   /* field[0] = log_module */
};
static const ProtobufCIntRange protos__log_level_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protos__log_level_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.LogLevelRequest",
  "LogLevelRequest",
  "Protos__LogLevelRequest",
  "protos",
  sizeof(Protos__LogLevelRequest),
  2,
  protos__log_level_request__field_descriptors,
  protos__log_level_request__field_indices_by_name,
  1,  protos__log_level_request__number_ranges,
  (ProtobufCMessageInit) protos__log_level_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protos__log_level_response__field_descriptors[2] =
{
  {
    "log_module",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogLevelResponse, log_module),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_level",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogLevelResponse, log_level),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__log_level_response__field_indices_by_name[] = {
  1,   /* field[1] = log_level */
  0,   /* field[0] = log_module */
};
static const ProtobufCIntRange protos__log_level_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protos__log_level_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.LogLevelResponse",
  "LogLevelResponse",
  "Protos__LogLevelResponse",
  "protos",
  sizeof(Protos__LogLevelResponse),
  2,
  protos__log_level_response__field_descriptors,
  protos__log_level_response__field_indices_by_name,
  1,  protos__log_level_response__number_ranges,
  (ProtobufCMessageInit) protos__log_level_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protos__log_spec_request__field_descriptors[1] =
{
  {
    "log_spec",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogSpecRequest, log_spec),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__log_spec_request__field_indices_by_name[] = {
  0,   /* field[0] = log_spec */
};
static const ProtobufCIntRange protos__log_spec_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protos__log_spec_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.LogSpecRequest",
  "LogSpecRequest",
  "Protos__LogSpecRequest",
  "protos",
  sizeof(Protos__LogSpecRequest),
  1,
  protos__log_spec_request__field_descriptors,
  protos__log_spec_request__field_indices_by_name,
  1,  protos__log_spec_request__number_ranges,
  (ProtobufCMessageInit) protos__log_spec_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protos__log_spec_response__field_descriptors[2] =
{
  {
    "log_spec",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogSpecResponse, log_spec),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Protos__LogSpecResponse, error),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__log_spec_response__field_indices_by_name[] = {
  1,   /* field[1] = error */
  0,   /* field[0] = log_spec */
};
static const ProtobufCIntRange protos__log_spec_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protos__log_spec_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.LogSpecResponse",
  "LogSpecResponse",
  "Protos__LogSpecResponse",
  "protos",
  sizeof(Protos__LogSpecResponse),
  2,
  protos__log_spec_response__field_descriptors,
  protos__log_spec_response__field_indices_by_name,
  1,  protos__log_spec_response__number_ranges,
  (ProtobufCMessageInit) protos__log_spec_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protos__admin_operation__field_descriptors[2] =
{
  {
    "logReq",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protos__AdminOperation, content_case),
    offsetof(Protos__AdminOperation, logreq),
    &protos__log_level_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "logSpecReq",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protos__AdminOperation, content_case),
    offsetof(Protos__AdminOperation, logspecreq),
    &protos__log_spec_request__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protos__admin_operation__field_indices_by_name[] = {
  0,   /* field[0] = logReq */
  1,   /* field[1] = logSpecReq */
};
static const ProtobufCIntRange protos__admin_operation__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protos__admin_operation__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protos.AdminOperation",
  "AdminOperation",
  "Protos__AdminOperation",
  "protos",
  sizeof(Protos__AdminOperation),
  2,
  protos__admin_operation__field_descriptors,
  protos__admin_operation__field_indices_by_name,
  1,  protos__admin_operation__number_ranges,
  (ProtobufCMessageInit) protos__admin_operation__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor protos__admin__method_descriptors[7] =
{
  { "GetStatus", &common__envelope__descriptor, &protos__server_status__descriptor },
  { "StartServer", &common__envelope__descriptor, &protos__server_status__descriptor },
  { "GetModuleLogLevel", &common__envelope__descriptor, &protos__log_level_response__descriptor },
  { "SetModuleLogLevel", &common__envelope__descriptor, &protos__log_level_response__descriptor },
  { "RevertLogLevels", &common__envelope__descriptor, &google__protobuf__empty__descriptor },
  { "GetLogSpec", &common__envelope__descriptor, &protos__log_spec_response__descriptor },
  { "SetLogSpec", &common__envelope__descriptor, &protos__log_spec_response__descriptor },
};
const unsigned protos__admin__method_indices_by_name[] = {
  5,        /* GetLogSpec */
  2,        /* GetModuleLogLevel */
  0,        /* GetStatus */
  4,        /* RevertLogLevels */
  6,        /* SetLogSpec */
  3,        /* SetModuleLogLevel */
  1         /* StartServer */
};
const ProtobufCServiceDescriptor protos__admin__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "protos.Admin",
  "Admin",
  "Protos__Admin",
  "protos",
  7,
  protos__admin__method_descriptors,
  protos__admin__method_indices_by_name
};
void protos__admin__get_status(ProtobufCService *service,
                               const Common__Envelope *input,
                               Protos__ServerStatus_Closure closure,
                               void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__start_server(ProtobufCService *service,
                                 const Common__Envelope *input,
                                 Protos__ServerStatus_Closure closure,
                                 void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 1, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__get_module_log_level(ProtobufCService *service,
                                         const Common__Envelope *input,
                                         Protos__LogLevelResponse_Closure closure,
                                         void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 2, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__set_module_log_level(ProtobufCService *service,
                                         const Common__Envelope *input,
                                         Protos__LogLevelResponse_Closure closure,
                                         void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 3, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__revert_log_levels(ProtobufCService *service,
                                      const Common__Envelope *input,
                                      Google__Protobuf__Empty_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 4, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__get_log_spec(ProtobufCService *service,
                                 const Common__Envelope *input,
                                 Protos__LogSpecResponse_Closure closure,
                                 void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 5, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__set_log_spec(ProtobufCService *service,
                                 const Common__Envelope *input,
                                 Protos__LogSpecResponse_Closure closure,
                                 void *closure_data)
{
  assert(service->descriptor == &protos__admin__descriptor);
  service->invoke(service, 6, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void protos__admin__init (Protos__Admin_Service *service,
                          Protos__Admin_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &protos__admin__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}