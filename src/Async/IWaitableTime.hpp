#pragma once
#include <Windows.h>
#include <string>
#include "../Onyx32.hpp"

namespace Onyx32::Core::Async
{
	struct ONYXOBJECT IWaitableTimer
	{
        virtual ~IWaitableTimer() = 0;
        virtual void SetTimerInNanos(
            const int64_t hundredNanosecondIntervals, 
            const UINT period,
            const PTIMERAPCROUTINE callback,
            void* param
        ) = 0;
        virtual void SetTimerInMillis(
            const int64_t milliseconds, 
            const UINT period,
            const PTIMERAPCROUTINE callback,
            void* param
        ) = 0;
        virtual bool WaitOnTimer(const DWORD millis) = 0;
        virtual bool CancelTimer() = 0;
        virtual bool IsManualReset() const = 0;
        virtual const std::wstring& GetName() const = 0;
        virtual HANDLE GetHandle() const = 0;
        virtual void Close() = 0;
		virtual void Free() = 0;
	};
}