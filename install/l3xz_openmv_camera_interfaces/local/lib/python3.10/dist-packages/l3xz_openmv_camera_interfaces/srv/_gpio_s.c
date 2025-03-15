// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.h"
#include "l3xz_openmv_camera_interfaces/srv/detail/gpio__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool l3xz_openmv_camera_interfaces__srv__gpio__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("l3xz_openmv_camera_interfaces.srv._gpio.Gpio_Request", full_classname_dest, 52) == 0);
  }
  l3xz_openmv_camera_interfaces__srv__Gpio_Request * ros_message = _ros_message;
  {  // nr
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // output
    PyObject * field = PyObject_GetAttrString(_pymsg, "output");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->output = (Py_True == field);
    Py_DECREF(field);
  }
  {  // opendrain
    PyObject * field = PyObject_GetAttrString(_pymsg, "opendrain");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->opendrain = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pullup
    PyObject * field = PyObject_GetAttrString(_pymsg, "pullup");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pullup = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pulldown
    PyObject * field = PyObject_GetAttrString(_pymsg, "pulldown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pulldown = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * l3xz_openmv_camera_interfaces__srv__gpio__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpio_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("l3xz_openmv_camera_interfaces.srv._gpio");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpio_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  l3xz_openmv_camera_interfaces__srv__Gpio_Request * ros_message = (l3xz_openmv_camera_interfaces__srv__Gpio_Request *)raw_ros_message;
  {  // nr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->nr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->output ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opendrain
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->opendrain ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opendrain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pullup
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pullup ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pullup", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pulldown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pulldown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pulldown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/srv/detail/gpio__struct.h"
// already included above
// #include "l3xz_openmv_camera_interfaces/srv/detail/gpio__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool l3xz_openmv_camera_interfaces__srv__gpio__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("l3xz_openmv_camera_interfaces.srv._gpio.Gpio_Response", full_classname_dest, 53) == 0);
  }
  l3xz_openmv_camera_interfaces__srv__Gpio_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * l3xz_openmv_camera_interfaces__srv__gpio__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpio_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("l3xz_openmv_camera_interfaces.srv._gpio");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpio_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  l3xz_openmv_camera_interfaces__srv__Gpio_Response * ros_message = (l3xz_openmv_camera_interfaces__srv__Gpio_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
