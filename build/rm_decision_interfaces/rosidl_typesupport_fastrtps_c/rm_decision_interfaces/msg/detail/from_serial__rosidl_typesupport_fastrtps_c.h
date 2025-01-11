// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice
#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_decision_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_decision_interfaces/msg/detail/from_serial__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
bool cdr_serialize_rm_decision_interfaces__msg__FromSerial(
  const rm_decision_interfaces__msg__FromSerial * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
bool cdr_deserialize_rm_decision_interfaces__msg__FromSerial(
  eprosima::fastcdr::Cdr &,
  rm_decision_interfaces__msg__FromSerial * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t get_serialized_size_rm_decision_interfaces__msg__FromSerial(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t max_serialized_size_rm_decision_interfaces__msg__FromSerial(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
bool cdr_serialize_key_rm_decision_interfaces__msg__FromSerial(
  const rm_decision_interfaces__msg__FromSerial * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t get_serialized_size_key_rm_decision_interfaces__msg__FromSerial(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t max_serialized_size_key_rm_decision_interfaces__msg__FromSerial(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_decision_interfaces, msg, FromSerial)();

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
