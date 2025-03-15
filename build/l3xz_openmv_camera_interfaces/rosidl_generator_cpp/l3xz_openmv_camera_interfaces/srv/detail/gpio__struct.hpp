// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__STRUCT_HPP_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Request __attribute__((deprecated))
#else
# define DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Request __declspec(deprecated)
#endif

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gpio_Request_
{
  using Type = Gpio_Request_<ContainerAllocator>;

  explicit Gpio_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr = 0;
      this->output = false;
      this->opendrain = false;
      this->pullup = false;
      this->pulldown = false;
    }
  }

  explicit Gpio_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr = 0;
      this->output = false;
      this->opendrain = false;
      this->pullup = false;
      this->pulldown = false;
    }
  }

  // field types and members
  using _nr_type =
    int8_t;
  _nr_type nr;
  using _output_type =
    bool;
  _output_type output;
  using _opendrain_type =
    bool;
  _opendrain_type opendrain;
  using _pullup_type =
    bool;
  _pullup_type pullup;
  using _pulldown_type =
    bool;
  _pulldown_type pulldown;

  // setters for named parameter idiom
  Type & set__nr(
    const int8_t & _arg)
  {
    this->nr = _arg;
    return *this;
  }
  Type & set__output(
    const bool & _arg)
  {
    this->output = _arg;
    return *this;
  }
  Type & set__opendrain(
    const bool & _arg)
  {
    this->opendrain = _arg;
    return *this;
  }
  Type & set__pullup(
    const bool & _arg)
  {
    this->pullup = _arg;
    return *this;
  }
  Type & set__pulldown(
    const bool & _arg)
  {
    this->pulldown = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Request
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Request
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpio_Request_ & other) const
  {
    if (this->nr != other.nr) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    if (this->opendrain != other.opendrain) {
      return false;
    }
    if (this->pullup != other.pullup) {
      return false;
    }
    if (this->pulldown != other.pulldown) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpio_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpio_Request_

// alias to use template instance with default allocator
using Gpio_Request =
  l3xz_openmv_camera_interfaces::srv::Gpio_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces


#ifndef _WIN32
# define DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Response __attribute__((deprecated))
#else
# define DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Response __declspec(deprecated)
#endif

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gpio_Response_
{
  using Type = Gpio_Response_<ContainerAllocator>;

  explicit Gpio_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Gpio_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Response
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__l3xz_openmv_camera_interfaces__srv__Gpio_Response
    std::shared_ptr<l3xz_openmv_camera_interfaces::srv::Gpio_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpio_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpio_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpio_Response_

// alias to use template instance with default allocator
using Gpio_Response =
  l3xz_openmv_camera_interfaces::srv::Gpio_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

namespace l3xz_openmv_camera_interfaces
{

namespace srv
{

struct Gpio
{
  using Request = l3xz_openmv_camera_interfaces::srv::Gpio_Request;
  using Response = l3xz_openmv_camera_interfaces::srv::Gpio_Response;
};

}  // namespace srv

}  // namespace l3xz_openmv_camera_interfaces

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO__STRUCT_HPP_
