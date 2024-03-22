// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:action/TurtleRun.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__BUILDER_HPP_
#define MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/action/detail/turtle_run__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_Goal_start_flag
{
public:
  Init_TurtleRun_Goal_start_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TurtleRun_Goal start_flag(::my_interfaces::action::TurtleRun_Goal::_start_flag_type arg)
  {
    msg_.start_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_Goal>()
{
  return my_interfaces::action::builder::Init_TurtleRun_Goal_start_flag();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_Result_total_control_time
{
public:
  explicit Init_TurtleRun_Result_total_control_time(::my_interfaces::action::TurtleRun_Result & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_Result total_control_time(::my_interfaces::action::TurtleRun_Result::_total_control_time_type arg)
  {
    msg_.total_control_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Result msg_;
};

class Init_TurtleRun_Result_final_position_y
{
public:
  explicit Init_TurtleRun_Result_final_position_y(::my_interfaces::action::TurtleRun_Result & msg)
  : msg_(msg)
  {}
  Init_TurtleRun_Result_total_control_time final_position_y(::my_interfaces::action::TurtleRun_Result::_final_position_y_type arg)
  {
    msg_.final_position_y = std::move(arg);
    return Init_TurtleRun_Result_total_control_time(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Result msg_;
};

class Init_TurtleRun_Result_final_position_x
{
public:
  Init_TurtleRun_Result_final_position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_Result_final_position_y final_position_x(::my_interfaces::action::TurtleRun_Result::_final_position_x_type arg)
  {
    msg_.final_position_x = std::move(arg);
    return Init_TurtleRun_Result_final_position_y(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_Result>()
{
  return my_interfaces::action::builder::Init_TurtleRun_Result_final_position_x();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_Feedback_current_position_y
{
public:
  explicit Init_TurtleRun_Feedback_current_position_y(::my_interfaces::action::TurtleRun_Feedback & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_Feedback current_position_y(::my_interfaces::action::TurtleRun_Feedback::_current_position_y_type arg)
  {
    msg_.current_position_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Feedback msg_;
};

class Init_TurtleRun_Feedback_current_position_x
{
public:
  Init_TurtleRun_Feedback_current_position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_Feedback_current_position_y current_position_x(::my_interfaces::action::TurtleRun_Feedback::_current_position_x_type arg)
  {
    msg_.current_position_x = std::move(arg);
    return Init_TurtleRun_Feedback_current_position_y(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_Feedback>()
{
  return my_interfaces::action::builder::Init_TurtleRun_Feedback_current_position_x();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_SendGoal_Request_goal
{
public:
  explicit Init_TurtleRun_SendGoal_Request_goal(::my_interfaces::action::TurtleRun_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_SendGoal_Request goal(::my_interfaces::action::TurtleRun_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_SendGoal_Request msg_;
};

class Init_TurtleRun_SendGoal_Request_goal_id
{
public:
  Init_TurtleRun_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_SendGoal_Request_goal goal_id(::my_interfaces::action::TurtleRun_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleRun_SendGoal_Request_goal(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_SendGoal_Request>()
{
  return my_interfaces::action::builder::Init_TurtleRun_SendGoal_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_SendGoal_Response_stamp
{
public:
  explicit Init_TurtleRun_SendGoal_Response_stamp(::my_interfaces::action::TurtleRun_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_SendGoal_Response stamp(::my_interfaces::action::TurtleRun_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_SendGoal_Response msg_;
};

class Init_TurtleRun_SendGoal_Response_accepted
{
public:
  Init_TurtleRun_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_SendGoal_Response_stamp accepted(::my_interfaces::action::TurtleRun_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TurtleRun_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_SendGoal_Response>()
{
  return my_interfaces::action::builder::Init_TurtleRun_SendGoal_Response_accepted();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_GetResult_Request_goal_id
{
public:
  Init_TurtleRun_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TurtleRun_GetResult_Request goal_id(::my_interfaces::action::TurtleRun_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_GetResult_Request>()
{
  return my_interfaces::action::builder::Init_TurtleRun_GetResult_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_GetResult_Response_result
{
public:
  explicit Init_TurtleRun_GetResult_Response_result(::my_interfaces::action::TurtleRun_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_GetResult_Response result(::my_interfaces::action::TurtleRun_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_GetResult_Response msg_;
};

class Init_TurtleRun_GetResult_Response_status
{
public:
  Init_TurtleRun_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_GetResult_Response_result status(::my_interfaces::action::TurtleRun_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TurtleRun_GetResult_Response_result(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_GetResult_Response>()
{
  return my_interfaces::action::builder::Init_TurtleRun_GetResult_Response_status();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleRun_FeedbackMessage_feedback
{
public:
  explicit Init_TurtleRun_FeedbackMessage_feedback(::my_interfaces::action::TurtleRun_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TurtleRun_FeedbackMessage feedback(::my_interfaces::action::TurtleRun_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_FeedbackMessage msg_;
};

class Init_TurtleRun_FeedbackMessage_goal_id
{
public:
  Init_TurtleRun_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleRun_FeedbackMessage_feedback goal_id(::my_interfaces::action::TurtleRun_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleRun_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_interfaces::action::TurtleRun_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TurtleRun_FeedbackMessage>()
{
  return my_interfaces::action::builder::Init_TurtleRun_FeedbackMessage_goal_id();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__TURTLE_RUN__BUILDER_HPP_
