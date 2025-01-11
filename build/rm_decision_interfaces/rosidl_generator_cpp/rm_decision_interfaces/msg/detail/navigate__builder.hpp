// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_decision_interfaces/msg/navigate.hpp"


#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_Navigate_instant
{
public:
  explicit Init_Navigate_instant(::rm_decision_interfaces::msg::Navigate & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::Navigate instant(::rm_decision_interfaces::msg::Navigate::_instant_type arg)
  {
    msg_.instant = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::Navigate msg_;
};

class Init_Navigate_pose
{
public:
  Init_Navigate_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_instant pose(::rm_decision_interfaces::msg::Navigate::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Navigate_instant(msg_);
  }

private:
  ::rm_decision_interfaces::msg::Navigate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::Navigate>()
{
  return rm_decision_interfaces::msg::builder::Init_Navigate_pose();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_
