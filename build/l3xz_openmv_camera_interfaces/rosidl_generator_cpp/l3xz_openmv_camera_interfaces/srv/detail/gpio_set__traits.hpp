// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/GpioSet.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__TRAITS_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "l3xz_openmv_camera_interfaces/srv/detail/gpio_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GpioSet_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: nr
  {
    out << "nr: ";
    rosidl_generator_traits::value_to_yaml(msg.nr, out);
    out << ", ";
  }

  // member: on
  {
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr: ";
    rosidl_generator_traits::value_to_yaml(msg.nr, out);
    out << "\n";
  }

  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioSet_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const l3xz_openmv_camera_interfaces::srv::GpioSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::GpioSet_Request & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>()
{
  return "l3xz_openmv_camera_interfaces::srv::GpioSet_Request";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>()
{
  return "l3xz_openmv_camera_interfaces/srv/GpioSet_Request";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GpioSet_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioSet_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const l3xz_openmv_camera_interfaces::srv::GpioSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::GpioSet_Response & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>()
{
  return "l3xz_openmv_camera_interfaces::srv::GpioSet_Response";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>()
{
  return "l3xz_openmv_camera_interfaces/srv/GpioSet_Response";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::GpioSet>()
{
  return "l3xz_openmv_camera_interfaces::srv::GpioSet";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::GpioSet>()
{
  return "l3xz_openmv_camera_interfaces/srv/GpioSet";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::GpioSet>
  : std::integral_constant<
    bool,
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>::value &&
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::GpioSet>
  : std::integral_constant<
    bool,
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>::value &&
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>::value
  >
{
};

template<>
struct is_service<l3xz_openmv_camera_interfaces::srv::GpioSet>
  : std::true_type
{
};

template<>
struct is_service_request<l3xz_openmv_camera_interfaces::srv::GpioSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<l3xz_openmv_camera_interfaces::srv::GpioSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__TRAITS_HPP_
