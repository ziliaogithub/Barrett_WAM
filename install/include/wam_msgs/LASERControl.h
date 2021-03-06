// Generated by gencpp from file wam_msgs/LASERControl.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_LASERCONTROL_H
#define WAM_MSGS_MESSAGE_LASERCONTROL_H

#include <ros/service_traits.h>


#include <wam_msgs/LASERControlRequest.h>
#include <wam_msgs/LASERControlResponse.h>


namespace wam_msgs
{

struct LASERControl
{

typedef LASERControlRequest Request;
typedef LASERControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LASERControl
} // namespace wam_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wam_msgs::LASERControl > {
  static const char* value()
  {
    return "e4cf4d84661c7dde87aee2c1b97ddf9d";
  }

  static const char* value(const ::wam_msgs::LASERControl&) { return value(); }
};

template<>
struct DataType< ::wam_msgs::LASERControl > {
  static const char* value()
  {
    return "wam_msgs/LASERControl";
  }

  static const char* value(const ::wam_msgs::LASERControl&) { return value(); }
};


// service_traits::MD5Sum< ::wam_msgs::LASERControlRequest> should match 
// service_traits::MD5Sum< ::wam_msgs::LASERControl > 
template<>
struct MD5Sum< ::wam_msgs::LASERControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::LASERControl >::value();
  }
  static const char* value(const ::wam_msgs::LASERControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::LASERControlRequest> should match 
// service_traits::DataType< ::wam_msgs::LASERControl > 
template<>
struct DataType< ::wam_msgs::LASERControlRequest>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::LASERControl >::value();
  }
  static const char* value(const ::wam_msgs::LASERControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wam_msgs::LASERControlResponse> should match 
// service_traits::MD5Sum< ::wam_msgs::LASERControl > 
template<>
struct MD5Sum< ::wam_msgs::LASERControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::LASERControl >::value();
  }
  static const char* value(const ::wam_msgs::LASERControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::LASERControlResponse> should match 
// service_traits::DataType< ::wam_msgs::LASERControl > 
template<>
struct DataType< ::wam_msgs::LASERControlResponse>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::LASERControl >::value();
  }
  static const char* value(const ::wam_msgs::LASERControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WAM_MSGS_MESSAGE_LASERCONTROL_H
