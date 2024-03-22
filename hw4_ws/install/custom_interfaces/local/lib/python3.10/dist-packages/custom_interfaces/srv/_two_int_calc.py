# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/TwoIntCalc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TwoIntCalc_Request(type):
    """Metaclass of message 'TwoIntCalc_Request'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.TwoIntCalc_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__two_int_calc__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__two_int_calc__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__two_int_calc__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__two_int_calc__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__two_int_calc__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TwoIntCalc_Request(metaclass=Metaclass_TwoIntCalc_Request):
    """Message class 'TwoIntCalc_Request'."""

    __slots__ = [
        '_x',
        '_y',
        '_op',
        '_client_time',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'op': 'string',
        'client_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.op = kwargs.get('op', str())
        self.client_time = kwargs.get('client_time', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.op != other.op:
            return False
        if self.client_time != other.client_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def op(self):
        """Message field 'op'."""
        return self._op

    @op.setter
    def op(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'op' field must be of type 'str'"
        self._op = value

    @builtins.property
    def client_time(self):
        """Message field 'client_time'."""
        return self._client_time

    @client_time.setter
    def client_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'client_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'client_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._client_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_TwoIntCalc_Response(type):
    """Metaclass of message 'TwoIntCalc_Response'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.TwoIntCalc_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__two_int_calc__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__two_int_calc__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__two_int_calc__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__two_int_calc__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__two_int_calc__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TwoIntCalc_Response(metaclass=Metaclass_TwoIntCalc_Response):
    """Message class 'TwoIntCalc_Response'."""

    __slots__ = [
        '_server_time',
        '_result',
    ]

    _fields_and_field_types = {
        'server_time': 'double',
        'result': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.server_time = kwargs.get('server_time', float())
        self.result = kwargs.get('result', float())

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
        if self.server_time != other.server_time:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def server_time(self):
        """Message field 'server_time'."""
        return self._server_time

    @server_time.setter
    def server_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'server_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'server_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._server_time = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'result' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'result' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._result = value


class Metaclass_TwoIntCalc(type):
    """Metaclass of service 'TwoIntCalc'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.TwoIntCalc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__two_int_calc

            from custom_interfaces.srv import _two_int_calc
            if _two_int_calc.Metaclass_TwoIntCalc_Request._TYPE_SUPPORT is None:
                _two_int_calc.Metaclass_TwoIntCalc_Request.__import_type_support__()
            if _two_int_calc.Metaclass_TwoIntCalc_Response._TYPE_SUPPORT is None:
                _two_int_calc.Metaclass_TwoIntCalc_Response.__import_type_support__()


class TwoIntCalc(metaclass=Metaclass_TwoIntCalc):
    from custom_interfaces.srv._two_int_calc import TwoIntCalc_Request as Request
    from custom_interfaces.srv._two_int_calc import TwoIntCalc_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
