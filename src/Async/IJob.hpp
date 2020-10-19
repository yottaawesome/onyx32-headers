#pragma once
#include <string>
#include <Windows.h>
#include "../Onyx32.hpp"

namespace Onyx32::Core::Async
{
	struct ONYXOBJECT IJob
	{
        virtual ~IJob() = 0;
        virtual void SetInformation(JOBOBJECT_EXTENDED_LIMIT_INFORMATION& jeli) = 0;
        virtual void AssignProcessToThisJob(const HANDLE process) = 0;
        virtual HANDLE GetHandle() = 0;
        virtual const std::wstring& GetName() const = 0;
        virtual void Close() = 0;
        virtual bool IsInheritable() const = 0;
		virtual void Free() = 0;
	};
}