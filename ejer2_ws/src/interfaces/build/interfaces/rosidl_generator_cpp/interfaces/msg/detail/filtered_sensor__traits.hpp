// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: average
  {
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << ", ";
  }

  // member: sensor1
  {
    out << "sensor1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor1, out);
    out << ", ";
  }

  // member: sensor2
  {
    out << "sensor2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor2, out);
    out << ", ";
  }

  // member: sensor3
  {
    out << "sensor3: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << "\n";
  }

  // member: sensor1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor1, out);
    out << "\n";
  }

  // member: sensor2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor2, out);
    out << "\n";
  }

  // member: sensor3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor3: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilteredSensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::FilteredSensor & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::FilteredSensor>()
{
  return "interfaces::msg::FilteredSensor";
}

template<>
inline const char * name<interfaces::msg::FilteredSensor>()
{
  return "interfaces/msg/FilteredSensor";
}

template<>
struct has_fixed_size<interfaces::msg::FilteredSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::FilteredSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::FilteredSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
