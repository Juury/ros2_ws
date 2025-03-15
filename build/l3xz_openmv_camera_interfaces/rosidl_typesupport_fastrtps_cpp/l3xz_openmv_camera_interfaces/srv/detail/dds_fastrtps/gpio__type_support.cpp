// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__rosidl_typesupport_fastrtps_cpp.hpp"
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
cdr_serialize(
  const l3xz_openmv_camera_interfaces::srv::Gpio_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nr
  cdr << ros_message.nr;
  // Member: output
  cdr << (ros_message.output ? true : false);
  // Member: opendrain
  cdr << (ros_message.opendrain ? true : false);
  // Member: pullup
  cdr << (ros_message.pullup ? true : false);
  // Member: pulldown
  cdr << (ros_message.pulldown ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  l3xz_openmv_camera_interfaces::srv::Gpio_Request & ros_message)
{
  // Member: nr
  cdr >> ros_message.nr;

  // Member: output
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.output = tmp ? true : false;
  }

  // Member: opendrain
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.opendrain = tmp ? true : false;
  }

  // Member: pullup
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pullup = tmp ? true : false;
  }

  // Member: pulldown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pulldown = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
get_serialized_size(
  const l3xz_openmv_camera_interfaces::srv::Gpio_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nr
  {
    size_t item_size = sizeof(ros_message.nr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output
  {
    size_t item_size = sizeof(ros_message.output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opendrain
  {
    size_t item_size = sizeof(ros_message.opendrain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pullup
  {
    size_t item_size = sizeof(ros_message.pullup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pulldown
  {
    size_t item_size = sizeof(ros_message.pulldown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
max_serialized_size_Gpio_Request(
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


  // Member: nr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: opendrain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pullup
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pulldown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Gpio_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const l3xz_openmv_camera_interfaces::srv::Gpio_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gpio_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<l3xz_openmv_camera_interfaces::srv::Gpio_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gpio_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const l3xz_openmv_camera_interfaces::srv::Gpio_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gpio_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Gpio_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Gpio_Request__callbacks = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio_Request",
  _Gpio_Request__cdr_serialize,
  _Gpio_Request__cdr_deserialize,
  _Gpio_Request__get_serialized_size,
  _Gpio_Request__max_serialized_size
};

static rosidl_message_type_support_t _Gpio_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpio_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_l3xz_openmv_camera_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<l3xz_openmv_camera_interfaces::srv::Gpio_Request>()
{
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, l3xz_openmv_camera_interfaces, srv, Gpio_Request)() {
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
cdr_serialize(
  const l3xz_openmv_camera_interfaces::srv::Gpio_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  l3xz_openmv_camera_interfaces::srv::Gpio_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
get_serialized_size(
  const l3xz_openmv_camera_interfaces::srv::Gpio_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_l3xz_openmv_camera_interfaces
max_serialized_size_Gpio_Response(
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


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Gpio_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const l3xz_openmv_camera_interfaces::srv::Gpio_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gpio_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<l3xz_openmv_camera_interfaces::srv::Gpio_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gpio_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const l3xz_openmv_camera_interfaces::srv::Gpio_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gpio_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Gpio_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Gpio_Response__callbacks = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio_Response",
  _Gpio_Response__cdr_serialize,
  _Gpio_Response__cdr_deserialize,
  _Gpio_Response__get_serialized_size,
  _Gpio_Response__max_serialized_size
};

static rosidl_message_type_support_t _Gpio_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpio_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_l3xz_openmv_camera_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<l3xz_openmv_camera_interfaces::srv::Gpio_Response>()
{
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, l3xz_openmv_camera_interfaces, srv, Gpio_Response)() {
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Gpio__callbacks = {
  "l3xz_openmv_camera_interfaces::srv",
  "Gpio",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, l3xz_openmv_camera_interfaces, srv, Gpio_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, l3xz_openmv_camera_interfaces, srv, Gpio_Response)(),
};

static rosidl_service_type_support_t _Gpio__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpio__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_l3xz_openmv_camera_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<l3xz_openmv_camera_interfaces::srv::Gpio>()
{
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, l3xz_openmv_camera_interfaces, srv, Gpio)() {
  return &l3xz_openmv_camera_interfaces::srv::typesupport_fastrtps_cpp::_Gpio__handle;
}

#ifdef __cplusplus
}
#endif
