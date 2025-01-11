// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__RobotStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0xcb, 0x45, 0x80, 0x15, 0x52, 0x8e, 0xa1,
      0x8f, 0xfa, 0x79, 0xd0, 0x82, 0xd5, 0x56, 0x58,
      0xf8, 0x52, 0xc4, 0xc1, 0x5d, 0x7c, 0xd7, 0xa8,
      0x80, 0xed, 0xea, 0x26, 0xf9, 0x9d, 0xc0, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__RobotStatus__TYPE_NAME[] = "rm_decision_interfaces/msg/RobotStatus";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__robot_id[] = "robot_id";
static char rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__current_hp[] = "current_hp";
static char rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__shooter_heat[] = "shooter_heat";
static char rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__ammo_buy[] = "ammo_buy";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__RobotStatus__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__current_hp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__shooter_heat, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__RobotStatus__FIELD_NAME__ammo_buy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_decision_interfaces__msg__RobotStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__RobotStatus__TYPE_NAME, 38, 38},
      {rm_decision_interfaces__msg__RobotStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 robot_id \n"
  "uint16 current_hp\n"
  "uint16 shooter_heat \n"
  "uint16 ammo_buy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__RobotStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__RobotStatus__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__RobotStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__RobotStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
