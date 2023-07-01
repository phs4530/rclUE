// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt64MultiArray.msg - do not modify

#include "Msgs/ROS2UInt64MA.h"

#include "Kismet/GameplayStatics.h"

void UROS2UInt64MAMsg::Init()
{
    example_interfaces__msg__UInt64MultiArray__init(&u_int64_multi_array_msg);
}

void UROS2UInt64MAMsg::Fini()
{
    example_interfaces__msg__UInt64MultiArray__fini(&u_int64_multi_array_msg);
}

const rosidl_message_type_support_t* UROS2UInt64MAMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, UInt64MultiArray);
}

void UROS2UInt64MAMsg::SetMsg(const FROSUInt64MA& Inputs)
{
    Inputs.SetROS2(u_int64_multi_array_msg);
}

void UROS2UInt64MAMsg::GetMsg(FROSUInt64MA& Outputs) const
{
    Outputs.SetFromROS2(u_int64_multi_array_msg);
}

void* UROS2UInt64MAMsg::Get()
{
    return &u_int64_multi_array_msg;
}

FString UROS2UInt64MAMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
