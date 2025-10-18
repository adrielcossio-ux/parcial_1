// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/get_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_l2
{
public:
  explicit Init_GetPosition_Request_l2(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::GetPosition_Request l2(::custom_interface::srv::GetPosition_Request::_l2_type arg)
  {
    msg_.l2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_l1
{
public:
  explicit Init_GetPosition_Request_l1(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Request_l2 l1(::custom_interface::srv::GetPosition_Request::_l1_type arg)
  {
    msg_.l1 = std::move(arg);
    return Init_GetPosition_Request_l2(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th3
{
public:
  explicit Init_GetPosition_Request_th3(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Request_l1 th3(::custom_interface::srv::GetPosition_Request::_th3_type arg)
  {
    msg_.th3 = std::move(arg);
    return Init_GetPosition_Request_l1(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th2
{
public:
  explicit Init_GetPosition_Request_th2(::custom_interface::srv::GetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Request_th3 th2(::custom_interface::srv::GetPosition_Request::_th2_type arg)
  {
    msg_.th2 = std::move(arg);
    return Init_GetPosition_Request_th3(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

class Init_GetPosition_Request_th1
{
public:
  Init_GetPosition_Request_th1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Request_th2 th1(::custom_interface::srv::GetPosition_Request::_th1_type arg)
  {
    msg_.th1 = std::move(arg);
    return Init_GetPosition_Request_th2(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::GetPosition_Request>()
{
  return custom_interface::srv::builder::Init_GetPosition_Request_th1();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_z
{
public:
  explicit Init_GetPosition_Response_z(::custom_interface::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  ::custom_interface::srv::GetPosition_Response z(::custom_interface::srv::GetPosition_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_y
{
public:
  explicit Init_GetPosition_Response_y(::custom_interface::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Response_z y(::custom_interface::srv::GetPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetPosition_Response_z(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_x
{
public:
  Init_GetPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Response_y x(::custom_interface::srv::GetPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetPosition_Response_y(msg_);
  }

private:
  ::custom_interface::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::GetPosition_Response>()
{
  return custom_interface::srv::builder::Init_GetPosition_Response_x();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
