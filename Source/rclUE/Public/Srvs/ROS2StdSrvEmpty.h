// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_srvs/srv/Empty.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "std_srvs/srv/empty.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2StdSrvEmpty.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSStdSrvEmptyReq
{
    GENERATED_BODY()

public:
    FROSStdSrvEmptyReq()
    {
    }

    void SetFromROS2(const std_srvs__srv__Empty_Request& in_ros_data)
    {
    }

    void SetROS2(std_srvs__srv__Empty_Request& out_ros_data) const
    {
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSStdSrvEmptyRes
{
    GENERATED_BODY()

public:
    FROSStdSrvEmptyRes()
    {
    }

    void SetFromROS2(const std_srvs__srv__Empty_Response& in_ros_data)
    {
    }

    void SetROS2(std_srvs__srv__Empty_Response& out_ros_data) const
    {
    }
};

UCLASS()
class RCLUE_API UROS2StdSrvEmptySrv : public UROS2GenericSrv
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
    void SetRequest(const FROSStdSrvEmptyReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSStdSrvEmptyReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSStdSrvEmptyRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSStdSrvEmptyRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    std_srvs__srv__Empty_Request Empty_req;
    std_srvs__srv__Empty_Response Empty_res;
};
