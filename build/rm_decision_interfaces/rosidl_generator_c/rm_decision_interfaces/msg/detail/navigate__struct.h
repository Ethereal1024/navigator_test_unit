// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_decision_interfaces/msg/navigate.h"


#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Navigate in the package rm_decision_interfaces.
typedef struct rm_decision_interfaces__msg__Navigate
{
  geometry_msgs__msg__PoseStamped pose;
  bool instant;
} rm_decision_interfaces__msg__Navigate;

// Struct for a sequence of rm_decision_interfaces__msg__Navigate.
typedef struct rm_decision_interfaces__msg__Navigate__Sequence
{
  rm_decision_interfaces__msg__Navigate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__Navigate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_
