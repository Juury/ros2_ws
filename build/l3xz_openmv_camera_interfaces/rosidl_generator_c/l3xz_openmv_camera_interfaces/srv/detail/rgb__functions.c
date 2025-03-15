// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from l3xz_openmv_camera_interfaces:srv/Rgb.idl
// generated code does not contain a copyright notice
#include "l3xz_openmv_camera_interfaces/srv/detail/rgb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__init(l3xz_openmv_camera_interfaces__srv__Rgb_Request * msg)
{
  if (!msg) {
    return false;
  }
  // r
  // g
  // b
  return true;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Request__fini(l3xz_openmv_camera_interfaces__srv__Rgb_Request * msg)
{
  if (!msg) {
    return;
  }
  // r
  // g
  // b
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__are_equal(const l3xz_openmv_camera_interfaces__srv__Rgb_Request * lhs, const l3xz_openmv_camera_interfaces__srv__Rgb_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__copy(
  const l3xz_openmv_camera_interfaces__srv__Rgb_Request * input,
  l3xz_openmv_camera_interfaces__srv__Rgb_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // r
  output->r = input->r;
  // g
  output->g = input->g;
  // b
  output->b = input->b;
  return true;
}

l3xz_openmv_camera_interfaces__srv__Rgb_Request *
l3xz_openmv_camera_interfaces__srv__Rgb_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Request * msg = (l3xz_openmv_camera_interfaces__srv__Rgb_Request *)allocator.allocate(sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Request));
  bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Request__destroy(l3xz_openmv_camera_interfaces__srv__Rgb_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    l3xz_openmv_camera_interfaces__srv__Rgb_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__init(l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Request * data = NULL;

  if (size) {
    data = (l3xz_openmv_camera_interfaces__srv__Rgb_Request *)allocator.zero_allocate(size, sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        l3xz_openmv_camera_interfaces__srv__Rgb_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__fini(l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      l3xz_openmv_camera_interfaces__srv__Rgb_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence *
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * array = (l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence *)allocator.allocate(sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__destroy(l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__are_equal(const l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * lhs, const l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!l3xz_openmv_camera_interfaces__srv__Rgb_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence__copy(
  const l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * input,
  l3xz_openmv_camera_interfaces__srv__Rgb_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    l3xz_openmv_camera_interfaces__srv__Rgb_Request * data =
      (l3xz_openmv_camera_interfaces__srv__Rgb_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!l3xz_openmv_camera_interfaces__srv__Rgb_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          l3xz_openmv_camera_interfaces__srv__Rgb_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!l3xz_openmv_camera_interfaces__srv__Rgb_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__init(l3xz_openmv_camera_interfaces__srv__Rgb_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Response__fini(l3xz_openmv_camera_interfaces__srv__Rgb_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__are_equal(const l3xz_openmv_camera_interfaces__srv__Rgb_Response * lhs, const l3xz_openmv_camera_interfaces__srv__Rgb_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__copy(
  const l3xz_openmv_camera_interfaces__srv__Rgb_Response * input,
  l3xz_openmv_camera_interfaces__srv__Rgb_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

l3xz_openmv_camera_interfaces__srv__Rgb_Response *
l3xz_openmv_camera_interfaces__srv__Rgb_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Response * msg = (l3xz_openmv_camera_interfaces__srv__Rgb_Response *)allocator.allocate(sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Response));
  bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Response__destroy(l3xz_openmv_camera_interfaces__srv__Rgb_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    l3xz_openmv_camera_interfaces__srv__Rgb_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__init(l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Response * data = NULL;

  if (size) {
    data = (l3xz_openmv_camera_interfaces__srv__Rgb_Response *)allocator.zero_allocate(size, sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        l3xz_openmv_camera_interfaces__srv__Rgb_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__fini(l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      l3xz_openmv_camera_interfaces__srv__Rgb_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence *
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * array = (l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence *)allocator.allocate(sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__destroy(l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__are_equal(const l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * lhs, const l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!l3xz_openmv_camera_interfaces__srv__Rgb_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence__copy(
  const l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * input,
  l3xz_openmv_camera_interfaces__srv__Rgb_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(l3xz_openmv_camera_interfaces__srv__Rgb_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    l3xz_openmv_camera_interfaces__srv__Rgb_Response * data =
      (l3xz_openmv_camera_interfaces__srv__Rgb_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!l3xz_openmv_camera_interfaces__srv__Rgb_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          l3xz_openmv_camera_interfaces__srv__Rgb_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!l3xz_openmv_camera_interfaces__srv__Rgb_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
