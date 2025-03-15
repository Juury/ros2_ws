// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__BUILDER_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gpio_Request_pulldown
{
public:
  explicit Init_Gpio_Request_pulldown(::l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg)
  : msg_(msg)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request pulldown(::l3xz_openmv_camera_interfaces::srv::Gpio_Request::_pulldown_type arg)
  {
    msg_.pulldown = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request msg_;
};

class Init_Gpio_Request_pullup
{
public:
  explicit Init_Gpio_Request_pullup(::l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg)
  : msg_(msg)
  {}
  Init_Gpio_Request_pulldown pullup(::l3xz_openmv_camera_interfaces::srv::Gpio_Request::_pullup_type arg)
  {
    msg_.pullup = std::move(arg);
    return Init_Gpio_Request_pulldown(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request msg_;
};

class Init_Gpio_Request_opendrain
{
public:
  explicit Init_Gpio_Request_opendrain(::l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg)
  : msg_(msg)
  {}
  Init_Gpio_Request_pullup opendrain(::l3xz_openmv_camera_interfaces::srv::Gpio_Request::_opendrain_type arg)
  {
    msg_.opendrain = std::move(arg);
    return Init_Gpio_Request_pullup(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request msg_;
};

class Init_Gpio_Request_output
{
public:
  explicit Init_Gpio_Request_output(::l3xz_openmv_camera_interfaces::srv::Gpio_Request & msg)
  : msg_(msg)
  {}
  Init_Gpio_Request_opendrain output(::l3xz_openmv_camera_interfaces::srv::Gpio_Request::_output_type arg)
  {
    msg_.output = std::move(arg);
    return Init_Gpio_Request_opendrain(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request msg_;
};

class Init_Gpio_Request_nr
{
public:
  Init_Gpio_Request_nr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpio_Request_output nr(::l3xz_openmv_camera_interfaces::srv::Gpio_Request::_nr_type arg)
  {
    msg_.nr = std::move(arg);
    return Init_Gpio_Request_output(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Gpio_Request>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Gpio_Request_nr();
}

}  // namespace l3xz_openmv_camera_interfaces


namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gpio_Response_success
{
public:
  Init_Gpio_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Response success(::l3xz_openmv_camera_interfaces::srv::Gpio_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::l3xz_openmv_camera_interfaces::srv::Gpio_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::l3xz_openmv_camera_interfaces::srv::Gpio_Response>()
{
  return l3xz_openmv_camera_interfaces::srv::builder::Init_Gpio_Response_success();
}

}  // namespace l3xz_openmv_camera_interfaces

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__BUILDER_HPP_
