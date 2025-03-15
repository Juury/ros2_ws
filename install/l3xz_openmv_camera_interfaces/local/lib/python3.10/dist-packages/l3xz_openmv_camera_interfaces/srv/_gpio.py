# generated from rosidl_generator_py/resource/_idl.py.em
# with input from l3xz_openmv_camera_interfaces:srv/Gpio.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpio_Request(type):
    """Metaclass of message 'Gpio_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('l3xz_openmv_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'l3xz_openmv_camera_interfaces.srv.Gpio_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gpio_Request(metaclass=Metaclass_Gpio_Request):
    """Message class 'Gpio_Request'."""

    __slots__ = [
        '_nr',
        '_output',
        '_opendrain',
        '_pullup',
        '_pulldown',
    ]

    _fields_and_field_types = {
        'nr': 'int8',
        'output': 'boolean',
        'opendrain': 'boolean',
        'pullup': 'boolean',
        'pulldown': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nr = kwargs.get('nr', int())
        self.output = kwargs.get('output', bool())
        self.opendrain = kwargs.get('opendrain', bool())
        self.pullup = kwargs.get('pullup', bool())
        self.pulldown = kwargs.get('pulldown', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.nr != other.nr:
            return False
        if self.output != other.output:
            return False
        if self.opendrain != other.opendrain:
            return False
        if self.pullup != other.pullup:
            return False
        if self.pulldown != other.pulldown:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nr(self):
        """Message field 'nr'."""
        return self._nr

    @nr.setter
    def nr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nr' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'nr' field must be an integer in [-128, 127]"
        self._nr = value

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'output' field must be of type 'bool'"
        self._output = value

    @builtins.property
    def opendrain(self):
        """Message field 'opendrain'."""
        return self._opendrain

    @opendrain.setter
    def opendrain(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'opendrain' field must be of type 'bool'"
        self._opendrain = value

    @builtins.property
    def pullup(self):
        """Message field 'pullup'."""
        return self._pullup

    @pullup.setter
    def pullup(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pullup' field must be of type 'bool'"
        self._pullup = value

    @builtins.property
    def pulldown(self):
        """Message field 'pulldown'."""
        return self._pulldown

    @pulldown.setter
    def pulldown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pulldown' field must be of type 'bool'"
        self._pulldown = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Gpio_Response(type):
    """Metaclass of message 'Gpio_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('l3xz_openmv_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'l3xz_openmv_camera_interfaces.srv.Gpio_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gpio_Response(metaclass=Metaclass_Gpio_Response):
    """Message class 'Gpio_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_Gpio(type):
    """Metaclass of service 'Gpio'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('l3xz_openmv_camera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'l3xz_openmv_camera_interfaces.srv.Gpio')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gpio

            from l3xz_openmv_camera_interfaces.srv import _gpio
            if _gpio.Metaclass_Gpio_Request._TYPE_SUPPORT is None:
                _gpio.Metaclass_Gpio_Request.__import_type_support__()
            if _gpio.Metaclass_Gpio_Response._TYPE_SUPPORT is None:
                _gpio.Metaclass_Gpio_Response.__import_type_support__()


class Gpio(metaclass=Metaclass_Gpio):
    from l3xz_openmv_camera_interfaces.srv._gpio import Gpio_Request as Request
    from l3xz_openmv_camera_interfaces.srv._gpio import Gpio_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
