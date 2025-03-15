// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "l3xz_openmv_camera_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__functions.h"
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


using _Gpio_Request__ros_msg_type = l3xz_openmv_camera_interfaces__srv__Gpio_Request;

static bool _Gpio_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gpio_Request__ros_msg_type * ros_message = static_cast<const _Gpio_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: nr
  {
    cdr << ros_message->nr;
  }

  // Field name: output
  {
    cdr << (ros_message->output ? true : false);
  }

  // Field name: opendrain
  {
    cdr << (ros_message->opendrain ? true : false);
  }

  // Field name: pullup
  {
    cdr << (ros_message->pullup ? true : false);
  }

  // Field name: pulldown
  {
    cdr << (ros_message->pulldown ? true : false);
  }

  return true;
}

static bool _Gpio_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gpio_Request__ros_msg_type * ros_message = static_cast<_Gpio_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: nr
  {
    cdr >> ros_message->nr;
  }

  // Field name: output
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->output = tmp ? true : false;
  }

  // Field name: opendrain
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->opendrain = tmp ? true : false;
  }

  // Field name: pullup
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pullup = tmp ? true : false;
  }

  // Field name: pulldown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pulldown = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t get_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpio_Request__ros_msg_type * ros_message = static_cast<const _Gpio_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nr
  {
    size_t item_size = sizeof(ros_message->nr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output
  {
    size_t item_size = sizeof(ros_message->output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opendrain
  {
    size_t item_size = sizeof(ros_message->opendrain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pullup
  {
    size_t item_size = sizeof(ros_message->pullup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pulldown
  {
    size_t item_size = sizeof(ros_message->pulldown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Gpio_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t max_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Request(
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

  // member: nr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: opendrain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pullup
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pulldown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Gpio_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Gpio_Request = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio_Request",
  _Gpio_Request__cdr_serialize,
  _Gpio_Request__cdr_deserialize,
  _Gpio_Request__get_serialized_size,
  _Gpio_Request__max_serialized_size
};

static rosidl_message_type_support_t _Gpio_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gpio_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Gpio_Request)() {
  return &_Gpio_Request__type_support;
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
// #include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/srv/detail/gpio__functions.h"
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


using _Gpio_Response__ros_msg_type = l3xz_openmv_camera_interfaces__srv__Gpio_Response;

static bool _Gpio_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Gpio_Response__ros_msg_type * ros_message = static_cast<const _Gpio_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _Gpio_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Gpio_Response__ros_msg_type * ros_message = static_cast<_Gpio_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t get_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Gpio_Response__ros_msg_type * ros_message = static_cast<const _Gpio_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Gpio_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_l3xz_openmv_camera_interfaces
size_t max_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Response(
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

static size_t _Gpio_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_l3xz_openmv_camera_interfaces__srv__Gpio_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Gpio_Response = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio_Response",
  _Gpio_Response__cdr_serialize,
  _Gpio_Response__cdr_deserialize,
  _Gpio_Response__get_serialized_size,
  _Gpio_Response__max_serialized_size
};

static rosidl_message_type_support_t _Gpio_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Gpio_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Gpio_Response)() {
  return &_Gpio_Response__type_support;
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
#include "l3xz_openmv_camera_interfaces/srv/gpio.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Gpio__callbacks = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Gpio_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Gpio_Response)(),
};

static rosidl_service_type_support_t Gpio__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Gpio__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, l3xz_openmv_camera_interfaces, srv, Gpio)() {
  return &Gpio__handle;
}

#if defined(__cplusplus)
}
#endif
