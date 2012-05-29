/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/ScanForObjectActionGoal.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTACTIONGOAL_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTACTIONGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "arm_behavior_actions/ScanForObjectGoal.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct ScanForObjectActionGoal_ {
  typedef ScanForObjectActionGoal_<ContainerAllocator> Type;

  ScanForObjectActionGoal_()
  : header()
  , goal_id()
  , goal()
  {
  }

  ScanForObjectActionGoal_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator>  _goal_type;
   ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ScanForObjectActionGoal
typedef  ::arm_behavior_actions::ScanForObjectActionGoal_<std::allocator<void> > ScanForObjectActionGoal;

typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectActionGoal> ScanForObjectActionGoalPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectActionGoal const> ScanForObjectActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1370f03ed7448f37d3a02b23f89639fc";
  }

  static const char* value(const  ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1370f03ed7448f37ULL;
  static const uint64_t static_value2 = 0xd3a02b23f89639fcULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/ScanForObjectActionGoal";
  }

  static const char* value(const  ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
ScanForObjectGoal goal\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/ScanForObjectGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
string object_name\n\
geometry_msgs/Point target_location\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ScanForObjectActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::ScanForObjectActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTACTIONGOAL_H

