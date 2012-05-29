/* Auto-generated by genmsg_cpp for file /home/jbinney/ws/arm/stacks/usc-arm-calibration/usc_utilities/msg/AccumulatedTrialStatistics.msg */
#ifndef USC_UTILITIES_MESSAGE_ACCUMULATEDTRIALSTATISTICS_H
#define USC_UTILITIES_MESSAGE_ACCUMULATEDTRIALSTATISTICS_H
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


namespace usc_utilities
{
template <class ContainerAllocator>
struct AccumulatedTrialStatistics_ {
  typedef AccumulatedTrialStatistics_<ContainerAllocator> Type;

  AccumulatedTrialStatistics_()
  : id(0)
  , count(0)
  , name()
  , mean()
  , variance()
  {
  }

  AccumulatedTrialStatistics_(const ContainerAllocator& _alloc)
  : id(0)
  , count(0)
  , name(_alloc)
  , mean(_alloc)
  , variance(_alloc)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef int32_t _count_type;
  int32_t count;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  name;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _mean_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  mean;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _variance_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  variance;


  typedef boost::shared_ptr< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AccumulatedTrialStatistics
typedef  ::usc_utilities::AccumulatedTrialStatistics_<std::allocator<void> > AccumulatedTrialStatistics;

typedef boost::shared_ptr< ::usc_utilities::AccumulatedTrialStatistics> AccumulatedTrialStatisticsPtr;
typedef boost::shared_ptr< ::usc_utilities::AccumulatedTrialStatistics const> AccumulatedTrialStatisticsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace usc_utilities

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e0b7f0b20f465b2c4fb0fecc83844c72";
  }

  static const char* value(const  ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe0b7f0b20f465b2cULL;
  static const uint64_t static_value2 = 0x4fb0fecc83844c72ULL;
};

template<class ContainerAllocator>
struct DataType< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> > {
  static const char* value() 
  {
    return "usc_utilities/AccumulatedTrialStatistics";
  }

  static const char* value(const  ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 id\n\
int32 count\n\
string[] name\n\
float64[] mean\n\
float64[] variance\n\
";
  }

  static const char* value(const  ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.count);
    stream.next(m.name);
    stream.next(m.mean);
    stream.next(m.variance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AccumulatedTrialStatistics_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::usc_utilities::AccumulatedTrialStatistics_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "mean[]" << std::endl;
    for (size_t i = 0; i < v.mean.size(); ++i)
    {
      s << indent << "  mean[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.mean[i]);
    }
    s << indent << "variance[]" << std::endl;
    for (size_t i = 0; i < v.variance.size(); ++i)
    {
      s << indent << "  variance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.variance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // USC_UTILITIES_MESSAGE_ACCUMULATEDTRIALSTATISTICS_H

