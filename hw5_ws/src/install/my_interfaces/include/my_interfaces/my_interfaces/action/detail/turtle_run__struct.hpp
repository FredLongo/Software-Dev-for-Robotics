// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:action/TurtleRun.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__STRUCT_HPP_
#define MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_Goal __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_Goal_
{
  using Type = TurtleRun_Goal_<ContainerAllocator>;

  explicit TurtleRun_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_flag = "";
    }
  }

  explicit TurtleRun_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_flag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_flag = "";
    }
  }

  // field types and members
  using _start_flag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_flag_type start_flag;

  // setters for named parameter idiom
  Type & set__start_flag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Goal
    std::shared_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Goal
    std::shared_ptr<my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_Goal_ & other) const
  {
    if (this->start_flag != other.start_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_Goal_

// alias to use template instance with default allocator
using TurtleRun_Goal =
  my_interfaces::action::TurtleRun_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_Result __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_Result_
{
  using Type = TurtleRun_Result_<ContainerAllocator>;

  explicit TurtleRun_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_position_x = 0.0;
      this->final_position_y = 0.0;
      this->total_control_time = 0.0;
    }
  }

  explicit TurtleRun_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_position_x = 0.0;
      this->final_position_y = 0.0;
      this->total_control_time = 0.0;
    }
  }

  // field types and members
  using _final_position_x_type =
    double;
  _final_position_x_type final_position_x;
  using _final_position_y_type =
    double;
  _final_position_y_type final_position_y;
  using _total_control_time_type =
    double;
  _total_control_time_type total_control_time;

  // setters for named parameter idiom
  Type & set__final_position_x(
    const double & _arg)
  {
    this->final_position_x = _arg;
    return *this;
  }
  Type & set__final_position_y(
    const double & _arg)
  {
    this->final_position_y = _arg;
    return *this;
  }
  Type & set__total_control_time(
    const double & _arg)
  {
    this->total_control_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Result
    std::shared_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Result
    std::shared_ptr<my_interfaces::action::TurtleRun_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_Result_ & other) const
  {
    if (this->final_position_x != other.final_position_x) {
      return false;
    }
    if (this->final_position_y != other.final_position_y) {
      return false;
    }
    if (this->total_control_time != other.total_control_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_Result_

// alias to use template instance with default allocator
using TurtleRun_Result =
  my_interfaces::action::TurtleRun_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_Feedback __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_Feedback_
{
  using Type = TurtleRun_Feedback_<ContainerAllocator>;

  explicit TurtleRun_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position_x = 0.0;
      this->current_position_y = 0.0;
    }
  }

  explicit TurtleRun_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position_x = 0.0;
      this->current_position_y = 0.0;
    }
  }

  // field types and members
  using _current_position_x_type =
    double;
  _current_position_x_type current_position_x;
  using _current_position_y_type =
    double;
  _current_position_y_type current_position_y;

  // setters for named parameter idiom
  Type & set__current_position_x(
    const double & _arg)
  {
    this->current_position_x = _arg;
    return *this;
  }
  Type & set__current_position_y(
    const double & _arg)
  {
    this->current_position_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Feedback
    std::shared_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_Feedback
    std::shared_ptr<my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_Feedback_ & other) const
  {
    if (this->current_position_x != other.current_position_x) {
      return false;
    }
    if (this->current_position_y != other.current_position_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_Feedback_

// alias to use template instance with default allocator
using TurtleRun_Feedback =
  my_interfaces::action::TurtleRun_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_interfaces/action/detail/turtle_run__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_SendGoal_Request_
{
  using Type = TurtleRun_SendGoal_Request_<ContainerAllocator>;

  explicit TurtleRun_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TurtleRun_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_interfaces::action::TurtleRun_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_interfaces::action::TurtleRun_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Request
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Request
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_SendGoal_Request_

// alias to use template instance with default allocator
using TurtleRun_SendGoal_Request =
  my_interfaces::action::TurtleRun_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_SendGoal_Response_
{
  using Type = TurtleRun_SendGoal_Response_<ContainerAllocator>;

  explicit TurtleRun_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TurtleRun_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Response
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_SendGoal_Response
    std::shared_ptr<my_interfaces::action::TurtleRun_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_SendGoal_Response_

// alias to use template instance with default allocator
using TurtleRun_SendGoal_Response =
  my_interfaces::action::TurtleRun_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

namespace my_interfaces
{

namespace action
{

struct TurtleRun_SendGoal
{
  using Request = my_interfaces::action::TurtleRun_SendGoal_Request;
  using Response = my_interfaces::action::TurtleRun_SendGoal_Response;
};

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_GetResult_Request_
{
  using Type = TurtleRun_GetResult_Request_<ContainerAllocator>;

  explicit TurtleRun_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TurtleRun_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Request
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Request
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_GetResult_Request_

// alias to use template instance with default allocator
using TurtleRun_GetResult_Request =
  my_interfaces::action::TurtleRun_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "my_interfaces/action/detail/turtle_run__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_GetResult_Response_
{
  using Type = TurtleRun_GetResult_Response_<ContainerAllocator>;

  explicit TurtleRun_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TurtleRun_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_interfaces::action::TurtleRun_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_interfaces::action::TurtleRun_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Response
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_GetResult_Response
    std::shared_ptr<my_interfaces::action::TurtleRun_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_GetResult_Response_

// alias to use template instance with default allocator
using TurtleRun_GetResult_Response =
  my_interfaces::action::TurtleRun_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

namespace my_interfaces
{

namespace action
{

struct TurtleRun_GetResult
{
  using Request = my_interfaces::action::TurtleRun_GetResult_Request;
  using Response = my_interfaces::action::TurtleRun_GetResult_Response;
};

}  // namespace action

}  // namespace my_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_interfaces/action/detail/turtle_run__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interfaces__action__TurtleRun_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__action__TurtleRun_FeedbackMessage __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TurtleRun_FeedbackMessage_
{
  using Type = TurtleRun_FeedbackMessage_<ContainerAllocator>;

  explicit TurtleRun_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TurtleRun_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_interfaces::action::TurtleRun_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__action__TurtleRun_FeedbackMessage
    std::shared_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__action__TurtleRun_FeedbackMessage
    std::shared_ptr<my_interfaces::action::TurtleRun_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleRun_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleRun_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleRun_FeedbackMessage_

// alias to use template instance with default allocator
using TurtleRun_FeedbackMessage =
  my_interfaces::action::TurtleRun_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_interfaces
{

namespace action
{

struct TurtleRun
{
  /// The goal message defined in the action definition.
  using Goal = my_interfaces::action::TurtleRun_Goal;
  /// The result message defined in the action definition.
  using Result = my_interfaces::action::TurtleRun_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_interfaces::action::TurtleRun_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_interfaces::action::TurtleRun_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_interfaces::action::TurtleRun_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_interfaces::action::TurtleRun_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TurtleRun TurtleRun;

}  // namespace action

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__STRUCT_HPP_
