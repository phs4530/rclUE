// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/JointTrajectory.msg - do not modify

#include "Msgs/ROS2JointTraj.h"

#include "Kismet/GameplayStatics.h"

void UROS2JointTrajMsg::Init()
{
    trajectory_msgs__msg__JointTrajectory__init(&joint_trajectory_msg);
}

void UROS2JointTrajMsg::Fini()
{
    trajectory_msgs__msg__JointTrajectory__fini(&joint_trajectory_msg);
}

const rosidl_message_type_support_t* UROS2JointTrajMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(trajectory_msgs, msg, JointTrajectory);
}

void UROS2JointTrajMsg::SetMsg(const FROSJointTraj& Inputs)
{
    Inputs.SetROS2(joint_trajectory_msg);
}

void UROS2JointTrajMsg::GetMsg(FROSJointTraj& Outputs) const
{
    Outputs.SetFromROS2(joint_trajectory_msg);
}

void* UROS2JointTrajMsg::Get()
{
    return &joint_trajectory_msg;
}

FString UROS2JointTrajMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
