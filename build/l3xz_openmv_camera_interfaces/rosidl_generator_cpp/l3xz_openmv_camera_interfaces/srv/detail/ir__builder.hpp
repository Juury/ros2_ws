// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Ir.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__IR__BUILDER_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__IR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "l3xz_openmv_camera_interfaces/srv/detail/ir__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Ir_Request_on
{
public:
  Init_Ir_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Ir_Request on(::l3xz_openmv_camera_interfaces::srv::Ir_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Ir_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Ir_Request>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Ir_Request_on();
}

}  // namespace l3xz_openmv_camera_interfaces


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Ir_Response_success
{
public:
  Init_Ir_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Ir_Response success(::l3xz_openmv_camera_interfaces::srv::Ir_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Ir_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Ir_Response>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Ir_Response_success();
}

}  // namespace l3xz_openmv_camera_interfaces

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__IR__BUILDER_HPP_
