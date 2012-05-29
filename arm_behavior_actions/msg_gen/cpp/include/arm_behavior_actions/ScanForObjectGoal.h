/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/ScanForObjectGoal.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTGOAL_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTGOAL_H
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

#include "geometry_msgs/Point.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct ScanForObjectGoal_ {
  typedef ScanForObjectGoal_<ContainerAllocator> Type;

  ScanForObjectGoal_()
  : object_name()
  , target_location()
  {
  }

  ScanForObjectGoal_(const ContainerAllocator& _alloc)
  : object_name(_alloc)
  , target_location(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _object_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  object_name;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _target_location_type;
   ::geometry_msgs::Point_<ContainerAllocator>  target_location;


  typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ScanForObjectGoal
typedef  ::arm_behavior_actions::ScanForObjectGoal_<std::allocator<void> > ScanForObjectGoal;

typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectGoal> ScanForObjectGoalPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::ScanForObjectGoal const> ScanForObjectGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "594767e2b34d29949f18a5ea9fbef05e";
  }

  static const char* value(const  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x594767e2b34d2994ULL;
  static const uint64_t static_value2 = 0x9f18a5ea9fbef05eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/ScanForObjectGoal";
  }

  static const char* value(const  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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

  static const char* value(const  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.object_name);
    stream.next(m.target_location);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ScanForObjectGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::ScanForObjectGoal_<ContainerAllocator> & v) 
  {
    s << indent << "object_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_name);
    s << indent << "target_location: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.target_location);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_SCANFOROBJECTGOAL_H

