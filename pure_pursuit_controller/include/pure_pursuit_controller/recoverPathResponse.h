// Generated by gencpp from file pure_pursuit_controller/recoverPathResponse.msg
// DO NOT EDIT!


#ifndef PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHRESPONSE_H
#define PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pure_pursuit_controller
{
template <class ContainerAllocator>
struct recoverPathResponse_
{
  typedef recoverPathResponse_<ContainerAllocator> Type;

  recoverPathResponse_()
    : success(false)  {
    }
  recoverPathResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> const> ConstPtr;

}; // struct recoverPathResponse_

typedef ::pure_pursuit_controller::recoverPathResponse_<std::allocator<void> > recoverPathResponse;

typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathResponse > recoverPathResponsePtr;
typedef boost::shared_ptr< ::pure_pursuit_controller::recoverPathResponse const> recoverPathResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pure_pursuit_controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pure_pursuit_controller/recoverPathResponse";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
\n\
";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct recoverPathResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pure_pursuit_controller::recoverPathResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATHRESPONSE_H
