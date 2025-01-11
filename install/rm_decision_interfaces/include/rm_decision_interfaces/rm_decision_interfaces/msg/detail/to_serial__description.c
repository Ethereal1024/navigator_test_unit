// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/ToSerial.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/to_serial__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__ToSerial__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x2b, 0x9d, 0xab, 0xe8, 0xd7, 0xf1, 0x56,
      0xb1, 0x50, 0x95, 0x63, 0xa9, 0x4b, 0xbc, 0x40,
      0xfc, 0x8b, 0x79, 0x43, 0xfd, 0x19, 0x99, 0x3e,
      0xed, 0x0f, 0xe2, 0x9e, 0xff, 0xe8, 0x76, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__ToSerial__TYPE_NAME[] = "rm_decision_interfaces/msg/ToSerial";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__ToSerial__FIELD_NAME__sentry_cmd[] = "sentry_cmd";
static char rm_decision_interfaces__msg__ToSerial__FIELD_NAME__shangpo[] = "shangpo";
static char rm_decision_interfaces__msg__ToSerial__FIELD_NAME__diff_yaw[] = "diff_yaw";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__ToSerial__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__ToSerial__FIELD_NAME__sentry_cmd, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ToSerial__FIELD_NAME__shangpo, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ToSerial__FIELD_NAME__diff_yaw, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_decision_interfaces__msg__ToSerial__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__ToSerial__TYPE_NAME, 35, 35},
      {rm_decision_interfaces__msg__ToSerial__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 sentry_cmd \n"
  "bool shangpo\n"
  "float32 diff_yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__ToSerial__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__ToSerial__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__ToSerial__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__ToSerial__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
