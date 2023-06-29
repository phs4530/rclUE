// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/UInt16MultiArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/u_int16_multi_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MALayout.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2UInt16MA.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSUInt16MA
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMALayout Layout;

    UPROPERTY(EditAnywhere)
    TArray<uint16> Data;

    FROSUInt16MA()
    {
    }

    void SetFromROS2(const example_interfaces__msg__UInt16MultiArray& in_ros_data)
    {
        Layout.SetFromROS2(in_ros_data.layout);

        UROS2Utils::SequenceROSToUEArray<uint16, uint16>(in_ros_data.data.data, Data, in_ros_data.data.size);
    }

    void SetROS2(example_interfaces__msg__UInt16MultiArray& out_ros_data) const
    {
        Layout.SetROS2(out_ros_data.layout);

        if (out_ros_data.data.data)
        {
            rosidl_runtime_c__uint16__Sequence__fini(&out_ros_data.data);
        }
        if (!rosidl_runtime_c__uint16__Sequence__init(&out_ros_data.data, Data.Num()))
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));
        }
        UROS2Utils::ArrayUEToROSSequence<uint16, uint16>(Data, out_ros_data.data.data, Data.Num());
    }
};

UCLASS()
class RCLUE_API UROS2UInt16MAMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSUInt16MA& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSUInt16MA& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__UInt16MultiArray u_int16_multi_array_msg;
};
