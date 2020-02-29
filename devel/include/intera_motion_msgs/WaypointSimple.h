// Generated by gencpp from file intera_motion_msgs/WaypointSimple.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_WAYPOINTSIMPLE_H
#define INTERA_MOTION_MSGS_MESSAGE_WAYPOINTSIMPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace intera_motion_msgs
{
template <class ContainerAllocator>
struct WaypointSimple_
{
  typedef WaypointSimple_<ContainerAllocator> Type;

  WaypointSimple_()
    : joint_positions()
    , active_endpoint()
    , pose()
    , segment_index(0)
    , time(0.0)  {
    }
  WaypointSimple_(const ContainerAllocator& _alloc)
    : joint_positions(_alloc)
    , active_endpoint(_alloc)
    , pose(_alloc)
    , segment_index(0)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _joint_positions_type;
  _joint_positions_type joint_positions;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _active_endpoint_type;
  _active_endpoint_type active_endpoint;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef int32_t _segment_index_type;
  _segment_index_type segment_index;

   typedef double _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointSimple_

typedef ::intera_motion_msgs::WaypointSimple_<std::allocator<void> > WaypointSimple;

typedef boost::shared_ptr< ::intera_motion_msgs::WaypointSimple > WaypointSimplePtr;
typedef boost::shared_ptr< ::intera_motion_msgs::WaypointSimple const> WaypointSimpleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_motion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/michele/catkinect/src/intera_common/intera_core_msgs/msg', '/home/michele/catkinect/devel/share/intera_core_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'intera_motion_msgs': ['/home/michele/catkinect/src/intera_common/intera_motion_msgs/msg', '/home/michele/catkinect/devel/share/intera_motion_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f29bcd94cca5f378ef52eb965645d7ce";
  }

  static const char* value(const ::intera_motion_msgs::WaypointSimple_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf29bcd94cca5f378ULL;
  static const uint64_t static_value2 = 0xef52eb965645d7ceULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/WaypointSimple";
  }

  static const char* value(const ::intera_motion_msgs::WaypointSimple_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Representation of a waypoint returned during path interpolation\n\
# Does not include extra options\n\
\n\
# Desired joint positions\n\
float64[] joint_positions\n\
\n\
# Name of the endpoint that is currently active\n\
string active_endpoint\n\
\n\
# Cartesian pose\n\
geometry_msgs/Pose pose\n\
\n\
int32 segment_index\n\
float64 time\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::intera_motion_msgs::WaypointSimple_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_positions);
      stream.next(m.active_endpoint);
      stream.next(m.pose);
      stream.next(m.segment_index);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointSimple_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::WaypointSimple_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::WaypointSimple_<ContainerAllocator>& v)
  {
    s << indent << "joint_positions[]" << std::endl;
    for (size_t i = 0; i < v.joint_positions.size(); ++i)
    {
      s << indent << "  joint_positions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_positions[i]);
    }
    s << indent << "active_endpoint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.active_endpoint);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "segment_index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.segment_index);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_WAYPOINTSIMPLE_H
