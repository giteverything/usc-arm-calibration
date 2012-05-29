/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/RepositionObjectGoal.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTGOAL_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTGOAL_H
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

#include "arm_msgs/Object.h"
#include "geometry_msgs/Point.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct RepositionObjectGoal_ {
  typedef RepositionObjectGoal_<ContainerAllocator> Type;

  RepositionObjectGoal_()
  : object()
  , target()
  , yaw_diff(0.0)
  {
  }

  RepositionObjectGoal_(const ContainerAllocator& _alloc)
  : object(_alloc)
  , target(_alloc)
  , yaw_diff(0.0)
  {
  }

  typedef  ::arm_msgs::Object_<ContainerAllocator>  _object_type;
   ::arm_msgs::Object_<ContainerAllocator>  object;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _target_type;
   ::geometry_msgs::Point_<ContainerAllocator>  target;

  typedef double _yaw_diff_type;
  double yaw_diff;


  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RepositionObjectGoal
typedef  ::arm_behavior_actions::RepositionObjectGoal_<std::allocator<void> > RepositionObjectGoal;

typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectGoal> RepositionObjectGoalPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectGoal const> RepositionObjectGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6bc6561ea015a21127c0acab496b9aee";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6bc6561ea015a211ULL;
  static const uint64_t static_value2 = 0x27c0acab496b9aeeULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/RepositionObjectGoal";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
arm_msgs/Object object\n\
geometry_msgs/Point target\n\
float64 yaw_diff\n\
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

  static const char* value(const  ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.object);
    stream.next(m.target);
    stream.next(m.yaw_diff);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RepositionObjectGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::RepositionObjectGoal_<ContainerAllocator> & v) 
  {
    s << indent << "object: ";
s << std::endl;
    Printer< ::arm_msgs::Object_<ContainerAllocator> >::stream(s, indent + "  ", v.object);
    s << indent << "target: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
    s << indent << "yaw_diff: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_diff);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTGOAL_H

