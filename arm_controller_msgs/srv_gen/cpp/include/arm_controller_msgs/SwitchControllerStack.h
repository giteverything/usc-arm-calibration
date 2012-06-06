/* Auto-generated by genmsg_cpp for file /home/arm_user/ARM/mandy/control/arm_controller_msgs/srv/SwitchControllerStack.srv */
#ifndef ARM_CONTROLLER_MSGS_SERVICE_SWITCHCONTROLLERSTACK_H
#define ARM_CONTROLLER_MSGS_SERVICE_SWITCHCONTROLLERSTACK_H
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

#include "ros/service_traits.h"




namespace arm_controller_msgs
{
template <class ContainerAllocator>
struct SwitchControllerStackRequest_ {
  typedef SwitchControllerStackRequest_<ContainerAllocator> Type;

  SwitchControllerStackRequest_()
  : controller_stacks()
  , transition_time()
  {
  }

  SwitchControllerStackRequest_(const ContainerAllocator& _alloc)
  : controller_stacks(_alloc)
  , transition_time()
  {
  }

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _controller_stacks_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  controller_stacks;

  typedef ros::Duration _transition_time_type;
  ros::Duration transition_time;


  typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SwitchControllerStackRequest
typedef  ::arm_controller_msgs::SwitchControllerStackRequest_<std::allocator<void> > SwitchControllerStackRequest;

typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackRequest> SwitchControllerStackRequestPtr;
typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackRequest const> SwitchControllerStackRequestConstPtr;


template <class ContainerAllocator>
struct SwitchControllerStackResponse_ {
  typedef SwitchControllerStackResponse_<ContainerAllocator> Type;

  SwitchControllerStackResponse_()
  : result(0)
  {
  }

  SwitchControllerStackResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef uint8_t _result_type;
  uint8_t result;

  enum { FAILURE = 0 };
  enum { SUCCESS = 1 };

  typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SwitchControllerStackResponse
typedef  ::arm_controller_msgs::SwitchControllerStackResponse_<std::allocator<void> > SwitchControllerStackResponse;

typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackResponse> SwitchControllerStackResponsePtr;
typedef boost::shared_ptr< ::arm_controller_msgs::SwitchControllerStackResponse const> SwitchControllerStackResponseConstPtr;

struct SwitchControllerStack
{

typedef SwitchControllerStackRequest Request;
typedef SwitchControllerStackResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SwitchControllerStack
} // namespace arm_controller_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "872c3446b77249a0ffbcadd4f4b70a86";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x872c3446b77249a0ULL;
  static const uint64_t static_value2 = 0xffbcadd4f4b70a86ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/SwitchControllerStackRequest";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string[] controller_stacks\n\
duration transition_time\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7f8c05b0fe036c25972a7f91e6532e6e";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7f8c05b0fe036c25ULL;
  static const uint64_t static_value2 = 0x972a7f91e6532e6eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/SwitchControllerStackResponse";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 FAILURE=0\n\
uint8 SUCCESS=1\n\
uint8 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.controller_stacks);
    stream.next(m.transition_time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SwitchControllerStackRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SwitchControllerStackResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<arm_controller_msgs::SwitchControllerStack> {
  static const char* value() 
  {
    return "a985954ae5f3ee1d395dee1a8c28409b";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStack&) { return value(); } 
};

template<>
struct DataType<arm_controller_msgs::SwitchControllerStack> {
  static const char* value() 
  {
    return "arm_controller_msgs/SwitchControllerStack";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStack&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a985954ae5f3ee1d395dee1a8c28409b";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/SwitchControllerStack";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStackRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a985954ae5f3ee1d395dee1a8c28409b";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/SwitchControllerStack";
  }

  static const char* value(const arm_controller_msgs::SwitchControllerStackResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ARM_CONTROLLER_MSGS_SERVICE_SWITCHCONTROLLERSTACK_H
