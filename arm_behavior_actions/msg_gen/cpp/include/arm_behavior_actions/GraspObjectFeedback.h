/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/GraspObjectFeedback.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_GRASPOBJECTFEEDBACK_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_GRASPOBJECTFEEDBACK_H
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
struct GraspObjectFeedback_ {
  typedef GraspObjectFeedback_<ContainerAllocator> Type;

  GraspObjectFeedback_()
  : percent_complete(0.0)
  {
  }

  GraspObjectFeedback_(const ContainerAllocator& _alloc)
  : percent_complete(0.0)
  {
  }

  typedef double _percent_complete_type;
  double percent_complete;


  typedef boost::shared_ptr< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GraspObjectFeedback
typedef  ::arm_behavior_actions::GraspObjectFeedback_<std::allocator<void> > GraspObjectFeedback;

typedef boost::shared_ptr< ::arm_behavior_actions::GraspObjectFeedback> GraspObjectFeedbackPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::GraspObjectFeedback const> GraspObjectFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cc6abe8bc172f00995b2c3f53015f718";
  }

  static const char* value(const  ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcc6abe8bc172f009ULL;
  static const uint64_t static_value2 = 0x95b2c3f53015f718ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/GraspObjectFeedback";
  }

  static const char* value(const  ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 percent_complete\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.percent_complete);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GraspObjectFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::GraspObjectFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "percent_complete: ";
    Printer<double>::stream(s, indent + "  ", v.percent_complete);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_GRASPOBJECTFEEDBACK_H
