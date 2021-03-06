// Generated by gencpp from file wam_msgs/RTJointTq.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_RTJOINTTQ_H
#define WAM_MSGS_MESSAGE_RTJOINTTQ_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wam_msgs
{
template <class ContainerAllocator>
struct RTJointTq_
{
  typedef RTJointTq_<ContainerAllocator> Type;

  RTJointTq_()
    : torques()  {
    }
  RTJointTq_(const ContainerAllocator& _alloc)
    : torques(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _torques_type;
  _torques_type torques;




  typedef boost::shared_ptr< ::wam_msgs::RTJointTq_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wam_msgs::RTJointTq_<ContainerAllocator> const> ConstPtr;

}; // struct RTJointTq_

typedef ::wam_msgs::RTJointTq_<std::allocator<void> > RTJointTq;

typedef boost::shared_ptr< ::wam_msgs::RTJointTq > RTJointTqPtr;
typedef boost::shared_ptr< ::wam_msgs::RTJointTq const> RTJointTqConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wam_msgs::RTJointTq_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wam_msgs::RTJointTq_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wam_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'wam_msgs': ['/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::RTJointTq_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::RTJointTq_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::RTJointTq_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::RTJointTq_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::RTJointTq_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::RTJointTq_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wam_msgs::RTJointTq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eee8a087b75bc454bfb2231a0ca7e0f2";
  }

  static const char* value(const ::wam_msgs::RTJointTq_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeee8a087b75bc454ULL;
  static const uint64_t static_value2 = 0xbfb2231a0ca7e0f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::wam_msgs::RTJointTq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wam_msgs/RTJointTq";
  }

  static const char* value(const ::wam_msgs::RTJointTq_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wam_msgs::RTJointTq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] torques\n\
";
  }

  static const char* value(const ::wam_msgs::RTJointTq_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wam_msgs::RTJointTq_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.torques);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RTJointTq_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wam_msgs::RTJointTq_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wam_msgs::RTJointTq_<ContainerAllocator>& v)
  {
    s << indent << "torques[]" << std::endl;
    for (size_t i = 0; i < v.torques.size(); ++i)
    {
      s << indent << "  torques[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.torques[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAM_MSGS_MESSAGE_RTJOINTTQ_H
