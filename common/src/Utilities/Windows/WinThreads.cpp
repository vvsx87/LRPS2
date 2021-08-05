/*  PCSX2 - PS2 Emulator for PCs
 *  Copyright (C) 2002-2010  PCSX2 Dev Team
 *
 *  PCSX2 is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with PCSX2.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "PrecompiledHeader.h"
#include "RedtapeWindows.h"
#include "x86emitter/tools.h"
#include "PersistentThread.h"

#ifndef __WXMSW__

#pragma message("WinThreads.cpp should only be compiled by projects or makefiles targeted at Microsoft Windows.")

#else

__fi void Threading::Sleep(int ms)
{
    ::Sleep(ms);
}

// For use in spin/wait loops,  Acts as a hint to Intel CPUs and should, in theory
// improve performance and reduce cpu power consumption.
__fi void Threading::SpinWait()
{
    _mm_pause();
}

void Threading::pxThread::_platform_specific_OnStartInThread()
{
    // OpenThread Note: Vista and Win7 need only THREAD_QUERY_LIMITED_INFORMATION (XP and 2k need more),
    // however we own our process threads, so shouldn't matter in any case...

    m_native_id = (uptr)GetCurrentThreadId();
    m_native_handle = (uptr)OpenThread(THREAD_QUERY_INFORMATION, false, (DWORD)m_native_id);

    pxAssertDev(m_native_handle, wxNullChar);
}

void Threading::pxThread::_platform_specific_OnCleanupInThread()
{
    CloseHandle((HANDLE)m_native_handle);
}

void Threading::pxThread::_DoSetThreadName(const char *name)
{
// This feature needs Windows headers and MSVC's SEH support:

#if defined(_WIN32) && defined(_MSC_VER)

    // This code sample was borrowed form some obscure MSDN article.
    // In a rare bout of sanity, it's an actual Microsoft-published hack
    // that actually works!

    static const int MS_VC_EXCEPTION = 0x406D1388;

#pragma pack(push, 8)
    struct THREADNAME_INFO
    {
        DWORD dwType;     // Must be 0x1000.
        LPCSTR szName;    // Pointer to name (in user addr space).
        DWORD dwThreadID; // Thread ID (-1=caller thread).
        DWORD dwFlags;    // Reserved for future use, must be zero.
    };
#pragma pack(pop)

    THREADNAME_INFO info;
    info.dwType = 0x1000;
    info.szName = name;
    info.dwThreadID = GetCurrentThreadId();
    info.dwFlags = 0;

    __try {
        RaiseException(MS_VC_EXCEPTION, 0, sizeof(info) / sizeof(ULONG_PTR), (ULONG_PTR *)&info);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
    }
#endif
}

#endif
