// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Rgb.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__BUILDER_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "l3xz_openmv_camera_interfaces/srv/detail/rgb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rgb_Request_b
{
public:
  explicit Init_Rgb_Request_b(::l3xz_openmv_camera_interfaces::srv::Rgb_Request & msg)
  : msg_(msg)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Request b(::l3xz_openmv_camera_interfaces::srv::Rgb_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Request msg_;
};

class Init_Rgb_Request_g
{
public:
  explicit Init_Rgb_Request_g(::l3xz_openmv_camera_interfaces::srv::Rgb_Request & msg)
  : msg_(msg)
  {}
  Init_Rgb_Request_b g(::l3xz_openmv_camera_interfaces::srv::Rgb_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Rgb_Request_b(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Request msg_;
};

class Init_Rgb_Request_r
{
public:
  Init_Rgb_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rgb_Request_g r(::l3xz_openmv_camera_interfaces::srv::Rgb_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Rgb_Request_g(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Rgb_Request>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Rgb_Request_r();
}

}  // namespace l3xz_openmv_camera_interfaces


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rgb_Response_success
{
public:
  Init_Rgb_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Response success(::l3xz_openmv_camera_interfaces::srv::Rgb_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Rgb_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Rgb_Response>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Rgb_Response_success();
}

}  // namespace l3xz_openmv_camera_interfaces

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__RGB__BUILDER_HPP_
