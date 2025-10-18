// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FilteredSensor_sensor3
{
public:
  explicit Init_FilteredSensor_sensor3(::interfaces::msg::FilteredSensor & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::FilteredSensor sensor3(::interfaces::msg::FilteredSensor::_sensor3_type arg)
  {
    msg_.sensor3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FilteredSensor msg_;
};

class Init_FilteredSensor_sensor2
{
public:
  explicit Init_FilteredSensor_sensor2(::interfaces::msg::FilteredSensor & msg)
  : msg_(msg)
  {}
  Init_FilteredSensor_sensor3 sensor2(::interfaces::msg::FilteredSensor::_sensor2_type arg)
  {
    msg_.sensor2 = std::move(arg);
    return Init_FilteredSensor_sensor3(msg_);
  }

private:
  ::interfaces::msg::FilteredSensor msg_;
};

class Init_FilteredSensor_sensor1
{
public:
  explicit Init_FilteredSensor_sensor1(::interfaces::msg::FilteredSensor & msg)
  : msg_(msg)
  {}
  Init_FilteredSensor_sensor2 sensor1(::interfaces::msg::FilteredSensor::_sensor1_type arg)
  {
    msg_.sensor1 = std::move(arg);
    return Init_FilteredSensor_sensor2(msg_);
  }

private:
  ::interfaces::msg::FilteredSensor msg_;
};

class Init_FilteredSensor_average
{
public:
  Init_FilteredSensor_average()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilteredSensor_sensor1 average(::interfaces::msg::FilteredSensor::_average_type arg)
  {
    msg_.average = std::move(arg);
    return Init_FilteredSensor_sensor1(msg_);
  }

private:
  ::interfaces::msg::FilteredSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FilteredSensor>()
{
  return interfaces::msg::builder::Init_FilteredSensor_average();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
