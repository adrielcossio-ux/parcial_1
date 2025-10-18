// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__FilteredSensor __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__FilteredSensor __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FilteredSensor_
{
  using Type = FilteredSensor_<ContainerAllocator>;

  explicit FilteredSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->sensor1 = 0.0;
      this->sensor2 = 0.0;
      this->sensor3 = 0.0;
    }
  }

  explicit FilteredSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->sensor1 = 0.0;
      this->sensor2 = 0.0;
      this->sensor3 = 0.0;
    }
  }

  // field types and members
  using _average_type =
    double;
  _average_type average;
  using _sensor1_type =
    double;
  _sensor1_type sensor1;
  using _sensor2_type =
    double;
  _sensor2_type sensor2;
  using _sensor3_type =
    double;
  _sensor3_type sensor3;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__average(
    const double & _arg)
  {
    this->average = _arg;
    return *this;
  }
  Type & set__sensor1(
    const double & _arg)
  {
    this->sensor1 = _arg;
    return *this;
  }
  Type & set__sensor2(
    const double & _arg)
  {
    this->sensor2 = _arg;
    return *this;
  }
  Type & set__sensor3(
    const double & _arg)
  {
    this->sensor3 = _arg;
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
    interfaces::msg::FilteredSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::FilteredSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FilteredSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FilteredSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__FilteredSensor
    std::shared_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__FilteredSensor
    std::shared_ptr<interfaces::msg::FilteredSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilteredSensor_ & other) const
  {
    if (this->average != other.average) {
      return false;
    }
    if (this->sensor1 != other.sensor1) {
      return false;
    }
    if (this->sensor2 != other.sensor2) {
      return false;
    }
    if (this->sensor3 != other.sensor3) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilteredSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilteredSensor_

// alias to use template instance with default allocator
using FilteredSensor =
  interfaces::msg::FilteredSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_
