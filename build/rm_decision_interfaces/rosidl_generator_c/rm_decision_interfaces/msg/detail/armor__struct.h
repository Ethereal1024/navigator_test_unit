// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/Armor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_decision_interfaces/msg/armor.h"


#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'number'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Armor in the package rm_decision_interfaces.
typedef struct rm_decision_interfaces__msg__Armor
{
  rosidl_runtime_c__String number;
  rosidl_runtime_c__String type;
  float distance_to_image_center;
  geometry_msgs__msg__Pose pose;
} rm_decision_interfaces__msg__Armor;

// Struct for a sequence of rm_decision_interfaces__msg__Armor.
typedef struct rm_decision_interfaces__msg__Armor__Sequence
{
  rm_decision_interfaces__msg__Armor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__Armor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_
