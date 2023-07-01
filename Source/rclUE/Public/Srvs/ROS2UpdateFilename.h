// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/srv/UpdateFilename.srv - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "pcl_msgs/srv/update_filename.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

// Generated
#include "ROS2UpdateFilename.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSUpdateFilenameReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Filename;

    FROSUpdateFilenameReq()
    {
    }

    void SetFromROS2(const pcl_msgs__srv__UpdateFilename_Request& in_ros_data)
    {
        Filename = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.filename);
    }

    void SetROS2(pcl_msgs__srv__UpdateFilename_Request& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(Filename, out_ros_data.filename);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSUpdateFilenameRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bSuccess = false;

    FROSUpdateFilenameRes()
    {
    }

    void SetFromROS2(const pcl_msgs__srv__UpdateFilename_Response& in_ros_data)
    {
        bSuccess = in_ros_data.success;
    }

    void SetROS2(pcl_msgs__srv__UpdateFilename_Response& out_ros_data) const
    {
        out_ros_data.success = bSuccess;
    }
};

UCLASS()
class RCLUE_API UROS2UpdateFilenameSrv : public UROS2GenericSrv
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
    void SetRequest(const FROSUpdateFilenameReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSUpdateFilenameReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSUpdateFilenameRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSUpdateFilenameRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    pcl_msgs__srv__UpdateFilename_Request UpdateFilename_req;
    pcl_msgs__srv__UpdateFilename_Response UpdateFilename_res;
};
