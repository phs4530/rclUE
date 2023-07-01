// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/msg/ModelCoefficients.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "pcl_msgs/msg/model_coefficients.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2ModelCoefficients.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSModelCoefficients
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> Values;

    FROSModelCoefficients()
    {
    }

    void SetFromROS2(const pcl_msgs__msg__ModelCoefficients& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<float, float>(in_ros_data.values.data, Values, in_ros_data.values.size);
    }

    void SetROS2(pcl_msgs__msg__ModelCoefficients& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.values.data)
        {
            rosidl_runtime_c__float32__Sequence__fini(&out_ros_data.values);
        }
        if (!rosidl_runtime_c__float32__Sequence__init(&out_ros_data.values, Values.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.values  "));
        }
        UROS2Utils::ArrayUEToROSSequence<float, float>(Values, out_ros_data.values.data, Values.Num());
    }
};

UCLASS()
class RCLUE_API UROS2ModelCoefficientsMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSModelCoefficients& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSModelCoefficients& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    pcl_msgs__msg__ModelCoefficients model_coefficients_msg;
};
