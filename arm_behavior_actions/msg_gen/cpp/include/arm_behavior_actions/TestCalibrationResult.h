/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/TestCalibrationResult.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_TESTCALIBRATIONRESULT_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_TESTCALIBRATIONRESULT_H
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
#include "geometry_msgs/Point.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct TestCalibrationResult_ {
  typedef TestCalibrationResult_<ContainerAllocator> Type;

  TestCalibrationResult_()
  : mean()
  , variance()
  , result(0)
  , info()
  {
  }

  TestCalibrationResult_(const ContainerAllocator& _alloc)
  : mean(_alloc)
  , variance(_alloc)
  , result(0)
  , info(_alloc)
  {
  }

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _mean_type;
   ::geometry_msgs::Point_<ContainerAllocator>  mean;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _variance_type;
   ::geometry_msgs::Point_<ContainerAllocator>  variance;

  typedef int32_t _result_type;
  int32_t result;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  info;

  enum { FAILED = 0 };
  enum { SUCCEEDED = 1 };

  typedef boost::shared_ptr< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TestCalibrationResult
typedef  ::arm_behavior_actions::TestCalibrationResult_<std::allocator<void> > TestCalibrationResult;

typedef boost::shared_ptr< ::arm_behavior_actions::TestCalibrationResult> TestCalibrationResultPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::TestCalibrationResult const> TestCalibrationResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "31bc32dacf8cc1e1e3165ed79640a4df";
  }

  static const char* value(const  ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x31bc32dacf8cc1e1ULL;
  static const uint64_t static_value2 = 0xe3165ed79640a4dfULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/TestCalibrationResult";
  }

  static const char* value(const  ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
geometry_msgs/Point mean\n\
geometry_msgs/Point variance\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
string info\n\
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

  static const char* value(const  ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.mean);
    stream.next(m.variance);
    stream.next(m.result);
    stream.next(m.info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TestCalibrationResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::TestCalibrationResult_<ContainerAllocator> & v) 
  {
    s << indent << "mean: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.mean);
    s << indent << "variance: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.variance);
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_TESTCALIBRATIONRESULT_H

