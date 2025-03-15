// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/GpioSet.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__BUILDER_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "l3xz_openmv_camera_interfaces/srv/detail/gpio_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GpioSet_Request_on
{
public:
  explicit Init_GpioSet_Request_on(::l3xz_openmv_camera_interfaces::srv::GpioSet_Request & msg)
  : msg_(msg)
  {}
  ::l3xz_openmv_camera_interfaces::srv::GpioSet_Request on(::l3xz_openmv_camera_interfaces::srv::GpioSet_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::GpioSet_Request msg_;
};

class Init_GpioSet_Request_nr
{
public:
  Init_GpioSet_Request_nr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioSet_Request_on nr(::l3xz_openmv_camera_interfaces::srv::GpioSet_Request::_nr_type arg)
  {
    msg_.nr = std::move(arg);
    return Init_GpioSet_Request_on(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::GpioSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::GpioSet_Request>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_GpioSet_Request_nr();
}

}  // namespace l3xz_openmv_camera_interfaces


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_GpioSet_Response_success
{
public:
  Init_GpioSet_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::l3xz_openmv_camera_interfaces::srv::GpioSet_Response success(::l3xz_openmv_camera_interfaces::srv::GpioSet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::GpioSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::GpioSet_Response>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_GpioSet_Response_success();
}

}  // namespace l3xz_openmv_camera_interfaces

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__BUILDER_HPP_
