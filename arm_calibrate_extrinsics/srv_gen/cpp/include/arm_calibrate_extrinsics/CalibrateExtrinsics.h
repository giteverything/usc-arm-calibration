/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_calibrate_extrinsics/srv/CalibrateExtrinsics.srv */
#ifndef ARM_CALIBRATE_EXTRINSICS_SERVICE_CALIBRATEEXTRINSICS_H
#define ARM_CALIBRATE_EXTRINSICS_SERVICE_CALIBRATEEXTRINSICS_H
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




namespace arm_calibrate_extrinsics
{
template <class ContainerAllocator>
struct CalibrateExtrinsicsRequest_ {
  typedef CalibrateExtrinsicsRequest_<ContainerAllocator> Type;

  CalibrateExtrinsicsRequest_()
  {
  }

  CalibrateExtrinsicsRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateExtrinsicsRequest
typedef  ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<std::allocator<void> > CalibrateExtrinsicsRequest;

typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest> CalibrateExtrinsicsRequestPtr;
typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest const> CalibrateExtrinsicsRequestConstPtr;


template <class ContainerAllocator>
struct CalibrateExtrinsicsResponse_ {
  typedef CalibrateExtrinsicsResponse_<ContainerAllocator> Type;

  CalibrateExtrinsicsResponse_()
  : result(0)
  {
  }

  CalibrateExtrinsicsResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;

  enum { FAILED = 0 };
  enum { SUCCEEDED = 1 };

  typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateExtrinsicsResponse
typedef  ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<std::allocator<void> > CalibrateExtrinsicsResponse;

typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse> CalibrateExtrinsicsResponsePtr;
typedef boost::shared_ptr< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse const> CalibrateExtrinsicsResponseConstPtr;

struct CalibrateExtrinsics
{

typedef CalibrateExtrinsicsRequest Request;
typedef CalibrateExtrinsicsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct CalibrateExtrinsics
} // namespace arm_calibrate_extrinsics

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_calibrate_extrinsics/CalibrateExtrinsicsRequest";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b07fa3ecc4713f4025214b4258afb809";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb07fa3ecc4713f40ULL;
  static const uint64_t static_value2 = 0x25214b4258afb809ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_calibrate_extrinsics/CalibrateExtrinsicsResponse";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateExtrinsicsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateExtrinsicsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<arm_calibrate_extrinsics::CalibrateExtrinsics> {
  static const char* value() 
  {
    return "b07fa3ecc4713f4025214b4258afb809";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsics&) { return value(); } 
};

template<>
struct DataType<arm_calibrate_extrinsics::CalibrateExtrinsics> {
  static const char* value() 
  {
    return "arm_calibrate_extrinsics/CalibrateExtrinsics";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsics&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b07fa3ecc4713f4025214b4258afb809";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_calibrate_extrinsics/CalibrateExtrinsics";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsicsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b07fa3ecc4713f4025214b4258afb809";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_calibrate_extrinsics/CalibrateExtrinsics";
  }

  static const char* value(const arm_calibrate_extrinsics::CalibrateExtrinsicsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ARM_CALIBRATE_EXTRINSICS_SERVICE_CALIBRATEEXTRINSICS_H

