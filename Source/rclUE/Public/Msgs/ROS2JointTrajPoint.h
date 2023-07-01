// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from trajectory_msgs/msg/JointTrajectoryPoint.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "trajectory_msgs/msg/joint_trajectory_point.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Duration.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2JointTrajPoint.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJointTrajPoint
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    TArray<double> Positions;

    UPROPERTY(EditAnywhere)
    TArray<double> Velocities;

    UPROPERTY(EditAnywhere)
    TArray<double> Accelerations;

    UPROPERTY(EditAnywhere)
    TArray<double> Effort;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSDuration TimeFromStart;

    FROSJointTrajPoint()
    {
    }

    void SetFromROS2(const trajectory_msgs__msg__JointTrajectoryPoint& in_ros_data)
    {
        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.positions.data, Positions, in_ros_data.positions.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.velocities.data, Velocities, in_ros_data.velocities.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(
            in_ros_data.accelerations.data, Accelerations, in_ros_data.accelerations.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.effort.data, Effort, in_ros_data.effort.size);

        TimeFromStart.SetFromROS2(in_ros_data.time_from_start);
    }

    void SetROS2(trajectory_msgs__msg__JointTrajectoryPoint& out_ros_data) const
    {
        if (out_ros_data.positions.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.positions);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.positions, Positions.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.positions  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Positions, out_ros_data.positions.data, Positions.Num());

        if (out_ros_data.velocities.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.velocities);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.velocities, Velocities.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.velocities  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Velocities, out_ros_data.velocities.data, Velocities.Num());

        if (out_ros_data.accelerations.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.accelerations);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.accelerations, Accelerations.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.accelerations  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Accelerations, out_ros_data.accelerations.data, Accelerations.Num());

        if (out_ros_data.effort.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.effort);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.effort, Effort.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.effort  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Effort, out_ros_data.effort.data, Effort.Num());

        TimeFromStart.SetROS2(out_ros_data.time_from_start);
    }
};

UCLASS()
class RCLUE_API UROS2JointTrajPointMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJointTrajPoint& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJointTrajPoint& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    trajectory_msgs__msg__JointTrajectoryPoint joint_trajectory_point_msg;
};
