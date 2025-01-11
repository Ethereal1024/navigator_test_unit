// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_decision_interfaces:msg/AllRobotHP.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/all_robot_hp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_decision_interfaces/msg/detail/all_robot_hp__functions.h"
#include "rm_decision_interfaces/msg/detail/all_robot_hp__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rm_decision_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
cdr_serialize(
  const rm_decision_interfaces::msg::AllRobotHP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red_1_robot_hp
  cdr << ros_message.red_1_robot_hp;

  // Member: red_2_robot_hp
  cdr << ros_message.red_2_robot_hp;

  // Member: red_3_robot_hp
  cdr << ros_message.red_3_robot_hp;

  // Member: red_4_robot_hp
  cdr << ros_message.red_4_robot_hp;

  // Member: red_5_robot_hp
  cdr << ros_message.red_5_robot_hp;

  // Member: red_7_robot_hp
  cdr << ros_message.red_7_robot_hp;

  // Member: red_outpost_hp
  cdr << ros_message.red_outpost_hp;

  // Member: red_base_hp
  cdr << ros_message.red_base_hp;

  // Member: blue_1_robot_hp
  cdr << ros_message.blue_1_robot_hp;

  // Member: blue_2_robot_hp
  cdr << ros_message.blue_2_robot_hp;

  // Member: blue_3_robot_hp
  cdr << ros_message.blue_3_robot_hp;

  // Member: blue_4_robot_hp
  cdr << ros_message.blue_4_robot_hp;

  // Member: blue_5_robot_hp
  cdr << ros_message.blue_5_robot_hp;

  // Member: blue_7_robot_hp
  cdr << ros_message.blue_7_robot_hp;

  // Member: blue_outpost_hp
  cdr << ros_message.blue_outpost_hp;

  // Member: blue_base_hp
  cdr << ros_message.blue_base_hp;

  // Member: color
  cdr << ros_message.color;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_decision_interfaces::msg::AllRobotHP & ros_message)
{
  // Member: red_1_robot_hp
  cdr >> ros_message.red_1_robot_hp;

  // Member: red_2_robot_hp
  cdr >> ros_message.red_2_robot_hp;

  // Member: red_3_robot_hp
  cdr >> ros_message.red_3_robot_hp;

  // Member: red_4_robot_hp
  cdr >> ros_message.red_4_robot_hp;

  // Member: red_5_robot_hp
  cdr >> ros_message.red_5_robot_hp;

  // Member: red_7_robot_hp
  cdr >> ros_message.red_7_robot_hp;

  // Member: red_outpost_hp
  cdr >> ros_message.red_outpost_hp;

  // Member: red_base_hp
  cdr >> ros_message.red_base_hp;

  // Member: blue_1_robot_hp
  cdr >> ros_message.blue_1_robot_hp;

  // Member: blue_2_robot_hp
  cdr >> ros_message.blue_2_robot_hp;

  // Member: blue_3_robot_hp
  cdr >> ros_message.blue_3_robot_hp;

  // Member: blue_4_robot_hp
  cdr >> ros_message.blue_4_robot_hp;

  // Member: blue_5_robot_hp
  cdr >> ros_message.blue_5_robot_hp;

  // Member: blue_7_robot_hp
  cdr >> ros_message.blue_7_robot_hp;

  // Member: blue_outpost_hp
  cdr >> ros_message.blue_outpost_hp;

  // Member: blue_base_hp
  cdr >> ros_message.blue_base_hp;

  // Member: color
  cdr >> ros_message.color;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
get_serialized_size(
  const rm_decision_interfaces::msg::AllRobotHP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red_1_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_2_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_3_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_4_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_5_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_5_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_7_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_outpost_hp
  {
    size_t item_size = sizeof(ros_message.red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_base_hp
  {
    size_t item_size = sizeof(ros_message.red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_1_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_2_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_3_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_4_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_5_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_5_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_7_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message.blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_base_hp
  {
    size_t item_size = sizeof(ros_message.blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: color
  {
    size_t item_size = sizeof(ros_message.color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
max_serialized_size_AllRobotHP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: red_1_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_2_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_3_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_4_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_5_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_7_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: red_base_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_1_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_2_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_3_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_4_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_5_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_7_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blue_base_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_decision_interfaces::msg::AllRobotHP;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
cdr_serialize_key(
  const rm_decision_interfaces::msg::AllRobotHP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red_1_robot_hp
  cdr << ros_message.red_1_robot_hp;

  // Member: red_2_robot_hp
  cdr << ros_message.red_2_robot_hp;

  // Member: red_3_robot_hp
  cdr << ros_message.red_3_robot_hp;

  // Member: red_4_robot_hp
  cdr << ros_message.red_4_robot_hp;

  // Member: red_5_robot_hp
  cdr << ros_message.red_5_robot_hp;

  // Member: red_7_robot_hp
  cdr << ros_message.red_7_robot_hp;

  // Member: red_outpost_hp
  cdr << ros_message.red_outpost_hp;

  // Member: red_base_hp
  cdr << ros_message.red_base_hp;

  // Member: blue_1_robot_hp
  cdr << ros_message.blue_1_robot_hp;

  // Member: blue_2_robot_hp
  cdr << ros_message.blue_2_robot_hp;

  // Member: blue_3_robot_hp
  cdr << ros_message.blue_3_robot_hp;

  // Member: blue_4_robot_hp
  cdr << ros_message.blue_4_robot_hp;

  // Member: blue_5_robot_hp
  cdr << ros_message.blue_5_robot_hp;

  // Member: blue_7_robot_hp
  cdr << ros_message.blue_7_robot_hp;

  // Member: blue_outpost_hp
  cdr << ros_message.blue_outpost_hp;

  // Member: blue_base_hp
  cdr << ros_message.blue_base_hp;

  // Member: color
  cdr << ros_message.color;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
get_serialized_size_key(
  const rm_decision_interfaces::msg::AllRobotHP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red_1_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_2_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_3_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_4_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_5_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_5_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_7_robot_hp
  {
    size_t item_size = sizeof(ros_message.red_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_outpost_hp
  {
    size_t item_size = sizeof(ros_message.red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: red_base_hp
  {
    size_t item_size = sizeof(ros_message.red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_1_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_2_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_3_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_4_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_5_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_5_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_7_robot_hp
  {
    size_t item_size = sizeof(ros_message.blue_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message.blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blue_base_hp
  {
    size_t item_size = sizeof(ros_message.blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: color
  {
    size_t item_size = sizeof(ros_message.color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_decision_interfaces
max_serialized_size_key_AllRobotHP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: red_1_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_2_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_3_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_4_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_5_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_7_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_base_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_1_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_2_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_3_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_4_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_5_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_7_robot_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_base_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: color
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_decision_interfaces::msg::AllRobotHP;
    is_plain =
      (
      offsetof(DataType, color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _AllRobotHP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_decision_interfaces::msg::AllRobotHP *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AllRobotHP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_decision_interfaces::msg::AllRobotHP *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AllRobotHP__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_decision_interfaces::msg::AllRobotHP *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AllRobotHP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AllRobotHP(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AllRobotHP__callbacks = {
  "rm_decision_interfaces::msg",
  "AllRobotHP",
  _AllRobotHP__cdr_serialize,
  _AllRobotHP__cdr_deserialize,
  _AllRobotHP__get_serialized_size,
  _AllRobotHP__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AllRobotHP__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AllRobotHP__callbacks,
  get_message_typesupport_handle_function,
  &rm_decision_interfaces__msg__AllRobotHP__get_type_hash,
  &rm_decision_interfaces__msg__AllRobotHP__get_type_description,
  &rm_decision_interfaces__msg__AllRobotHP__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_decision_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_decision_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_decision_interfaces::msg::AllRobotHP>()
{
  return &rm_decision_interfaces::msg::typesupport_fastrtps_cpp::_AllRobotHP__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_decision_interfaces, msg, AllRobotHP)() {
  return &rm_decision_interfaces::msg::typesupport_fastrtps_cpp::_AllRobotHP__handle;
}

#ifdef __cplusplus
}
#endif
