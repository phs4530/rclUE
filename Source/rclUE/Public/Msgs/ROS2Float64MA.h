// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Float64MultiArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/float64_multi_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MALayout.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2Float64MA.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat64MA
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMALayout Layout;

    UPROPERTY(EditAnywhere)
    TArray<double> Data;

    FROSFloat64MA()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Float64MultiArray& in_ros_data)
    {
        Layout.SetFromROS2(in_ros_data.layout);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.data.data, Data, in_ros_data.data.size);
    }

    void SetROS2(example_interfaces__msg__Float64MultiArray& out_ros_data) const
    {
        Layout.SetROS2(out_ros_data.layout);

        if (out_ros_data.data.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.data);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.data, Data.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Data, out_ros_data.data.data, Data.Num());
    }
};

UCLASS()
class RCLUE_API UROS2Float64MAMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFloat64MA& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFloat64MA& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Float64MultiArray float64_multi_array_msg;
};
