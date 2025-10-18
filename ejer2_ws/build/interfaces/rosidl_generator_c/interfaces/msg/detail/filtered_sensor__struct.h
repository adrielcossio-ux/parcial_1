// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
#define INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/FilteredSensor in the package interfaces.
typedef struct interfaces__msg__FilteredSensor
{
  double average;
  double sensor1;
  double sensor2;
  double sensor3;
  builtin_interfaces__msg__Time stamp;
} interfaces__msg__FilteredSensor;

// Struct for a sequence of interfaces__msg__FilteredSensor.
typedef struct interfaces__msg__FilteredSensor__Sequence
{
  interfaces__msg__FilteredSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__FilteredSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
