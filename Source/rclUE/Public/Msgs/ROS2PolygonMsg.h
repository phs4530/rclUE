// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Polygon.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "geometry_msgs/msg/polygon.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PolygonMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPolygon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> points;

	

	void SetFromROS2(geometry_msgs__msg__Polygon rosdata)
	{
    	for (int i = 0; i < rosdata.points.size; i++)
		{
			points[i].X = rosdata.points.data[i].x;
			points[i].Y = rosdata.points.data[i].y;
			points[i].Z = rosdata.points.data[i].z;
		}

		
	}

	void SetROS2(geometry_msgs__msg__Polygon& rosdata) const
	{
    	if (rosdata.points.data != nullptr)
		{
			free(rosdata.points.data);
		}
		rosdata.points.data = (decltype(rosdata.points.data))malloc((points.Num() * 3)*sizeof(decltype(*rosdata.points.data)));
		
		for (int i = 0; i < points.Num(); i++)
		{
			rosdata.points.data[i].x = points[i].X;
			rosdata.points.data[i].y = points[i].Y;
			rosdata.points.data[i].z = points[i].Z;
		}

		rosdata.points.size = points.Num();
		rosdata.points.capacity = points.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2PolygonMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPolygon Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPolygon& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Polygon polygon_msg;
};