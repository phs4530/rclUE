// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/Odometry.msg - do not modify

#include "Msgs/ROS2Odom.h"

#include "Kismet/GameplayStatics.h"

void UROS2OdomMsg::Init()
{
    nav_msgs__msg__Odometry__init(&odometry_msg);
}

void UROS2OdomMsg::Fini()
{
    nav_msgs__msg__Odometry__fini(&odometry_msg);
}

const rosidl_message_type_support_t* UROS2OdomMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry);
}

void UROS2OdomMsg::SetMsg(const FROSOdom& Inputs)
{
    Inputs.SetROS2(odometry_msg);
}

void UROS2OdomMsg::GetMsg(FROSOdom& Outputs) const
{
    Outputs.SetFromROS2(odometry_msg);
}

void* UROS2OdomMsg::Get()
{
    return &odometry_msg;
}

FString UROS2OdomMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
