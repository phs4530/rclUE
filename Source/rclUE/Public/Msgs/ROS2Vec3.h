// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/msg/Vector3.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "geometry_msgs/msg/vector3.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2Vec3.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSVec3
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    double X = 0.f;

    UPROPERTY(EditAnywhere)
    double Y = 0.f;

    UPROPERTY(EditAnywhere)
    double Z = 0.f;

    FROSVec3()
    {
    }

    void SetFromROS2(const geometry_msgs__msg__Vector3& in_ros_data)
    {
        X = in_ros_data.x;

        Y = in_ros_data.y;

        Z = in_ros_data.z;
    }

    void SetROS2(geometry_msgs__msg__Vector3& out_ros_data) const
    {
        out_ros_data.x = X;

        out_ros_data.y = Y;

        out_ros_data.z = Z;
    }
};

UCLASS()
class RCLUE_API UROS2Vec3Msg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSVec3& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSVec3& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    geometry_msgs__msg__Vector3 vector3_msg;
};
