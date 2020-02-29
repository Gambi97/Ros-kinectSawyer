// Generated by gencpp from file intera_core_msgs/IOComponentCommandSrvRequest.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVREQUEST_H
#define INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <intera_core_msgs/IOComponentCommand.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct IOComponentCommandSrvRequest_
{
  typedef IOComponentCommandSrvRequest_<ContainerAllocator> Type;

  IOComponentCommandSrvRequest_()
    : command()
    , timeout(0.0)  {
    }
  IOComponentCommandSrvRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , timeout(0.0)  {
  (void)_alloc;
    }



   typedef  ::intera_core_msgs::IOComponentCommand_<ContainerAllocator>  _command_type;
  _command_type command;

   typedef float _timeout_type;
  _timeout_type timeout;





  typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IOComponentCommandSrvRequest_

typedef ::intera_core_msgs::IOComponentCommandSrvRequest_<std::allocator<void> > IOComponentCommandSrvRequest;

typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvRequest > IOComponentCommandSrvRequestPtr;
typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvRequest const> IOComponentCommandSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f1576f0935f7d90abe14dbedf574be71";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf1576f0935f7d90aULL;
  static const uint64_t static_value2 = 0xbe14dbedf574be71ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/IOComponentCommandSrvRequest";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
IOComponentCommand command\n\
float32 timeout\n\
\n\
================================================================================\n\
MSG: intera_core_msgs/IOComponentCommand\n\
## IO Component Command\n\
time time      # time the message was created, serves as a sequence number\n\
string op      # operation to perform\n\
string args    # JSON arguments\n\
";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IOComponentCommandSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::IOComponentCommandSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    s << std::endl;
    Printer< ::intera_core_msgs::IOComponentCommand_<ContainerAllocator> >::stream(s, indent + "  ", v.command);
    s << indent << "timeout: ";
    Printer<float>::stream(s, indent + "  ", v.timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVREQUEST_H
