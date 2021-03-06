// Generated by gencpp from file wam_msgs/BHandGraspPos.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_BHANDGRASPPOS_H
#define WAM_MSGS_MESSAGE_BHANDGRASPPOS_H

#include <ros/service_traits.h>


#include <wam_msgs/BHandGraspPosRequest.h>
#include <wam_msgs/BHandGraspPosResponse.h>


namespace wam_msgs
{

struct BHandGraspPos
{

typedef BHandGraspPosRequest Request;
typedef BHandGraspPosResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BHandGraspPos
} // namespace wam_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wam_msgs::BHandGraspPos > {
  static const char* value()
  {
    return "718158cfca4f89c6952f799c53697f42";
  }

  static const char* value(const ::wam_msgs::BHandGraspPos&) { return value(); }
};

template<>
struct DataType< ::wam_msgs::BHandGraspPos > {
  static const char* value()
  {
    return "wam_msgs/BHandGraspPos";
  }

  static const char* value(const ::wam_msgs::BHandGraspPos&) { return value(); }
};


// service_traits::MD5Sum< ::wam_msgs::BHandGraspPosRequest> should match 
// service_traits::MD5Sum< ::wam_msgs::BHandGraspPos > 
template<>
struct MD5Sum< ::wam_msgs::BHandGraspPosRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::BHandGraspPos >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspPosRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::BHandGraspPosRequest> should match 
// service_traits::DataType< ::wam_msgs::BHandGraspPos > 
template<>
struct DataType< ::wam_msgs::BHandGraspPosRequest>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::BHandGraspPos >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspPosRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wam_msgs::BHandGraspPosResponse> should match 
// service_traits::MD5Sum< ::wam_msgs::BHandGraspPos > 
template<>
struct MD5Sum< ::wam_msgs::BHandGraspPosResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::BHandGraspPos >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspPosResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::BHandGraspPosResponse> should match 
// service_traits::DataType< ::wam_msgs::BHandGraspPos > 
template<>
struct DataType< ::wam_msgs::BHandGraspPosResponse>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::BHandGraspPos >::value();
  }
  static const char* value(const ::wam_msgs::BHandGraspPosResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WAM_MSGS_MESSAGE_BHANDGRASPPOS_H
