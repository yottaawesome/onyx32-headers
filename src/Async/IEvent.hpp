#pragma once
#include <string>
#include <Windows.h>
#include "../Onyx32.hpp"

namespace Onyx32::Core::Async
{
	struct ONYXOBJECT IEvent
	{
        virtual ~IEvent() = 0;
        virtual void Signal() = 0;
        virtual void Reset() = 0;
        virtual void WaitOnEvent() = 0;
        virtual bool WaitOnEvent(const DWORD millis, const bool alertable) = 0;
        virtual HANDLE Detach() = 0;
        virtual HANDLE GetHandle() const = 0;
        virtual void Close() = 0;
        virtual const std::wstring& GetName() const = 0;
		virtual void Free() = 0;
	};
}