// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Rgb.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__TRAITS_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "l3xz_openmv_camera_interfaces/srv/detail/rgb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rgb_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rgb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rgb_Request & msg, bool use_flow_style = false)
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
  const l3xz_openmv_camera_interfaces::srv::Rgb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::Rgb_Request & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Rgb_Request>()
{
  return "l3xz_openmv_camera_interfaces::srv::Rgb_Request";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Rgb_Request>()
{
  return "l3xz_openmv_camera_interfaces/srv/Rgb_Request";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Rgb_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Rgb_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::Rgb_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rgb_Response & msg,
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
  const Rgb_Response & msg,
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

inline std::string to_yaml(const Rgb_Response & msg, bool use_flow_style = false)
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
  const l3xz_openmv_camera_interfaces::srv::Rgb_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  l3xz_openmv_camera_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use l3xz_openmv_camera_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const l3xz_openmv_camera_interfaces::srv::Rgb_Response & msg)
{
  return l3xz_openmv_camera_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Rgb_Response>()
{
  return "l3xz_openmv_camera_interfaces::srv::Rgb_Response";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Rgb_Response>()
{
  return "l3xz_openmv_camera_interfaces/srv/Rgb_Response";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Rgb_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Rgb_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<l3xz_openmv_camera_interfaces::srv::Rgb_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<l3xz_openmv_camera_interfaces::srv::Rgb>()
{
  return "l3xz_openmv_camera_interfaces::srv::Rgb";
}

template<>
inline const char * name<l3xz_openmv_camera_interfaces::srv::Rgb>()
{
  return "l3xz_openmv_camera_interfaces/srv/Rgb";
}

template<>
struct has_fixed_size<l3xz_openmv_camera_interfaces::srv::Rgb>
  : std::integral_constant<
    bool,
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::Rgb_Request>::value &&
    has_fixed_size<l3xz_openmv_camera_interfaces::srv::Rgb_Response>::value
  >
{
};

template<>
struct has_bounded_size<l3xz_openmv_camera_interfaces::srv::Rgb>
  : std::integral_constant<
    bool,
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::Rgb_Request>::value &&
    has_bounded_size<l3xz_openmv_camera_interfaces::srv::Rgb_Response>::value
  >
{
};

template<>
struct is_service<l3xz_openmv_camera_interfaces::srv::Rgb>
  : std::true_type
{
};

template<>
struct is_service_request<l3xz_openmv_camera_interfaces::srv::Rgb_Request>
  : std::true_type
{
};

template<>
struct is_service_response<l3xz_openmv_camera_interfaces::srv::Rgb_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__TRAITS_HPP_
