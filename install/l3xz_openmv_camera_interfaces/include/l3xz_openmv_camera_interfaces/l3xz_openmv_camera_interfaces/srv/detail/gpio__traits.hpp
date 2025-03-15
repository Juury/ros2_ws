// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__TRAITS_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gpio_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: nr
  {
    out << "nr: ";
    rosidl_generator_traits::value_to_yaml(msg.nr, out);
    out << ", ";
  }

  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << ", ";
  }

  // member: opendrain
  {
    out << "opendrain: ";
    rosidl_generator_traits::value_to_yaml(msg.opendrain, out);
    out << ", ";
  }

  // member: pullup
  {
    out << "pullup: ";
    rosidl_generator_traits::value_to_yaml(msg.pullup, out);
    out << ", ";
  }

  // member: pulldown
  {
    out << "pulldown: ";
    rosidl_generator_traits::value_to_yaml(msg.pulldown, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpio_Request & msg,
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

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }

  // member: opendrain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opendrain: ";
    rosidl_generator_traits::value_to_yaml(msg.opendrain, out);
    out << "\n";
  }

  // member: pullup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pullup: ";
    rosidl_generator_traits::value_to_yaml(msg.pullup, out);
    out << "\n";
  }

  // member: pulldown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pulldown: ";
    rosidl_generator_traits::value_to_yaml(msg.pulldown, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpio_Request & msg, bool use_flow_style = false)
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
  const l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Gpio_Request>()
{
  return "l3xz_openmv_camera_interfaces::srv::Gpio_Request";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Gpio_Request>()
{
  return "l3xz_openmv_camera_interfaces/srv/Gpio_Request";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Gpio_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Gpio_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::Gpio_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gpio_Response & msg,
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
  const Gpio_Response & msg,
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

inline std::string to_yaml(const Gpio_Response & msg, bool use_flow_style = false)
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
  const l3xz_openmv_camera_interfaces::srv::Gpio_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::Gpio_Response & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Gpio_Response>()
{
  return "l3xz_openmv_camera_interfaces::srv::Gpio_Response";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Gpio_Response>()
{
  return "l3xz_openmv_camera_interfaces/srv/Gpio_Response";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Gpio_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Gpio_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::Gpio_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Gpio>()
{
  return "l3xz_openmv_camera_interfaces::srv::Gpio";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Gpio>()
{
  return "l3xz_openmv_camera_interfaces/srv/Gpio";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Gpio>
  : std::integral_constant<
    bool,
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::Gpio_Request>::value &&
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::Gpio_Response>::value
  >
{
};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Gpio>
  : std::integral_constant<
    bool,
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::Gpio_Request>::value &&
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::Gpio_Response>::value
  >
{
};

template<>
struct is_service<l3xz_openmv_camera_interfaces::srv::Gpio>
  : std::true_type
{
};

template<>
struct is_service_request<l3xz_openmv_camera_interfaces::srv::Gpio_Request>
  : std::true_type
{
};

template<>
struct is_service_response<l3xz_openmv_camera_interfaces::srv::Gpio_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__TRAITS_HPP_
