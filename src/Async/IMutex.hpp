#pragma once
#include <string>
#include <Windows.h>
#include "../Onyx32.hpp"

namespace Onyx32::Core::Async
{
	struct ONYXOBJECT IMutex
	{
        virtual ~IMutex() = 0;
        virtual bool Lock(const DWORD waitTime) = 0;
        virtual bool SafeLock(const DWORD waitTime, const DWORD sleepTime) = 0;
        virtual void Unlock() = 0;
        virtual void Close() = 0;
		virtual void Free() = 0;
	};
}