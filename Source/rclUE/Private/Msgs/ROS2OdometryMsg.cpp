// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/Odometry.msg - do not modify

#include "Msgs/ROS2OdometryMsg.h"

#include "Kismet/GameplayStatics.h"

void UROS2OdometryMsg::Init()
{
	nav_msgs__msg__Odometry__init(&odometry_msg);
}

void UROS2OdometryMsg::Fini()
{
	nav_msgs__msg__Odometry__fini(&odometry_msg);
}

const rosidl_message_type_support_t* UROS2OdometryMsg::GetTypeSupport() const
{
	return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry);
}

void UROS2OdometryMsg::SetMsg(const FROSOdometry& Inputs)
{
    Inputs.SetROS2(odometry_msg);
}

void UROS2OdometryMsg::GetMsg(FROSOdometry& Outputs) const
{
    Outputs.SetFromROS2(odometry_msg);
}

void* UROS2OdometryMsg::Get()
{
	return &odometry_msg;
}

FString UROS2OdometryMsg::MsgToString() const
{
    return FString::Printf(TEXT("Odometry:\n\tStamp: %ds %dns\n\tFrame ID %s\n\tChild Frame ID %s\n\tPosition %f %f %f\n\tOrientation %f %f %f %f\n\tTwist linear %f %f %f\n\tTwist angular %f %f %f"),
		odometry_msg.header.stamp.sec,
		odometry_msg.header.stamp.nanosec,
		odometry_msg.header.frame_id.data,
		odometry_msg.child_frame_id.data,
		odometry_msg.pose.pose.position.x,
		odometry_msg.pose.pose.position.y,
		odometry_msg.pose.pose.position.z,
		odometry_msg.pose.pose.orientation.x,
		odometry_msg.pose.pose.orientation.y,
		odometry_msg.pose.pose.orientation.z,
		odometry_msg.pose.pose.orientation.w,
		odometry_msg.twist.twist.linear.x,
		odometry_msg.twist.twist.linear.y,
		odometry_msg.twist.twist.linear.z,
		odometry_msg.twist.twist.angular.x,
		odometry_msg.twist.twist.angular.y,
		odometry_msg.twist.twist.angular.z);
}