// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/RFID.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/rfid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__RFID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x4b, 0x8f, 0x85, 0x69, 0x91, 0x45, 0x4e,
      0x91, 0x2b, 0x50, 0xb8, 0x91, 0x07, 0x91, 0xac,
      0x11, 0xf6, 0x54, 0xfb, 0xe7, 0x42, 0x5f, 0x18,
      0x89, 0x97, 0x5e, 0x96, 0x55, 0xb8, 0x06, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__RFID__TYPE_NAME[] = "rm_decision_interfaces/msg/RFID";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__RFID__FIELD_NAME__rfid_patrol_status[] = "rfid_patrol_status";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__RFID__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__RFID__FIELD_NAME__rfid_patrol_status, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_decision_interfaces__msg__RFID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__RFID__TYPE_NAME, 31, 31},
      {rm_decision_interfaces__msg__RFID__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool rfid_patrol_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__RFID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__RFID__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__RFID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__RFID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
