// Generated by gencpp from file intera_core_msgs/SolvePositionIKResponse.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H
#define INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct SolvePositionIKResponse_
{
  typedef SolvePositionIKResponse_<ContainerAllocator> Type;

  SolvePositionIKResponse_()
    : joints()
    , result_type()  {
    }
  SolvePositionIKResponse_(const ContainerAllocator& _alloc)
    : joints(_alloc)
    , result_type(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::sensor_msgs::JointState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::JointState_<ContainerAllocator> >::other >  _joints_type;
  _joints_type joints;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _result_type_type;
  _result_type_type result_type;



  enum {
    IK_FAILED = -1,
    IK_IN_COLLISION = -2,
    IK_ENDPOINT_DOES_NOT_EXIST = -3,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SolvePositionIKResponse_

typedef ::intera_core_msgs::SolvePositionIKResponse_<std::allocator<void> > SolvePositionIKResponse;

typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionIKResponse > SolvePositionIKResponsePtr;
typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionIKResponse const> SolvePositionIKResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/michele/catkinect/src/intera_common/intera_core_msgs/msg', '/home/michele/catkinect/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d47b4ca70898ba1b2f99ffdf9b81d911";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd47b4ca70898ba1bULL;
  static const uint64_t static_value2 = 0x2f99ffdf9b81d911ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/SolvePositionIKResponse";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
sensor_msgs/JointState[] joints\n\
\n\
\n\
\n\
\n\
\n\
int8 IK_FAILED = -1\n\
int8 IK_IN_COLLISION = -2\n\
int8 IK_ENDPOINT_DOES_NOT_EXIST = -3\n\
int8[] result_type\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
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
";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joints);
      stream.next(m.result_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SolvePositionIKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::SolvePositionIKResponse_<ContainerAllocator>& v)
  {
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "    ", v.joints[i]);
    }
    s << indent << "result_type[]" << std::endl;
    for (size_t i = 0; i < v.result_type.size(); ++i)
    {
      s << indent << "  result_type[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.result_type[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H
