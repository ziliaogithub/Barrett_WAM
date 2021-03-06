// Generated by gencpp from file wam_msgs/BHandGraspVel.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_BHANDGRASPVEL_H
#define WAM_MSGS_MESSAGE_BHANDGRASPVEL_H

#include <ros/service_traits.h>


#include <wam_msgs/BHandGraspVelRequest.h>
#include <wam_msgs/BHandGraspVelResponse.h>


namespace wam_msgs
{

struct BHandGraspVel
{

typedef BHandGraspVelRequest Request;
typedef BHandGraspVelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BHandGraspVel
} // namespace wam_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wam_msgs::BHandGraspVel > {
  static const char* value()
  {
    return "e4ff88b32504f688719a85e0753f63ce";
  }

  static const char* value(const ::wam_msgs::BHandGraspVel&) { return value(); }
};

template<>
struct DataType< ::wam_msgs::BHandGraspVel > {
  static const char* value()
  {
    return "wam_msgs/BHandGraspVel";
  }

  static const char* value(const ::wam_msgs::BHandGraspVel&) { return value(); }
};


// service_traits::MD5Sum< ::wam_msgs::BHandGraspVelRequest> should match 
// service_traits::MD5Sum< ::wam_msgs::BHandGraspVel > 
template<>
struct MD5Sum< ::wam_msgs::BHandGraspVelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::BHandGraspVel >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspVelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::BHandGraspVelRequest> should match 
// service_traits::DataType< ::wam_msgs::BHandGraspVel > 
template<>
struct DataType< ::wam_msgs::BHandGraspVelRequest>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::BHandGraspVel >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspVelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wam_msgs::BHandGraspVelResponse> should match 
// service_traits::MD5Sum< ::wam_msgs::BHandGraspVel > 
template<>
struct MD5Sum< ::wam_msgs::BHandGraspVelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::BHandGraspVel >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspVelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::BHandGraspVelResponse> should match 
// service_traits::DataType< ::wam_msgs::BHandGraspVel > 
template<>
struct DataType< ::wam_msgs::BHandGraspVelResponse>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::BHandGraspVel >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspVelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WAM_MSGS_MESSAGE_BHANDGRASPVEL_H
