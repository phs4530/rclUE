// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/PointCloud.msg - do not modify

#pragma once

#include "CoreMinimal.h"

#include "sensor_msgs/msg/point_cloud.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PointCloudMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> points_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> points_y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> points_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> channels_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> channels_values;

	

	void SetFromROS2(sensor_msgs__msg__PointCloud rosdata)
	{
    	header_stamp_sec = rosdata.header.stamp.sec;

		header_stamp_nanosec = rosdata.header.stamp.nanosec;

		header_frame_id.AppendChars(rosdata.header.frame_id.data, rosdata.header.frame_id.size);

		for (int i = 0; i < rosdata.points.size; i++)
		{
			points_x[i] = rosdata.points.data[i].x;
		}

		for (int i = 0; i < rosdata.points.size; i++)
		{
			points_y[i] = rosdata.points.data[i].y;
		}

		for (int i = 0; i < rosdata.points.size; i++)
		{
			points_z[i] = rosdata.points.data[i].z;
		}

		for (int i = 0; i < rosdata.channels.size; i++)
		{
			channels_name[i].AppendChars(rosdata.channels.data[i].name.data,rosdata.channels.data[i].name.size);
		}

		for (int i = 0; i < rosdata.channels.size; i++)
		{
			channels_values[i] = rosdata.channels.data[i].values.data[i];
		}

		
	}

	void SetROS2(sensor_msgs__msg__PointCloud& rosdata) const
	{
    	rosdata.header.stamp.sec = header_stamp_sec;

		rosdata.header.stamp.nanosec = header_stamp_nanosec;

		if (rosdata.header.frame_id.data != nullptr)
		{
			free(rosdata.header.frame_id.data);
		}
		rosdata.header.frame_id.data = (decltype(rosdata.header.frame_id.data))malloc((header_frame_id.Len() + 1)*sizeof(decltype(*rosdata.header.frame_id.data)));
		memcpy(rosdata.header.frame_id.data, TCHAR_TO_ANSI(*header_frame_id), (header_frame_id.Len()+1)*sizeof(char));
		rosdata.header.frame_id.size = header_frame_id.Len();
		rosdata.header.frame_id.capacity = header_frame_id.Len() + 1;

		if (rosdata.points.data != nullptr)
		{
			free(rosdata.points.data);
		}
		rosdata.points.data = (decltype(rosdata.points.data))malloc((points_x.Num())*sizeof(decltype(*rosdata.points.data)));
		
		for (int i = 0; i < points_x.Num(); i++)
		{
			rosdata.points.data[i].x = points_x[i];
		}

		rosdata.points.size = points_x.Num();
		rosdata.points.capacity = points_x.Num();

		if (rosdata.points.data != nullptr)
		{
			free(rosdata.points.data);
		}
		rosdata.points.data = (decltype(rosdata.points.data))malloc((points_y.Num())*sizeof(decltype(*rosdata.points.data)));
		
		for (int i = 0; i < points_y.Num(); i++)
		{
			rosdata.points.data[i].y = points_y[i];
		}

		rosdata.points.size = points_y.Num();
		rosdata.points.capacity = points_y.Num();

		if (rosdata.points.data != nullptr)
		{
			free(rosdata.points.data);
		}
		rosdata.points.data = (decltype(rosdata.points.data))malloc((points_z.Num())*sizeof(decltype(*rosdata.points.data)));
		
		for (int i = 0; i < points_z.Num(); i++)
		{
			rosdata.points.data[i].z = points_z[i];
		}

		rosdata.points.size = points_z.Num();
		rosdata.points.capacity = points_z.Num();

		for (int i = 0; i < channels_name.Num(); i++)
		{
			if (rosdata.channels.data != nullptr)
			{
				free(rosdata.channels.data);
			}
			rosdata.channels.data[i].name.data = (char*)malloc((channels_name[i].Len()+1)*sizeof(char));
			memcpy(rosdata.channels.data[i].name.data, TCHAR_TO_ANSI(*channels_name[i]), (channels_name[i].Len()+1)*sizeof(char));
			rosdata.channels.size = channels_name[i].Len();
			rosdata.channels.capacity = channels_name[i].Len() + 1;
		}

		if (rosdata.channels.data != nullptr)
		{
			free(rosdata.channels.data);
		}
		rosdata.channels.data = (decltype(rosdata.channels.data))malloc((channels_values.Num())*sizeof(decltype(*rosdata.channels.data)));
		
		for (int i = 0; i < channels_values.Num(); i++)
		{
			rosdata.channels.data[i].values.data[i] = channels_values[i];
		}

		rosdata.channels.size = channels_values.Num();
		rosdata.channels.capacity = channels_values.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2PointCloudMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPointCloud Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPointCloud& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	sensor_msgs__msg__PointCloud point_cloud_msg;
};