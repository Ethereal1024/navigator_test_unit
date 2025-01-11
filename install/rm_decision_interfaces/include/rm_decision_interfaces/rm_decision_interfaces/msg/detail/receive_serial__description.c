// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#include "rm_decision_interfaces/msg/detail/receive_serial__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
const rosidl_type_hash_t *
rm_decision_interfaces__msg__ReceiveSerial__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x9c, 0x81, 0x8a, 0x13, 0xc8, 0x09, 0xf4,
      0x2d, 0x41, 0x49, 0x22, 0xc0, 0x7d, 0x96, 0xe4,
      0x62, 0x34, 0xbb, 0x8e, 0x18, 0x18, 0x5e, 0x53,
      0x21, 0x84, 0x44, 0xdf, 0x1b, 0x4a, 0x90, 0x5c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_decision_interfaces__msg__ReceiveSerial__TYPE_NAME[] = "rm_decision_interfaces/msg/ReceiveSerial";

// Define type names, field names, and default values
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__color[] = "color";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__time[] = "time";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_1[] = "red_1";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_2[] = "red_2";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_3[] = "red_3";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_4[] = "red_4";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_5[] = "red_5";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_7[] = "red_7";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_outpost_hp[] = "red_outpost_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_base_hp[] = "red_base_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_1[] = "blue_1";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_2[] = "blue_2";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_3[] = "blue_3";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_4[] = "blue_4";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_5[] = "blue_5";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_7[] = "blue_7";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_outpost_hp[] = "blue_outpost_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_base_hp[] = "blue_base_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__self_hp[] = "self_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__base_hp[] = "base_hp";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__rfid_status[] = "rfid_status";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__event_data[] = "event_data";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__supply_robot_id[] = "supply_robot_id";
static char rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__supply_projectile_num[] = "supply_projectile_num";

static rosidl_runtime_c__type_description__Field rm_decision_interfaces__msg__ReceiveSerial__FIELDS[] = {
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_4, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_5, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_7, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_outpost_hp, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__red_base_hp, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_5, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_7, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_outpost_hp, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__blue_base_hp, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__self_hp, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__base_hp, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__rfid_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__event_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__supply_robot_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_decision_interfaces__msg__ReceiveSerial__FIELD_NAME__supply_projectile_num, 21, 21},
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
rm_decision_interfaces__msg__ReceiveSerial__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_decision_interfaces__msg__ReceiveSerial__TYPE_NAME, 40, 40},
      {rm_decision_interfaces__msg__ReceiveSerial__FIELDS, 24, 24},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 color\n"
  "\n"
  "float64 time\n"
  "\n"
  "uint16 red_1\n"
  "uint16 red_2\n"
  "uint16 red_3\n"
  "uint16 red_4\n"
  "uint16 red_5\n"
  "uint16 red_7\n"
  "uint16 red_outpost_hp\n"
  "uint16 red_base_hp\n"
  "    \n"
  "uint16 blue_1\n"
  "uint16 blue_2\n"
  "uint16 blue_3\n"
  "uint16 blue_4\n"
  "uint16 blue_5\n"
  "uint16 blue_7\n"
  "uint16 blue_outpost_hp\n"
  "uint16 blue_base_hp\n"
  "\n"
  "uint16 self_hp\n"
  "uint16 base_hp\n"
  "\n"
  "\n"
  "uint32 rfid_status\n"
  "uint8 event_data\n"
  "    \n"
  "   \n"
  "uint8 supply_robot_id\n"
  "uint8 supply_projectile_num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_decision_interfaces__msg__ReceiveSerial__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_decision_interfaces__msg__ReceiveSerial__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 405, 405},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_decision_interfaces__msg__ReceiveSerial__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_decision_interfaces__msg__ReceiveSerial__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
