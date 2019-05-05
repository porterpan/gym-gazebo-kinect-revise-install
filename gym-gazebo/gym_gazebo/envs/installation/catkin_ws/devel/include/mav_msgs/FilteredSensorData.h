// Generated by gencpp from file mav_msgs/FilteredSensorData.msg
// DO NOT EDIT!


#ifndef MAV_MSGS_MESSAGE_FILTEREDSENSORDATA_H
#define MAV_MSGS_MESSAGE_FILTEREDSENSORDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace mav_msgs
{
template <class ContainerAllocator>
struct FilteredSensorData_
{
  typedef FilteredSensorData_<ContainerAllocator> Type;

  FilteredSensorData_()
    : header()
    , accelerometer()
    , gyroscope()
    , magnetometer()
    , barometer(0.0)  {
    }
  FilteredSensorData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , accelerometer(_alloc)
    , gyroscope(_alloc)
    , magnetometer(_alloc)
    , barometer(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _accelerometer_type;
  _accelerometer_type accelerometer;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroscope_type;
  _gyroscope_type gyroscope;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _magnetometer_type;
  _magnetometer_type magnetometer;

   typedef double _barometer_type;
  _barometer_type barometer;





  typedef boost::shared_ptr< ::mav_msgs::FilteredSensorData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mav_msgs::FilteredSensorData_<ContainerAllocator> const> ConstPtr;

}; // struct FilteredSensorData_

typedef ::mav_msgs::FilteredSensorData_<std::allocator<void> > FilteredSensorData;

typedef boost::shared_ptr< ::mav_msgs::FilteredSensorData > FilteredSensorDataPtr;
typedef boost::shared_ptr< ::mav_msgs::FilteredSensorData const> FilteredSensorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mav_msgs::FilteredSensorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mav_msgs': ['/home/porter/gym-gazebo/gym_gazebo/envs/installation/catkin_ws/src/mav_comm/mav_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::FilteredSensorData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::FilteredSensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::FilteredSensorData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9b51fae1f4ed3a8a0522b4ffe61659f";
  }

  static const char* value(const ::mav_msgs::FilteredSensorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9b51fae1f4ed3a8ULL;
  static const uint64_t static_value2 = 0xa0522b4ffe61659fULL;
};

template<class ContainerAllocator>
struct DataType< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mav_msgs/FilteredSensorData";
  }

  static const char* value(const ::mav_msgs::FilteredSensorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
geometry_msgs/Vector3 accelerometer	# acceleration in vehicle frame [m/s^2]\n\
geometry_msgs/Vector3 gyroscope     # rotational velocity in vehicle frame [rad/s]\n\
geometry_msgs/Vector3 magnetometer  # Magnetometer measurements in vehicle frame [uT]\n\
float64 barometer                   # Height from barometer relative to start-up point [m]\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::mav_msgs::FilteredSensorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.accelerometer);
      stream.next(m.gyroscope);
      stream.next(m.magnetometer);
      stream.next(m.barometer);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FilteredSensorData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mav_msgs::FilteredSensorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mav_msgs::FilteredSensorData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "accelerometer: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.accelerometer);
    s << indent << "gyroscope: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroscope);
    s << indent << "magnetometer: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.magnetometer);
    s << indent << "barometer: ";
    Printer<double>::stream(s, indent + "  ", v.barometer);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAV_MSGS_MESSAGE_FILTEREDSENSORDATA_H
