// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from ue_msgs/srv/DeleteEntity.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "ue_msgs/srv/delete_entity.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2DeleteEntity.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSDeleteEntityReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    FROSDeleteEntityReq()
    {
    }

    void SetFromROS2(const ue_msgs__srv__DeleteEntity_Request& in_ros_data)
    {
        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);
    }

    void SetROS2(ue_msgs__srv__DeleteEntity_Request& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Name, out_ros_data.name);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSDeleteEntityRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString StatusMessage;

    FROSDeleteEntityRes()
    {
    }

    void SetFromROS2(const ue_msgs__srv__DeleteEntity_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;

        StatusMessage = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.status_message);
    }

    void SetROS2(ue_msgs__srv__DeleteEntity_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;

        UROS2Utils::StringUEToROS(StatusMessage, out_ros_data.status_message);
    }
};

UCLASS()
class RCLUE_API UROS2DeleteEntitySrv : public UROS2GenericSrv
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    virtual void Fini() override;

    virtual const rosidl_service_type_support_t* GetTypeSupport() const override;

    // used by client
    UFUNCTION(BlueprintCallable)
    void SetRequest(const FROSDeleteEntityReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSDeleteEntityReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSDeleteEntityRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSDeleteEntityRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    ue_msgs__srv__DeleteEntity_Request DeleteEntity_req;
    ue_msgs__srv__DeleteEntity_Response DeleteEntity_res;
};
