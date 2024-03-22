// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/TwoIntCalc.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/two_int_calc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TwoIntCalc_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: op
  {
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
    out << ", ";
  }

  // member: client_time
  {
    out << "client_time: ";
    rosidl_generator_traits::value_to_yaml(msg.client_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoIntCalc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: op
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
    out << "\n";
  }

  // member: client_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_time: ";
    rosidl_generator_traits::value_to_yaml(msg.client_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoIntCalc_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TwoIntCalc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TwoIntCalc_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TwoIntCalc_Request>()
{
  return "custom_interfaces::srv::TwoIntCalc_Request";
}

template<>
inline const char * name<custom_interfaces::srv::TwoIntCalc_Request>()
{
  return "custom_interfaces/srv/TwoIntCalc_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TwoIntCalc_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TwoIntCalc_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::TwoIntCalc_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TwoIntCalc_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: server_time
  {
    out << "server_time: ";
    rosidl_generator_traits::value_to_yaml(msg.server_time, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoIntCalc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: server_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_time: ";
    rosidl_generator_traits::value_to_yaml(msg.server_time, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoIntCalc_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::TwoIntCalc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::TwoIntCalc_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::TwoIntCalc_Response>()
{
  return "custom_interfaces::srv::TwoIntCalc_Response";
}

template<>
inline const char * name<custom_interfaces::srv::TwoIntCalc_Response>()
{
  return "custom_interfaces/srv/TwoIntCalc_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TwoIntCalc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::TwoIntCalc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::TwoIntCalc_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::TwoIntCalc>()
{
  return "custom_interfaces::srv::TwoIntCalc";
}

template<>
inline const char * name<custom_interfaces::srv::TwoIntCalc>()
{
  return "custom_interfaces/srv/TwoIntCalc";
}

template<>
struct has_fixed_size<custom_interfaces::srv::TwoIntCalc>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::TwoIntCalc_Request>::value &&
    has_fixed_size<custom_interfaces::srv::TwoIntCalc_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::TwoIntCalc>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::TwoIntCalc_Request>::value &&
    has_bounded_size<custom_interfaces::srv::TwoIntCalc_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::TwoIntCalc>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::TwoIntCalc_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::TwoIntCalc_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__TRAITS_HPP_
