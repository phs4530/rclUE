// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from shape_msgs/msg/SolidPrimitive.msg - do not modify

#include "Msgs/ROS2SolidPrimitive.h"

#include "Kismet/GameplayStatics.h"

void UROS2SolidPrimitiveMsg::Init()
{
    shape_msgs__msg__SolidPrimitive__init(&solid_primitive_msg);
}

void UROS2SolidPrimitiveMsg::Fini()
{
    shape_msgs__msg__SolidPrimitive__fini(&solid_primitive_msg);
}

const rosidl_message_type_support_t* UROS2SolidPrimitiveMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(shape_msgs, msg, SolidPrimitive);
}

void UROS2SolidPrimitiveMsg::SetMsg(const FROSSolidPrimitive& Inputs)
{
    Inputs.SetROS2(solid_primitive_msg);
}

void UROS2SolidPrimitiveMsg::GetMsg(FROSSolidPrimitive& Outputs) const
{
    Outputs.SetFromROS2(solid_primitive_msg);
}

void* UROS2SolidPrimitiveMsg::Get()
{
    return &solid_primitive_msg;
}

FString UROS2SolidPrimitiveMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
