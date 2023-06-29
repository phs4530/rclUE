// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from action_msgs/msg/GoalInfo.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "action_msgs/msg/goal_info.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Time.h"
#include "Msgs/ROS2UUID.h"

// Generated
#include "ROS2GoalInfo.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSGoalInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID GoalId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSTime Stamp;

    FROSGoalInfo()
    {
    }

    void SetFromROS2(const action_msgs__msg__GoalInfo& in_ros_data)
    {
        GoalId.SetFromROS2(in_ros_data.goal_id);

        Stamp.SetFromROS2(in_ros_data.stamp);
    }

    void SetROS2(action_msgs__msg__GoalInfo& out_ros_data) const
    {
        GoalId.SetROS2(out_ros_data.goal_id);

        Stamp.SetROS2(out_ros_data.stamp);
    }
};

UCLASS()
class RCLUE_API UROS2GoalInfoMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGoalInfo& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGoalInfo& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    action_msgs__msg__GoalInfo goal_info_msg;
};
