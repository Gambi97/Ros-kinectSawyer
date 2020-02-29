// Generated by gencpp from file intera_core_msgs/InteractionControlCommand.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_INTERACTIONCONTROLCOMMAND_H
#define INTERA_CORE_MSGS_MESSAGE_INTERACTIONCONTROLCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct InteractionControlCommand_
{
  typedef InteractionControlCommand_<ContainerAllocator> Type;

  InteractionControlCommand_()
    : header()
    , interaction_control_active(false)
    , K_impedance()
    , max_impedance()
    , D_impedance()
    , K_nullspace()
    , force_command()
    , interaction_frame()
    , endpoint_name()
    , in_endpoint_frame(false)
    , disable_damping_in_force_control(false)
    , disable_reference_resetting(false)
    , interaction_control_mode()
    , rotations_for_constrained_zeroG(false)  {
    }
  InteractionControlCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , interaction_control_active(false)
    , K_impedance(_alloc)
    , max_impedance(_alloc)
    , D_impedance(_alloc)
    , K_nullspace(_alloc)
    , force_command(_alloc)
    , interaction_frame(_alloc)
    , endpoint_name(_alloc)
    , in_endpoint_frame(false)
    , disable_damping_in_force_control(false)
    , disable_reference_resetting(false)
    , interaction_control_mode(_alloc)
    , rotations_for_constrained_zeroG(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _interaction_control_active_type;
  _interaction_control_active_type interaction_control_active;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _K_impedance_type;
  _K_impedance_type K_impedance;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _max_impedance_type;
  _max_impedance_type max_impedance;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _D_impedance_type;
  _D_impedance_type D_impedance;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _K_nullspace_type;
  _K_nullspace_type K_nullspace;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _force_command_type;
  _force_command_type force_command;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _interaction_frame_type;
  _interaction_frame_type interaction_frame;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _endpoint_name_type;
  _endpoint_name_type endpoint_name;

   typedef uint8_t _in_endpoint_frame_type;
  _in_endpoint_frame_type in_endpoint_frame;

   typedef uint8_t _disable_damping_in_force_control_type;
  _disable_damping_in_force_control_type disable_damping_in_force_control;

   typedef uint8_t _disable_reference_resetting_type;
  _disable_reference_resetting_type disable_reference_resetting;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _interaction_control_mode_type;
  _interaction_control_mode_type interaction_control_mode;

   typedef uint8_t _rotations_for_constrained_zeroG_type;
  _rotations_for_constrained_zeroG_type rotations_for_constrained_zeroG;



  enum {
    IMPEDANCE_MODE = 1u,
    FORCE_MODE = 2u,
    IMPEDANCE_WITH_FORCE_LIMIT_MODE = 3u,
    FORCE_WITH_MOTION_LIMIT_MODE = 4u,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> const> ConstPtr;

}; // struct InteractionControlCommand_

typedef ::intera_core_msgs::InteractionControlCommand_<std::allocator<void> > InteractionControlCommand;

typedef boost::shared_ptr< ::intera_core_msgs::InteractionControlCommand > InteractionControlCommandPtr;
typedef boost::shared_ptr< ::intera_core_msgs::InteractionControlCommand const> InteractionControlCommandConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'intera_core_msgs': ['/home/michele/catkinect/src/intera_common/intera_core_msgs/msg', '/home/michele/catkinect/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "762b5d197d5d786f83741af7fe6261a6";
  }

  static const char* value(const ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x762b5d197d5d786fULL;
  static const uint64_t static_value2 = 0x83741af7fe6261a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/InteractionControlCommand";
  }

  static const char* value(const ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message sets the interaction (impedance/force) control on or off\n\
# It also contains desired cartesian stiffness K, damping D, and force values\n\
\n\
Header header\n\
bool      interaction_control_active\n\
\n\
## Cartesian Impedance Control Parameters\n\
# Stiffness units are (N/m) for first 3 and (Nm/rad) for second 3 values\n\
float64[] K_impedance\n\
# Force certain directions to have maximum possible impedance for a given pose\n\
bool[] max_impedance\n\
# Damping units are (Ns/m) for first 3 and (Nms/rad) for the second 3 values\n\
float64[] D_impedance\n\
# Joint Nullspace stiffness units are in (Nm/rad) (length == number of joints)\n\
float64[] K_nullspace\n\
\n\
## Parameters for force control or impedance control with force limit\n\
# If in force mode, this is the vector of desired forces/torques\n\
# to be regulated in (N) and (Nm)\n\
# If in impedance with force limit mode, this vector specifies the\n\
# magnitude of forces/torques (N and Nm) that the command will not exceed.\n\
float64[] force_command\n\
\n\
## Desired frame\n\
geometry_msgs/Pose interaction_frame\n\
string endpoint_name\n\
# True if impedance and force commands are defined in endpoint frame\n\
bool in_endpoint_frame\n\
\n\
# Set to true to disable damping during force control. Damping is used\n\
# to slow down robot motion during force control in free space.\n\
# Option included for SDK users to disable damping in force control\n\
bool disable_damping_in_force_control\n\
\n\
# Set to true to disable reference resetting. Reference resetting is\n\
# used when interaction parameters change, in order to avoid jumps/jerks.\n\
# Option included for SDK users to disable reference resetting if the\n\
# intention is to change interaction parameters.\n\
bool disable_reference_resetting\n\
\n\
## Mode Selection Parameters\n\
# The possible interaction control modes are:\n\
# Impedance mode: implements desired endpoint stiffness and damping.\n\
uint8 IMPEDANCE_MODE=1\n\
# Force mode: applies force/torque in the specified dimensions.\n\
uint8 FORCE_MODE=2\n\
# Impedance with force limit: impedance control while ensuring the commanded\n\
# forces/torques do not exceed force_command.\n\
uint8 IMPEDANCE_WITH_FORCE_LIMIT_MODE=3\n\
# Force with motion bounds: force control while ensuring the current\n\
# pose/velocities do not exceed forceMotionThreshold (currenetly defined in yaml)\n\
uint8 FORCE_WITH_MOTION_LIMIT_MODE=4\n\
\n\
# Specifies the interaction control mode for each Cartesian dimension (6)\n\
uint8[] interaction_control_mode\n\
\n\
# All 6 values in force and impedance parameter vectors have to be filled,\n\
# If a control mode is not used in a Cartesian dimension,\n\
# the corresponding parameters will be ignored.\n\
\n\
## Parameters for Constrained Zero-G Behaviors\n\
# Allow for arbitrary rotational displacements from the current orientation\n\
# for constrained zero-G. Setting 'rotations_for_constrained_zeroG = True'\n\
# will disable the rotational stiffness field which limits rotational\n\
# displacements to +/- 82.5 degree.\n\
# NOTE: it will be only enabled for a stationary reference orientation\n\
bool rotations_for_constrained_zeroG\n\
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

  static const char* value(const ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.interaction_control_active);
      stream.next(m.K_impedance);
      stream.next(m.max_impedance);
      stream.next(m.D_impedance);
      stream.next(m.K_nullspace);
      stream.next(m.force_command);
      stream.next(m.interaction_frame);
      stream.next(m.endpoint_name);
      stream.next(m.in_endpoint_frame);
      stream.next(m.disable_damping_in_force_control);
      stream.next(m.disable_reference_resetting);
      stream.next(m.interaction_control_mode);
      stream.next(m.rotations_for_constrained_zeroG);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InteractionControlCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::InteractionControlCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "interaction_control_active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interaction_control_active);
    s << indent << "K_impedance[]" << std::endl;
    for (size_t i = 0; i < v.K_impedance.size(); ++i)
    {
      s << indent << "  K_impedance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K_impedance[i]);
    }
    s << indent << "max_impedance[]" << std::endl;
    for (size_t i = 0; i < v.max_impedance.size(); ++i)
    {
      s << indent << "  max_impedance[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.max_impedance[i]);
    }
    s << indent << "D_impedance[]" << std::endl;
    for (size_t i = 0; i < v.D_impedance.size(); ++i)
    {
      s << indent << "  D_impedance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.D_impedance[i]);
    }
    s << indent << "K_nullspace[]" << std::endl;
    for (size_t i = 0; i < v.K_nullspace.size(); ++i)
    {
      s << indent << "  K_nullspace[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K_nullspace[i]);
    }
    s << indent << "force_command[]" << std::endl;
    for (size_t i = 0; i < v.force_command.size(); ++i)
    {
      s << indent << "  force_command[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.force_command[i]);
    }
    s << indent << "interaction_frame: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.interaction_frame);
    s << indent << "endpoint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.endpoint_name);
    s << indent << "in_endpoint_frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_endpoint_frame);
    s << indent << "disable_damping_in_force_control: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_damping_in_force_control);
    s << indent << "disable_reference_resetting: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_reference_resetting);
    s << indent << "interaction_control_mode[]" << std::endl;
    for (size_t i = 0; i < v.interaction_control_mode.size(); ++i)
    {
      s << indent << "  interaction_control_mode[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.interaction_control_mode[i]);
    }
    s << indent << "rotations_for_constrained_zeroG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rotations_for_constrained_zeroG);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_INTERACTIONCONTROLCOMMAND_H
