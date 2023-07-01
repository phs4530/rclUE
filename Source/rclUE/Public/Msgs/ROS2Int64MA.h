// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int64MultiArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/int64_multi_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MALayout.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2Int64MA.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt64MA
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMALayout Layout;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int64> Data;

    FROSInt64MA()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Int64MultiArray& in_ros_data)
    {
        Layout.SetFromROS2(in_ros_data.layout);

        UROS2Utils::SequenceROSToUEArray<int64_t, int64>(in_ros_data.data.data, Data, in_ros_data.data.size);
    }

    void SetROS2(example_interfaces__msg__Int64MultiArray& out_ros_data) const
    {
        Layout.SetROS2(out_ros_data.layout);

        if (out_ros_data.data.data)
        {
            rosidl_runtime_c__int64__Sequence__fini(&out_ros_data.data);
        }
        if (!rosidl_runtime_c__int64__Sequence__init(&out_ros_data.data, Data.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.data  "));
        }
        UROS2Utils::ArrayUEToROSSequence<int64_t, int64>(Data, out_ros_data.data.data, Data.Num());
    }
};

UCLASS()
class RCLUE_API UROS2Int64MAMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInt64MA& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInt64MA& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Int64MultiArray int64_multi_array_msg;
};
