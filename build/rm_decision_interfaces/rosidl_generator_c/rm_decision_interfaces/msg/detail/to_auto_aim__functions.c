// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_decision_interfaces:msg/ToAutoAim.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/to_auto_aim__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_decision_interfaces__msg__ToAutoAim__init(rm_decision_interfaces__msg__ToAutoAim * msg)
{
  if (!msg) {
    return false;
  }
  // target
  return true;
}

void
rm_decision_interfaces__msg__ToAutoAim__fini(rm_decision_interfaces__msg__ToAutoAim * msg)
{
  if (!msg) {
    return;
  }
  // target
}

bool
rm_decision_interfaces__msg__ToAutoAim__are_equal(const rm_decision_interfaces__msg__ToAutoAim * lhs, const rm_decision_interfaces__msg__ToAutoAim * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  return true;
}

bool
rm_decision_interfaces__msg__ToAutoAim__copy(
  const rm_decision_interfaces__msg__ToAutoAim * input,
  rm_decision_interfaces__msg__ToAutoAim * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  output->target = input->target;
  return true;
}

rm_decision_interfaces__msg__ToAutoAim *
rm_decision_interfaces__msg__ToAutoAim__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ToAutoAim * msg = (rm_decision_interfaces__msg__ToAutoAim *)allocator.allocate(sizeof(rm_decision_interfaces__msg__ToAutoAim), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_decision_interfaces__msg__ToAutoAim));
  bool success = rm_decision_interfaces__msg__ToAutoAim__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_decision_interfaces__msg__ToAutoAim__destroy(rm_decision_interfaces__msg__ToAutoAim * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_decision_interfaces__msg__ToAutoAim__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__init(rm_decision_interfaces__msg__ToAutoAim__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ToAutoAim * data = NULL;

  if (size) {
    data = (rm_decision_interfaces__msg__ToAutoAim *)allocator.zero_allocate(size, sizeof(rm_decision_interfaces__msg__ToAutoAim), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_decision_interfaces__msg__ToAutoAim__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_decision_interfaces__msg__ToAutoAim__fini(&data[i - 1]);
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
rm_decision_interfaces__msg__ToAutoAim__Sequence__fini(rm_decision_interfaces__msg__ToAutoAim__Sequence * array)
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
      rm_decision_interfaces__msg__ToAutoAim__fini(&array->data[i]);
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

rm_decision_interfaces__msg__ToAutoAim__Sequence *
rm_decision_interfaces__msg__ToAutoAim__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ToAutoAim__Sequence * array = (rm_decision_interfaces__msg__ToAutoAim__Sequence *)allocator.allocate(sizeof(rm_decision_interfaces__msg__ToAutoAim__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_decision_interfaces__msg__ToAutoAim__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_decision_interfaces__msg__ToAutoAim__Sequence__destroy(rm_decision_interfaces__msg__ToAutoAim__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_decision_interfaces__msg__ToAutoAim__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__are_equal(const rm_decision_interfaces__msg__ToAutoAim__Sequence * lhs, const rm_decision_interfaces__msg__ToAutoAim__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_decision_interfaces__msg__ToAutoAim__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__copy(
  const rm_decision_interfaces__msg__ToAutoAim__Sequence * input,
  rm_decision_interfaces__msg__ToAutoAim__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_decision_interfaces__msg__ToAutoAim);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_decision_interfaces__msg__ToAutoAim * data =
      (rm_decision_interfaces__msg__ToAutoAim *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_decision_interfaces__msg__ToAutoAim__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_decision_interfaces__msg__ToAutoAim__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_decision_interfaces__msg__ToAutoAim__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
