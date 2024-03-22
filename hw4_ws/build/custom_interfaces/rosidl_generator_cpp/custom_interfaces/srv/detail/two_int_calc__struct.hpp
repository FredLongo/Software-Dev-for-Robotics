// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/TwoIntCalc.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__TwoIntCalc_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__TwoIntCalc_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TwoIntCalc_Request_
{
  using Type = TwoIntCalc_Request_<ContainerAllocator>;

  explicit TwoIntCalc_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->op = "";
      this->client_time = 0.0;
    }
  }

  explicit TwoIntCalc_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : op(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->op = "";
      this->client_time = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _op_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _op_type op;
  using _client_time_type =
    double;
  _client_time_type client_time;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__op(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->op = _arg;
    return *this;
  }
  Type & set__client_time(
    const double & _arg)
  {
    this->client_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__TwoIntCalc_Request
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__TwoIntCalc_Request
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoIntCalc_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->op != other.op) {
      return false;
    }
    if (this->client_time != other.client_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoIntCalc_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoIntCalc_Request_

// alias to use template instance with default allocator
using TwoIntCalc_Request =
  custom_interfaces::srv::TwoIntCalc_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__TwoIntCalc_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__TwoIntCalc_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TwoIntCalc_Response_
{
  using Type = TwoIntCalc_Response_<ContainerAllocator>;

  explicit TwoIntCalc_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_time = 0.0;
      this->result = 0.0;
    }
  }

  explicit TwoIntCalc_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server_time = 0.0;
      this->result = 0.0;
    }
  }

  // field types and members
  using _server_time_type =
    double;
  _server_time_type server_time;
  using _result_type =
    double;
  _result_type result;

  // setters for named parameter idiom
  Type & set__server_time(
    const double & _arg)
  {
    this->server_time = _arg;
    return *this;
  }
  Type & set__result(
    const double & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__TwoIntCalc_Response
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__TwoIntCalc_Response
    std::shared_ptr<custom_interfaces::srv::TwoIntCalc_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoIntCalc_Response_ & other) const
  {
    if (this->server_time != other.server_time) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoIntCalc_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoIntCalc_Response_

// alias to use template instance with default allocator
using TwoIntCalc_Response =
  custom_interfaces::srv::TwoIntCalc_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct TwoIntCalc
{
  using Request = custom_interfaces::srv::TwoIntCalc_Request;
  using Response = custom_interfaces::srv::TwoIntCalc_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TWO_INT_CALC__STRUCT_HPP_
