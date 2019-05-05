// Generated by gencpp from file driver_base/ConfigString.msg
// DO NOT EDIT!


#ifndef DRIVER_BASE_MESSAGE_CONFIGSTRING_H
#define DRIVER_BASE_MESSAGE_CONFIGSTRING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace driver_base
{
template <class ContainerAllocator>
struct ConfigString_
{
  typedef ConfigString_<ContainerAllocator> Type;

  ConfigString_()
    : name()
    , value()  {
    }
  ConfigString_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::driver_base::ConfigString_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::driver_base::ConfigString_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigString_

typedef ::driver_base::ConfigString_<std::allocator<void> > ConfigString;

typedef boost::shared_ptr< ::driver_base::ConfigString > ConfigStringPtr;
typedef boost::shared_ptr< ::driver_base::ConfigString const> ConfigStringConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::driver_base::ConfigString_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::driver_base::ConfigString_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace driver_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'driver_base': ['/home/porter/gym-gazebo/gym_gazebo/envs/installation/catkin_ws/src/driver_base/driver_base/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::driver_base::ConfigString_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::driver_base::ConfigString_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_base::ConfigString_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_base::ConfigString_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_base::ConfigString_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_base::ConfigString_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::driver_base::ConfigString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc6ccc4a57f61779c8eaae61e9f422e0";
  }

  static const char* value(const ::driver_base::ConfigString_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc6ccc4a57f61779ULL;
  static const uint64_t static_value2 = 0xc8eaae61e9f422e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::driver_base::ConfigString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "driver_base/ConfigString";
  }

  static const char* value(const ::driver_base::ConfigString_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::driver_base::ConfigString_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
string value\n\
";
  }

  static const char* value(const ::driver_base::ConfigString_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::driver_base::ConfigString_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigString_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::driver_base::ConfigString_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::driver_base::ConfigString_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVER_BASE_MESSAGE_CONFIGSTRING_H
