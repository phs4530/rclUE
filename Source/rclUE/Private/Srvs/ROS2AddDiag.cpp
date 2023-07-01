// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/srv/AddDiagnostics.srv - do not modify

#include "Srvs/ROS2AddDiag.h"

const rosidl_service_type_support_t* UROS2AddDiagSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(diagnostic_msgs, srv, AddDiagnostics);
}

void UROS2AddDiagSrv::Init()
{
    diagnostic_msgs__srv__AddDiagnostics_Request__init(&AddDiagnostics_req);
    diagnostic_msgs__srv__AddDiagnostics_Response__init(&AddDiagnostics_res);
}

void UROS2AddDiagSrv::Fini()
{
    diagnostic_msgs__srv__AddDiagnostics_Request__fini(&AddDiagnostics_req);
    diagnostic_msgs__srv__AddDiagnostics_Response__fini(&AddDiagnostics_res);
}

void UROS2AddDiagSrv::SetRequest(const FROSAddDiagReq& Request)
{
    Request.SetROS2(AddDiagnostics_req);
}

void UROS2AddDiagSrv::GetRequest(FROSAddDiagReq& Request) const
{
    Request.SetFromROS2(AddDiagnostics_req);
}

void UROS2AddDiagSrv::SetResponse(const FROSAddDiagRes& Response)
{
    Response.SetROS2(AddDiagnostics_res);
}

void UROS2AddDiagSrv::GetResponse(FROSAddDiagRes& Response) const
{
    Response.SetFromROS2(AddDiagnostics_res);
}

void* UROS2AddDiagSrv::GetRequest()
{
    return &AddDiagnostics_req;
}

void* UROS2AddDiagSrv::GetResponse()
{
    return &AddDiagnostics_res;
}

FString UROS2AddDiagSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2AddDiagSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
