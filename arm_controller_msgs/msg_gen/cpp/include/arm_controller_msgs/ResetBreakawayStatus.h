/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_controller_msgs/msg/ResetBreakawayStatus.msg */
#ifndef ARM_CONTROLLER_MSGS_MESSAGE_RESETBREAKAWAYSTATUS_H
#define ARM_CONTROLLER_MSGS_MESSAGE_RESETBREAKAWAYSTATUS_H
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


namespace arm_controller_msgs
{
template <class ContainerAllocator>
struct ResetBreakawayStatus_ {
  typedef ResetBreakawayStatus_<ContainerAllocator> Type;

  ResetBreakawayStatus_()
  : status(0)
  {
  }

  ResetBreakawayStatus_(const ContainerAllocator& _alloc)
  : status(0)
  {
  }

  typedef int32_t _status_type;
  int32_t status;

  enum { SUCCEEDED = 1 };
  enum { FAILED = 2 };

  typedef boost::shared_ptr< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ResetBreakawayStatus
typedef  ::arm_controller_msgs::ResetBreakawayStatus_<std::allocator<void> > ResetBreakawayStatus;

typedef boost::shared_ptr< ::arm_controller_msgs::ResetBreakawayStatus> ResetBreakawayStatusPtr;
typedef boost::shared_ptr< ::arm_controller_msgs::ResetBreakawayStatus const> ResetBreakawayStatusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_controller_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "20d60c7fb0f1fa468f9a953f3e851e39";
  }

  static const char* value(const  ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x20d60c7fb0f1fa46ULL;
  static const uint64_t static_value2 = 0x8f9a953f3e851e39ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/ResetBreakawayStatus";
  }

  static const char* value(const  ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#answer with a success or failure / used to detect if the fingers are stuck\n\
int32 status\n\
\n\
\n\
# Possible types of status\n\
int32 SUCCEEDED=1\n\
int32 FAILED=2\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ResetBreakawayStatus_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_controller_msgs::ResetBreakawayStatus_<ContainerAllocator> & v) 
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_CONTROLLER_MSGS_MESSAGE_RESETBREAKAWAYSTATUS_H

