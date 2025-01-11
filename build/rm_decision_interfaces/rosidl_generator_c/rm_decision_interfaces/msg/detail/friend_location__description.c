// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/FriendLocation.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/friend_location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__FriendLocation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x4c, 0xeb, 0xf0, 0xe0, 0xff, 0x2b, 0x5e,
      0x1a, 0xe0, 0x1d, 0x22, 0x2f, 0x8f, 0x1d, 0x0d,
      0x31, 0x3b, 0x80, 0x12, 0xa7, 0x8e, 0xa1, 0xad,
      0x65, 0x97, 0xf0, 0x37, 0xce, 0x88, 0xff, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__FriendLocation__TYPE_NAME[] = "rm_decision_interfaces/msg/FriendLocation";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__hero_x[] = "hero_x";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__hero_y[] = "hero_y";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__engineer_x[] = "engineer_x";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__engineer_y[] = "engineer_y";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_3_x[] = "standard_3_x";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_3_y[] = "standard_3_y";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_4_x[] = "standard_4_x";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_4_y[] = "standard_4_y";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_5_x[] = "standard_5_x";
static char rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_5_y[] = "standard_5_y";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__FriendLocation__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__hero_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__hero_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__engineer_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__engineer_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_3_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_3_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_4_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_4_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_5_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FriendLocation__FIELD_NAME__standard_5_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_decision_interfaces__msg__FriendLocation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__FriendLocation__TYPE_NAME, 41, 41},
      {rm_decision_interfaces__msg__FriendLocation__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 hero_x\n"
  "float64 hero_y\n"
  "\n"
  "float64 engineer_x\n"
  "float64 engineer_y\n"
  "\n"
  "float64 standard_3_x\n"
  "float64 standard_3_y\n"
  "\n"
  "float64 standard_4_x\n"
  "float64 standard_4_y\n"
  "\n"
  "float64 standard_5_x\n"
  "float64 standard_5_y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__FriendLocation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__FriendLocation__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 198, 198},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__FriendLocation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__FriendLocation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
