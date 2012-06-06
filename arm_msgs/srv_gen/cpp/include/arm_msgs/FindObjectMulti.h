/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_msgs/srv/FindObjectMulti.srv */
#ifndef ARM_MSGS_SERVICE_FINDOBJECTMULTI_H
#define ARM_MSGS_SERVICE_FINDOBJECTMULTI_H
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



#include "arm_msgs/Object.h"

namespace arm_msgs
{
template <class ContainerAllocator>
struct FindObjectMultiRequest_ {
  typedef FindObjectMultiRequest_<ContainerAllocator> Type;

  FindObjectMultiRequest_()
  : names()
  {
  }

  FindObjectMultiRequest_(const ContainerAllocator& _alloc)
  : names(_alloc)
  {
  }

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _names_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  names;


  typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FindObjectMultiRequest
typedef  ::arm_msgs::FindObjectMultiRequest_<std::allocator<void> > FindObjectMultiRequest;

typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiRequest> FindObjectMultiRequestPtr;
typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiRequest const> FindObjectMultiRequestConstPtr;


template <class ContainerAllocator>
struct FindObjectMultiResponse_ {
  typedef FindObjectMultiResponse_<ContainerAllocator> Type;

  FindObjectMultiResponse_()
  : objects()
  {
  }

  FindObjectMultiResponse_(const ContainerAllocator& _alloc)
  : objects(_alloc)
  {
  }

  typedef std::vector< ::arm_msgs::Object_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::arm_msgs::Object_<ContainerAllocator> >::other >  _objects_type;
  std::vector< ::arm_msgs::Object_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::arm_msgs::Object_<ContainerAllocator> >::other >  objects;


  typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FindObjectMultiResponse
typedef  ::arm_msgs::FindObjectMultiResponse_<std::allocator<void> > FindObjectMultiResponse;

typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiResponse> FindObjectMultiResponsePtr;
typedef boost::shared_ptr< ::arm_msgs::FindObjectMultiResponse const> FindObjectMultiResponseConstPtr;

struct FindObjectMulti
{

typedef FindObjectMultiRequest Request;
typedef FindObjectMultiResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct FindObjectMulti
} // namespace arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dc7ae3609524b18034e49294a4ce670e";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdc7ae3609524b180ULL;
  static const uint64_t static_value2 = 0x34e49294a4ce670eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/FindObjectMultiRequest";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string[] names\n\
\n\
";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fe88792a59533250d6458712ca8c6b0e";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfe88792a59533250ULL;
  static const uint64_t static_value2 = 0xd6458712ca8c6b0eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/FindObjectMultiResponse";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/Object[] objects\n\
\n\
\n\
================================================================================\n\
MSG: arm_msgs/Object\n\
string name\n\
string ORANGE_PAPER=orange_paper\n\
string BALL=ball\n\
string ROCK=rock\n\
string CANTEEN=canteen\n\
string CANTEEN_STANDING=canteen_standing\n\
string CANTEEN_LYING=canteen_lying\n\
string PVC_PIPE_BIG=pipe\n\
string PVC_PIPE_BIG_STANDING=pipe_standing\n\
string PVC_PIPE_BIG_LYING=pipe_lying\n\
string STAPLER=stapler\n\
string FLASHLIGHT=flashlight\n\
string FLASHLIGHT_UP=flashlight_up\n\
string DOOR=door\n\
string DOOR_UNLOCK=door_unlock\n\
string BOTTLE=bottle\n\
string MAGLITE=maglite\n\
string MAGLITE_UP=maglite_up\n\
string MAGLITE_DOWN=maglite_down\n\
string MAGLITE_LYING=maglite_lying\n\
string RADIO=radio\n\
string HANDSET=handset\n\
string HANDSET_DOWN=handset_down\n\
string CRADLE=cradle\n\
string CRADLE_FLAT=cradle_flat\n\
string CRADLE_VERTICAL=cradle_vertical\n\
string SCREWDRIVER=screwdriver\n\
string DRILL=drill\n\
string DRILL_UPRIGHT=drill_upright\n\
string DRILL_BLOCK=drill_block\n\
string DRILL_BLOCK_LYING=drill_block_lying\n\
string DRILL_BLOCK_STANDING=drill_block_standing\n\
string RED_DOT=red_dot\n\
string SHOVEL=shovel\n\
string SHOVEL_FLAT=shovel_flat\n\
string SHOVEL_ONEDGE=shovel_onedge\n\
string HAMMER=hammer\n\
string HAMMER_DOWN=hammer_down\n\
string HAMMER_LYING=hammer_lying\n\
string HAMMER_UP=hammer_up\n\
string HAMMER_ONEDGE=hammer_onedge\n\
string FLOODLIGHT=floodlight\n\
string FLOODLIGHT_SIDE=floodlight_side\n\
string FLOODLIGHT_DOWN=floodlight_down\n\
string PELICAN=pelican\n\
string PELICAN_HANDLE_UP=pelican_handle_up\n\
string PELICAN_LABEL_UP=pelican_label_up\n\
string PELICAN_LABEL_DOWN=pelican_label_down\n\
string PELICAN_LEFT_EDGE_DOWN=pelican_left_edge_down\n\
string PELICAN_RIGHT_EDGE_DOWN=pelican_right_edge_down\n\
geometry_msgs/PoseWithCovarianceStamped pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovarianceStamped\n\
# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
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
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
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
\n\
";
  }

  static const char* value(const  ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_msgs::FindObjectMultiRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.names);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FindObjectMultiRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_msgs::FindObjectMultiResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.objects);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FindObjectMultiResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<arm_msgs::FindObjectMulti> {
  static const char* value() 
  {
    return "a11360d14f6db317e12a50f0a06c4121";
  }

  static const char* value(const arm_msgs::FindObjectMulti&) { return value(); } 
};

template<>
struct DataType<arm_msgs::FindObjectMulti> {
  static const char* value() 
  {
    return "arm_msgs/FindObjectMulti";
  }

  static const char* value(const arm_msgs::FindObjectMulti&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a11360d14f6db317e12a50f0a06c4121";
  }

  static const char* value(const arm_msgs::FindObjectMultiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_msgs::FindObjectMultiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/FindObjectMulti";
  }

  static const char* value(const arm_msgs::FindObjectMultiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a11360d14f6db317e12a50f0a06c4121";
  }

  static const char* value(const arm_msgs::FindObjectMultiResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<arm_msgs::FindObjectMultiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/FindObjectMulti";
  }

  static const char* value(const arm_msgs::FindObjectMultiResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ARM_MSGS_SERVICE_FINDOBJECTMULTI_H
