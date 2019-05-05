// Generated by gencpp from file create_node/Drive.msg
// DO NOT EDIT!


#ifndef CREATE_NODE_MESSAGE_DRIVE_H
#define CREATE_NODE_MESSAGE_DRIVE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace create_node
{
template <class ContainerAllocator>
struct Drive_
{
  typedef Drive_<ContainerAllocator> Type;

  Drive_()
    : velocity(0.0)
    , radius(0.0)  {
    }
  Drive_(const ContainerAllocator& _alloc)
    : velocity(0.0)
    , radius(0.0)  {
  (void)_alloc;
    }



   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _radius_type;
  _radius_type radius;





  typedef boost::shared_ptr< ::create_node::Drive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::create_node::Drive_<ContainerAllocator> const> ConstPtr;

}; // struct Drive_

typedef ::create_node::Drive_<std::allocator<void> > Drive;

typedef boost::shared_ptr< ::create_node::Drive > DrivePtr;
typedef boost::shared_ptr< ::create_node::Drive const> DriveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::create_node::Drive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::create_node::Drive_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace create_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'create_node': ['/home/porter/gym-gazebo/gym_gazebo/envs/installation/catkin_ws/src/turtlebot_create/create_node/msg'], 'diagnostic_msgs': ['/opt/ros/kinetic/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::create_node::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::create_node::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::Drive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::Drive_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::create_node::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbd1637d308acca6b24c12a3db426e5e";
  }

  static const char* value(const ::create_node::Drive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbd1637d308acca6ULL;
  static const uint64_t static_value2 = 0xb24c12a3db426e5eULL;
};

template<class ContainerAllocator>
struct DataType< ::create_node::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "create_node/Drive";
  }

  static const char* value(const ::create_node::Drive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::create_node::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 velocity\n\
float32 radius\n\
";
  }

  static const char* value(const ::create_node::Drive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::create_node::Drive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.velocity);
      stream.next(m.radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Drive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::create_node::Drive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::create_node::Drive_<ContainerAllocator>& v)
  {
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "radius: ";
    Printer<float>::stream(s, indent + "  ", v.radius);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CREATE_NODE_MESSAGE_DRIVE_H
