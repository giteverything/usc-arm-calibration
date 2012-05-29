/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/arm_behavior_actions/msg/RepositionObjectAction.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTACTION_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTACTION_H
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

#include "arm_behavior_actions/RepositionObjectActionGoal.h"
#include "arm_behavior_actions/RepositionObjectActionResult.h"
#include "arm_behavior_actions/RepositionObjectActionFeedback.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct RepositionObjectAction_ {
  typedef RepositionObjectAction_<ContainerAllocator> Type;

  RepositionObjectAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  RepositionObjectAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::arm_behavior_actions::RepositionObjectActionGoal_<ContainerAllocator>  _action_goal_type;
   ::arm_behavior_actions::RepositionObjectActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::arm_behavior_actions::RepositionObjectActionResult_<ContainerAllocator>  _action_result_type;
   ::arm_behavior_actions::RepositionObjectActionResult_<ContainerAllocator>  action_result;

  typedef  ::arm_behavior_actions::RepositionObjectActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::arm_behavior_actions::RepositionObjectActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RepositionObjectAction
typedef  ::arm_behavior_actions::RepositionObjectAction_<std::allocator<void> > RepositionObjectAction;

typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectAction> RepositionObjectActionPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectAction const> RepositionObjectActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b23739db0d29bd625195b63edb8ca35d";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb23739db0d29bd62ULL;
  static const uint64_t static_value2 = 0x5195b63edb8ca35dULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/RepositionObjectAction";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
RepositionObjectActionGoal action_goal\n\
RepositionObjectActionResult action_result\n\
RepositionObjectActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/RepositionObjectActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
RepositionObjectGoal goal\n\
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
MSG: arm_behavior_actions/RepositionObjectGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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
================================================================================\n\
MSG: arm_behavior_actions/RepositionObjectActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
RepositionObjectResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/RepositionObjectResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/RepositionObjectActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
RepositionObjectFeedback feedback\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/RepositionObjectFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 percent_complete\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RepositionObjectAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::RepositionObjectAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::arm_behavior_actions::RepositionObjectActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::arm_behavior_actions::RepositionObjectActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::arm_behavior_actions::RepositionObjectActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTACTION_H

