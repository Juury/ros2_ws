// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Ir.idl
// generated code does not contain a copyright notice
#include "l3xz_openmv_camera_interfaces/srv/detail/ir__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "l3xz_openmv_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/ir__struct.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/ir__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Ir_Request__ros_msg_type = l3xz_openmv_camera_interfaces__srv__Ir_Request;

static bool _Ir_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ir_Request__ros_msg_type * ros_message = static_cast<const _Ir_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: on
  {
    cdr << (ros_message->on ? true : false);
  }

  return true;
}

static bool _Ir_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ir_Request__ros_msg_type * ros_message = static_cast<_Ir_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->on = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t get_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ir_Request__ros_msg_type * ros_message = static_cast<const _Ir_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name on
  {
    size_t item_size = sizeof(ros_message->on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ir_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t max_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Ir_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ir_Request = {
  "l3xz_openmv_camera_interfaces::srv",
  "Ir_Request",
  _Ir_Request__cdr_serialize,
  _Ir_Request__cdr_deserialize,
  _Ir_Request__get_serialized_size,
  _Ir_Request__max_serialized_size
};

static rosidl_message_type_support_t _Ir_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ir_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Ir_Request)() {
  return &_Ir_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/srv/detail/ir__struct.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/srv/detail/ir__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Ir_Response__ros_msg_type = l3xz_openmv_camera_interfaces__srv__Ir_Response;

static bool _Ir_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ir_Response__ros_msg_type * ros_message = static_cast<const _Ir_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _Ir_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ir_Response__ros_msg_type * ros_message = static_cast<_Ir_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t get_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ir_Response__ros_msg_type * ros_message = static_cast<const _Ir_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ir_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t max_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Ir_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_l3xz_openmv_camera_interfaces__srv__Ir_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ir_Response = {
  "l3xz_openmv_camera_interfaces::srv",
  "Ir_Response",
  _Ir_Response__cdr_serialize,
  _Ir_Response__cdr_deserialize,
  _Ir_Response__get_serialized_size,
  _Ir_Response__max_serialized_size
};

static rosidl_message_type_support_t _Ir_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ir_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Ir_Response)() {
  return &_Ir_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "l3xz_openmv_camera_interfaces/srv/ir.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Ir__callbacks = {
  "l3xz_openmv_camera_interfaces::srv",
  "Ir",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Ir_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Ir_Response)(),
};

static rosidl_service_type_support_t Ir__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Ir__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Ir)() {
  return &Ir__handle;
}

#if defined(__cplusplus)
}
#endif
