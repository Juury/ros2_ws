// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from l3xz_openmv_camera_interfaces:srv/GpioSet.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__STRUCT_H_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GpioSet in the package l3xz_openmv_camera_interfaces.
typedef struct l3xz_openmv_camera_interfaces__srv__GpioSet_Request
{
  int8_t nr;
  bool on;
} l3xz_openmv_camera_interfaces__srv__GpioSet_Request;

// Struct for a sequence of l3xz_openmv_camera_interfaces__srv__GpioSet_Request.
typedef struct l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence
{
  l3xz_openmv_camera_interfaces__srv__GpioSet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GpioSet in the package l3xz_openmv_camera_interfaces.
typedef struct l3xz_openmv_camera_interfaces__srv__GpioSet_Response
{
  bool success;
} l3xz_openmv_camera_interfaces__srv__GpioSet_Response;

// Struct for a sequence of l3xz_openmv_camera_interfaces__srv__GpioSet_Response.
typedef struct l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence
{
  l3xz_openmv_camera_interfaces__srv__GpioSet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__STRUCT_H_
