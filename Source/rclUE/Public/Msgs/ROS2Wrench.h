// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Wrench.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/wrench.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Wrench.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSWrench
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Force = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Torque = FVector::ZeroVector;

    FROSWrench()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Wrench& in_ros_data)
    {
        Force = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.force);

        Torque = UROS2Utils::VectorROSToUE<geometry_msgs__msg__Vector3>(in_ros_data.torque);
    }

    void SetROS2(geometry_msgs__msg__Wrench& out_ros_data) const
    {
        out_ros_data.force = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Force);

        out_ros_data.torque = UROS2Utils::VectorUEToROS<geometry_msgs__msg__Vector3>(Torque);
    }
};

UCLASS()
class RCLUE_API UROS2WrenchMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSWrench& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSWrench& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Wrench wrench_msg;
};
