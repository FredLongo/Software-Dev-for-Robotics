// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/TwoIntCalc.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/two_int_calc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_TwoIntCalc_Request_client_time
{
public:
  explicit Init_TwoIntCalc_Request_client_time(::custom_interfaces::srv::TwoIntCalc_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::TwoIntCalc_Request client_time(::custom_interfaces::srv::TwoIntCalc_Request::_client_time_type arg)
  {
    msg_.client_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Request msg_;
};

class Init_TwoIntCalc_Request_op
{
public:
  explicit Init_TwoIntCalc_Request_op(::custom_interfaces::srv::TwoIntCalc_Request & msg)
  : msg_(msg)
  {}
  Init_TwoIntCalc_Request_client_time op(::custom_interfaces::srv::TwoIntCalc_Request::_op_type arg)
  {
    msg_.op = std::move(arg);
    return Init_TwoIntCalc_Request_client_time(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Request msg_;
};

class Init_TwoIntCalc_Request_y
{
public:
  explicit Init_TwoIntCalc_Request_y(::custom_interfaces::srv::TwoIntCalc_Request & msg)
  : msg_(msg)
  {}
  Init_TwoIntCalc_Request_op y(::custom_interfaces::srv::TwoIntCalc_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TwoIntCalc_Request_op(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Request msg_;
};

class Init_TwoIntCalc_Request_x
{
public:
  Init_TwoIntCalc_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoIntCalc_Request_y x(::custom_interfaces::srv::TwoIntCalc_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TwoIntCalc_Request_y(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::TwoIntCalc_Request>()
{
  return custom_interfaces::srv::builder::Init_TwoIntCalc_Request_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_TwoIntCalc_Response_result
{
public:
  explicit Init_TwoIntCalc_Response_result(::custom_interfaces::srv::TwoIntCalc_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::TwoIntCalc_Response result(::custom_interfaces::srv::TwoIntCalc_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Response msg_;
};

class Init_TwoIntCalc_Response_server_time
{
public:
  Init_TwoIntCalc_Response_server_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoIntCalc_Response_result server_time(::custom_interfaces::srv::TwoIntCalc_Response::_server_time_type arg)
  {
    msg_.server_time = std::move(arg);
    return Init_TwoIntCalc_Response_result(msg_);
  }

private:
  ::custom_interfaces::srv::TwoIntCalc_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::TwoIntCalc_Response>()
{
  return custom_interfaces::srv::builder::Init_TwoIntCalc_Response_server_time();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__BUILDER_HPP_
