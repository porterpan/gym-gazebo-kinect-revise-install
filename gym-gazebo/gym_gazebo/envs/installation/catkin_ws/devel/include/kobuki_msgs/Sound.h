// Generated by gencpp from file kobuki_msgs/Sound.msg
// DO NOT EDIT!


#ifndef KOBUKI_MSGS_MESSAGE_SOUND_H
#define KOBUKI_MSGS_MESSAGE_SOUND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kobuki_msgs
{
template <class ContainerAllocator>
struct Sound_
{
  typedef Sound_<ContainerAllocator> Type;

  Sound_()
    : value(0)  {
    }
  Sound_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;



  enum {
    ON = 0u,
    OFF = 1u,
    RECHARGE = 2u,
    BUTTON = 3u,
    ERROR = 4u,
    CLEANINGSTART = 5u,
    CLEANINGEND = 6u,
  };


  typedef boost::shared_ptr< ::kobuki_msgs::Sound_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kobuki_msgs::Sound_<ContainerAllocator> const> ConstPtr;

}; // struct Sound_

typedef ::kobuki_msgs::Sound_<std::allocator<void> > Sound;

typedef boost::shared_ptr< ::kobuki_msgs::Sound > SoundPtr;
typedef boost::shared_ptr< ::kobuki_msgs::Sound const> SoundConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kobuki_msgs::Sound_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kobuki_msgs::Sound_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kobuki_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'kobuki_msgs': ['/home/porter/gym-gazebo/gym_gazebo/envs/installation/catkin_ws/src/kobuki_msgs/msg', '/home/porter/gym-gazebo/gym_gazebo/envs/installation/catkin_ws/devel/share/kobuki_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::Sound_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::Sound_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::Sound_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::Sound_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::Sound_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::Sound_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kobuki_msgs::Sound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfeab0daae67749c426c1db741a4f420";
  }

  static const char* value(const ::kobuki_msgs::Sound_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdfeab0daae67749cULL;
  static const uint64_t static_value2 = 0x426c1db741a4f420ULL;
};

template<class ContainerAllocator>
struct DataType< ::kobuki_msgs::Sound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kobuki_msgs/Sound";
  }

  static const char* value(const ::kobuki_msgs::Sound_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kobuki_msgs::Sound_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sends a command for playing sounds.\n\
# The available sound sequences:\n\
# 0 - turn on\n\
# 1 - turn off\n\
# 2 - recharge start\n\
# 3 - press button,\n\
# 4 - error sound\n\
# 5 - start cleaning\n\
# 6 - cleaning end\n\
\n\
uint8 ON            = 0\n\
uint8 OFF           = 1\n\
uint8 RECHARGE      = 2\n\
uint8 BUTTON        = 3\n\
uint8 ERROR         = 4\n\
uint8 CLEANINGSTART = 5\n\
uint8 CLEANINGEND   = 6\n\
\n\
uint8 value\n\
";
  }

  static const char* value(const ::kobuki_msgs::Sound_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kobuki_msgs::Sound_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Sound_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kobuki_msgs::Sound_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kobuki_msgs::Sound_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOBUKI_MSGS_MESSAGE_SOUND_H
