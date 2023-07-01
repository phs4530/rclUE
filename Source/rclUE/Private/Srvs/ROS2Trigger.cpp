// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/srv/Trigger.srv - do not modify

#include "Srvs/ROS2Trigger.h"

const rosidl_service_type_support_t* UROS2TriggerSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, Trigger);
}

void UROS2TriggerSrv::Init()
{
    example_interfaces__srv__Trigger_Request__init(&Trigger_req);
    example_interfaces__srv__Trigger_Response__init(&Trigger_res);
}

void UROS2TriggerSrv::Fini()
{
    example_interfaces__srv__Trigger_Request__fini(&Trigger_req);
    example_interfaces__srv__Trigger_Response__fini(&Trigger_res);
}

void UROS2TriggerSrv::SetRequest(const FROSTriggerReq& Request)
{
    Request.SetROS2(Trigger_req);
}

void UROS2TriggerSrv::GetRequest(FROSTriggerReq& Request) const
{
    Request.SetFromROS2(Trigger_req);
}

void UROS2TriggerSrv::SetResponse(const FROSTriggerRes& Response)
{
    Response.SetROS2(Trigger_res);
}

void UROS2TriggerSrv::GetResponse(FROSTriggerRes& Response) const
{
    Response.SetFromROS2(Trigger_res);
}

void* UROS2TriggerSrv::GetRequest()
{
    return &Trigger_req;
}

void* UROS2TriggerSrv::GetResponse()
{
    return &Trigger_res;
}

FString UROS2TriggerSrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2TriggerSrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
