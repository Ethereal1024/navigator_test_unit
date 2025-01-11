// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/ToAutoAim.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/to_auto_aim__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__ToAutoAim__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x1c, 0x63, 0x95, 0x5a, 0x22, 0x08, 0x9c,
      0x5d, 0x3e, 0x08, 0xff, 0x25, 0x02, 0x0e, 0xe8,
      0x16, 0x76, 0xc3, 0xa9, 0xea, 0x33, 0xcd, 0x12,
      0xae, 0xde, 0x5a, 0x5b, 0xc5, 0x09, 0xda, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__ToAutoAim__TYPE_NAME[] = "rm_decision_interfaces/msg/ToAutoAim";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__ToAutoAim__FIELD_NAME__target[] = "target";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__ToAutoAim__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__ToAutoAim__FIELD_NAME__target, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_decision_interfaces__msg__ToAutoAim__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__ToAutoAim__TYPE_NAME, 36, 36},
      {rm_decision_interfaces__msg__ToAutoAim__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 target";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__ToAutoAim__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__ToAutoAim__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__ToAutoAim__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__ToAutoAim__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
