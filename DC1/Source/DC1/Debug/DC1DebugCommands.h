// Fill out your copyright notice in the Description page of Project Settings.
// 디버그 콘솔 명령 ( DC1DebugCommands.cpp ). Shipping 빌드에서는 없다

#pragma once

#include "CoreMinimal.h"

class APlayerController;

#if !UE_BUILD_SHIPPING
namespace DC1DebugCommands
{
	// 별도 프로세스 클라가 보낸 DC1.* 명령을 서버에서 그 플레이어 기준으로 실행한다
	void ExecuteForPlayer(APlayerController* InCaller, const FString& InCommand);
}
#endif
