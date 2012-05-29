/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/MoveJointsResult.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_MOVEJOINTSRESULT_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_MOVEJOINTSRESULT_H
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


namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct MoveJointsResult_ {
  typedef MoveJointsResult_<ContainerAllocator> Type;

  MoveJointsResult_()
  : result(0)
  {
  }

  MoveJointsResult_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;

  enum { FAILED = 0 };
  enum { SUCCEEDED = 1 };
  enum { PREEMPTED = 2 };

  typedef boost::shared_ptr< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MoveJointsResult
typedef  ::arm_behavior_actions::MoveJointsResult_<std::allocator<void> > MoveJointsResult;

typedef boost::shared_ptr< ::arm_behavior_actions::MoveJointsResult> MoveJointsResultPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::MoveJointsResult const> MoveJointsResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "82e1d46a9dbdfa81644dc4b9a00c27b0";
  }

  static const char* value(const  ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x82e1d46a9dbdfa81ULL;
  static const uint64_t static_value2 = 0x644dc4b9a00c27b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/MoveJointsResult";
  }

  static const char* value(const  ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
int32 PREEMPTED=2\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MoveJointsResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::MoveJointsResult_<ContainerAllocator> & v) 
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_MOVEJOINTSRESULT_H

