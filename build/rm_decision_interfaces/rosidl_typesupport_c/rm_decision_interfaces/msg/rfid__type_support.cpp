// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rm_decision_interfaces:msg/RFID.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rm_decision_interfaces/msg/detail/rfid__struct.h"
#include "rm_decision_interfaces/msg/detail/rfid__type_support.h"
#include "rm_decision_interfaces/msg/detail/rfid__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rm_decision_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RFID_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RFID_type_support_ids_t;

static const _RFID_type_support_ids_t _RFID_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RFID_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RFID_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RFID_type_support_symbol_names_t _RFID_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_decision_interfaces, msg, RFID)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_decision_interfaces, msg, RFID)),
  }
};

typedef struct _RFID_type_support_data_t
{
  void * data[2];
} _RFID_type_support_data_t;

static _RFID_type_support_data_t _RFID_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RFID_message_typesupport_map = {
  2,
  "rm_decision_interfaces",
  &_RFID_message_typesupport_ids.typesupport_identifier[0],
  &_RFID_message_typesupport_symbol_names.symbol_name[0],
  &_RFID_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RFID_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RFID_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rm_decision_interfaces__msg__RFID__get_type_hash,
  &rm_decision_interfaces__msg__RFID__get_type_description,
  &rm_decision_interfaces__msg__RFID__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rm_decision_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rm_decision_interfaces, msg, RFID)() {
  return &::rm_decision_interfaces::msg::rosidl_typesupport_c::RFID_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
