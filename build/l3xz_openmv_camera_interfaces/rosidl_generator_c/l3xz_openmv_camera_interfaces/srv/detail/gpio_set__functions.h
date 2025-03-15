// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from l3xz_openmv_camera_interfaces:srv/GpioSet.idl
// generated code does not contain a copyright notice

#ifndef L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__FUNCTIONS_H_
#define L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "l3xz_openmv_camera_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "l3xz_openmv_camera_interfaces/srv/detail/gpio_set__struct.h"

/// Initialize srv/GpioSet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request
 * )) before or use
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__init(l3xz_openmv_camera_interfaces__srv__GpioSet_Request * msg);

/// Finalize srv/GpioSet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__fini(l3xz_openmv_camera_interfaces__srv__GpioSet_Request * msg);

/// Create srv/GpioSet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
l3xz_openmv_camera_interfaces__srv__GpioSet_Request *
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__create();

/// Destroy srv/GpioSet message.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__destroy(l3xz_openmv_camera_interfaces__srv__GpioSet_Request * msg);

/// Check for srv/GpioSet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__are_equal(const l3xz_openmv_camera_interfaces__srv__GpioSet_Request * lhs, const l3xz_openmv_camera_interfaces__srv__GpioSet_Request * rhs);

/// Copy a srv/GpioSet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__copy(
  const l3xz_openmv_camera_interfaces__srv__GpioSet_Request * input,
  l3xz_openmv_camera_interfaces__srv__GpioSet_Request * output);

/// Initialize array of srv/GpioSet messages.
/**
 * It allocates the memory for the number of elements and calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__init(l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * array, size_t size);

/// Finalize array of srv/GpioSet messages.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__fini(l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * array);

/// Create array of srv/GpioSet messages.
/**
 * It allocates the memory for the array and calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence *
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__create(size_t size);

/// Destroy array of srv/GpioSet messages.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__destroy(l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * array);

/// Check for srv/GpioSet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__are_equal(const l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * lhs, const l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * rhs);

/// Copy an array of srv/GpioSet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence__copy(
  const l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * input,
  l3xz_openmv_camera_interfaces__srv__GpioSet_Request__Sequence * output);

/// Initialize srv/GpioSet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response
 * )) before or use
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__init(l3xz_openmv_camera_interfaces__srv__GpioSet_Response * msg);

/// Finalize srv/GpioSet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__fini(l3xz_openmv_camera_interfaces__srv__GpioSet_Response * msg);

/// Create srv/GpioSet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
l3xz_openmv_camera_interfaces__srv__GpioSet_Response *
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__create();

/// Destroy srv/GpioSet message.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__destroy(l3xz_openmv_camera_interfaces__srv__GpioSet_Response * msg);

/// Check for srv/GpioSet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__are_equal(const l3xz_openmv_camera_interfaces__srv__GpioSet_Response * lhs, const l3xz_openmv_camera_interfaces__srv__GpioSet_Response * rhs);

/// Copy a srv/GpioSet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__copy(
  const l3xz_openmv_camera_interfaces__srv__GpioSet_Response * input,
  l3xz_openmv_camera_interfaces__srv__GpioSet_Response * output);

/// Initialize array of srv/GpioSet messages.
/**
 * It allocates the memory for the number of elements and calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__init(l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * array, size_t size);

/// Finalize array of srv/GpioSet messages.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__fini(l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * array);

/// Create array of srv/GpioSet messages.
/**
 * It allocates the memory for the array and calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence *
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__create(size_t size);

/// Destroy array of srv/GpioSet messages.
/**
 * It calls
 * l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
void
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__destroy(l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * array);

/// Check for srv/GpioSet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__are_equal(const l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * lhs, const l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * rhs);

/// Copy an array of srv/GpioSet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_l3xz_openmv_camera_interfaces
bool
l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence__copy(
  const l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * input,
  l3xz_openmv_camera_interfaces__srv__GpioSet_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // L3XZ_OPENMV_CAMERA_INTERFACES__SRV__DETAIL__GPIO_SET__FUNCTIONS_H_
