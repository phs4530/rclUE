// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from std_srvs/srv/Empty.srv - do not modify

#include "Srvs/ROS2StdSrvEmpty.h"

const rosidl_service_type_support_t* UROS2StdSrvEmptySrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(std_srvs, srv, Empty);
}

void UROS2StdSrvEmptySrv::Init()
{
    std_srvs__srv__Empty_Request__init(&Empty_req);
    std_srvs__srv__Empty_Response__init(&Empty_res);
}

void UROS2StdSrvEmptySrv::Fini()
{
    std_srvs__srv__Empty_Request__fini(&Empty_req);
    std_srvs__srv__Empty_Response__fini(&Empty_res);
}

void UROS2StdSrvEmptySrv::SetRequest(const FROSStdSrvEmptyReq& Request)
{
    Request.SetROS2(Empty_req);
}

void UROS2StdSrvEmptySrv::GetRequest(FROSStdSrvEmptyReq& Request) const
{
    Request.SetFromROS2(Empty_req);
}

void UROS2StdSrvEmptySrv::SetResponse(const FROSStdSrvEmptyRes& Response)
{
    Response.SetROS2(Empty_res);
}

void UROS2StdSrvEmptySrv::GetResponse(FROSStdSrvEmptyRes& Response) const
{
    Response.SetFromROS2(Empty_res);
}

void* UROS2StdSrvEmptySrv::GetRequest()
{
    return &Empty_req;
}

void* UROS2StdSrvEmptySrv::GetResponse()
{
    return &Empty_res;
}

FString UROS2StdSrvEmptySrv::SrvRequestToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}

FString UROS2StdSrvEmptySrv::SrvResponseToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
