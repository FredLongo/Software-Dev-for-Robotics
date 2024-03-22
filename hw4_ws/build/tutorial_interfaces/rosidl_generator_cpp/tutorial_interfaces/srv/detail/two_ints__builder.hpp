// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__TWO_INTS__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_TwoInts_Request_s
{
public:
  explicit Init_TwoInts_Request_s(::tutorial_interfaces::srv::TwoInts_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::TwoInts_Request s(::tutorial_interfaces::srv::TwoInts_Request::_s_type arg)
  {
    msg_.s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::TwoInts_Request msg_;
};

class Init_TwoInts_Request_b
{
public:
  explicit Init_TwoInts_Request_b(::tutorial_interfaces::srv::TwoInts_Request & msg)
  : msg_(msg)
  {}
  Init_TwoInts_Request_s b(::tutorial_interfaces::srv::TwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_TwoInts_Request_s(msg_);
  }

private:
  ::tutorial_interfaces::srv::TwoInts_Request msg_;
};

class Init_TwoInts_Request_a
{
public:
  Init_TwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_Request_b a(::tutorial_interfaces::srv::TwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TwoInts_Request_b(msg_);
  }

private:
  ::tutorial_interfaces::srv::TwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::TwoInts_Request>()
{
  return tutorial_interfaces::srv::builder::Init_TwoInts_Request_a();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_TwoInts_Response_sum
{
public:
  Init_TwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::TwoInts_Response sum(::tutorial_interfaces::srv::TwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::TwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::TwoInts_Response>()
{
  return tutorial_interfaces::srv::builder::Init_TwoInts_Response_sum();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__TWO_INTS__BUILDER_HPP_
