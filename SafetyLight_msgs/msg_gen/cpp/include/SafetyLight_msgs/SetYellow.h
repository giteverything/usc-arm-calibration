/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/SafetyLight_msgs/msg/SetYellow.msg */
#ifndef SAFETYLIGHT_MSGS_MESSAGE_SETYELLOW_H
#define SAFETYLIGHT_MSGS_MESSAGE_SETYELLOW_H
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


namespace SafetyLight_msgs
{
template <class ContainerAllocator>
struct SetYellow_ {
  typedef SetYellow_<ContainerAllocator> Type;

  SetYellow_()
  : status(false)
  {
  }

  SetYellow_(const ContainerAllocator& _alloc)
  : status(false)
  {
  }

  typedef uint8_t _status_type;
  uint8_t status;


  typedef boost::shared_ptr< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::SafetyLight_msgs::SetYellow_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetYellow
typedef  ::SafetyLight_msgs::SetYellow_<std::allocator<void> > SetYellow;

typedef boost::shared_ptr< ::SafetyLight_msgs::SetYellow> SetYellowPtr;
typedef boost::shared_ptr< ::SafetyLight_msgs::SetYellow const> SetYellowConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::SafetyLight_msgs::SetYellow_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace SafetyLight_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::SafetyLight_msgs::SetYellow_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3a1255d4d998bd4d6585c64639b5ee9a";
  }

  static const char* value(const  ::SafetyLight_msgs::SetYellow_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3a1255d4d998bd4dULL;
  static const uint64_t static_value2 = 0x6585c64639b5ee9aULL;
};

template<class ContainerAllocator>
struct DataType< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "SafetyLight_msgs/SetYellow";
  }

  static const char* value(const  ::SafetyLight_msgs::SetYellow_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#\n\
# COPYRIGHT (C) 2005-2010\n\
# RE2, INC.\n\
# ALL RIGHTS RESERVED\n\
#\n\
# This is free software:\n\
# you can redistribute it and/or modify it under the terms of the GNU General\n\
# Public License as published by the Free Software Foundation, either version\n\
# 3 of the License, or (at your option) any later version.\n\
#\n\
# You should have received a copy of the GNU General Public License along\n\
# with this package.  If not, see <http://www.gnu.org/licenses/>.\n\
#\n\
# RE2, INC. disclaims all warranties with regard to this software, including\n\
# all implied warranties of merchantability and fitness, in no event shall\n\
# RE2, INC. be liable for any special, indirect or consequential damages or\n\
# any damages whatsoever resulting from loss of use, data or profits, whether\n\
# in an action of contract, negligence or other tortious action, arising out\n\
# of or in connection with the use or performance of this software.\n\
#\n\
#\n\
#\n\
\n\
# Set the status of the yellow value on the safety light\n\
\n\
# True is on, false is off\n\
bool status\n\
\n\
";
  }

  static const char* value(const  ::SafetyLight_msgs::SetYellow_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetYellow_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::SafetyLight_msgs::SetYellow_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::SafetyLight_msgs::SetYellow_<ContainerAllocator> & v) 
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SAFETYLIGHT_MSGS_MESSAGE_SETYELLOW_H

