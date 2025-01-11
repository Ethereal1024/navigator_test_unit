// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/from_serial__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__FromSerial__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x18, 0xd2, 0x19, 0x0e, 0x86, 0x35, 0x25,
      0xdc, 0x24, 0x34, 0xf3, 0x31, 0xd5, 0x3b, 0x66,
      0x09, 0x64, 0x5e, 0x14, 0x33, 0x4b, 0x7a, 0x31,
      0xb3, 0xe4, 0x98, 0xd5, 0x72, 0x41, 0x4f, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__FromSerial__TYPE_NAME[] = "rm_decision_interfaces/msg/FromSerial";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__gamestart[] = "gamestart";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__color[] = "color";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__projectile_allowance_17mm[] = "projectile_allowance_17mm";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__remaining_gold_coin[] = "remaining_gold_coin";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__supply_robot_id[] = "supply_robot_id";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__supply_projectile_num[] = "supply_projectile_num";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_7[] = "red_7";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_outpost_hp[] = "red_outpost_hp";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_base_hp[] = "red_base_hp";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_7[] = "blue_7";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_outpost_hp[] = "blue_outpost_hp";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_base_hp[] = "blue_base_hp";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__target_pos_x[] = "target_pos_x";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__target_pos_y[] = "target_pos_y";
static char rm_decision_interfaces__msg__FromSerial__FIELD_NAME__cmd_key[] = "cmd_key";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__FromSerial__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__gamestart, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__projectile_allowance_17mm, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__remaining_gold_coin, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__supply_robot_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__supply_projectile_num, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_7, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_outpost_hp, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__red_base_hp, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_7, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_outpost_hp, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__blue_base_hp, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__target_pos_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__target_pos_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__FromSerial__FIELD_NAME__cmd_key, 7, 7},
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
rm_decision_interfaces__msg__FromSerial__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__FromSerial__TYPE_NAME, 37, 37},
      {rm_decision_interfaces__msg__FromSerial__FIELDS, 15, 15},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool gamestart\n"
  "uint8 color\n"
  "\n"
  "uint16 projectile_allowance_17mm\n"
  "uint16 remaining_gold_coin\n"
  "\n"
  "uint8 supply_robot_id\n"
  "uint8 supply_projectile_num\n"
  "\n"
  "uint16 red_7\n"
  "uint16 red_outpost_hp\n"
  "uint16 red_base_hp\n"
  "\n"
  "uint16 blue_7\n"
  "uint16 blue_outpost_hp\n"
  "uint16 blue_base_hp\n"
  "\n"
  "float32 target_pos_x\n"
  "float32 target_pos_y\n"
  "uint8 cmd_key";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__FromSerial__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__FromSerial__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 308, 308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__FromSerial__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__FromSerial__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
