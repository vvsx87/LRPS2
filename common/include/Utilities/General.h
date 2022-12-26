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

#pragma once

#include <atomic>

// This macro is actually useful for about any and every possible application of C++
// equality operators.
#define OpEqu(field) (field == right.field)

// Macro used for removing some of the redtape involved in defining bitfield/union helpers.
//
#define BITFIELD32() \
    union            \
    {                \
        u32 bitset;  \
        struct       \
        {

#define BITFIELD_END \
    }                \
    ;                \
    }                \
    ;

// --------------------------------------------------------------------------------------
//  ICloneable
// --------------------------------------------------------------------------------------
class ICloneable
{
public:
    virtual ICloneable *Clone() const = 0;
};

// --------------------------------------------------------------------------------------
//  BaseDeletableObject
// --------------------------------------------------------------------------------------
// Oh the fruits and joys of multithreaded C++ coding conundrums!  This class provides a way
// to be deleted from arbitraty threads, or to delete themselves (which is considered unsafe
// in C++, though it does typically work).  It also gives objects a second recourse for
// doing fully virtualized cleanup, something C++ also makes impossible because of how it
// implements it's destructor hierarchy.
//
// Assertions:
//   This class generates an assertion of the destructor is called from anything other than
//   the main/gui thread.
//
// Rationale:
//   wxWidgets provides a pending deletion feature, but it's specific to wxCore (not wxBase)
//   which means it requires wxApp and all that, which is bad for plugins and the possibility
//   of linking PCSX2 core against a non-WX gui in the future.  It's also not thread safe
//   (sigh).  And, finally, it requires quite a bit of red tape to implement wxObjects because
//   of the wx-custom runtime type information.  So I made my own.
//
class BaseDeletableObject{
public:
    BaseDeletableObject();
    virtual ~BaseDeletableObject();
};

// --------------------------------------------------------------------------------------
//  PageProtectionMode
// --------------------------------------------------------------------------------------
class PageProtectionMode
{
protected:
    bool m_read;
    bool m_write;
    bool m_exec;

public:
    PageProtectionMode()
    {
        All(false);
    }

    PageProtectionMode &Read(bool allow = true)
    {
        m_read = allow;
        return *this;
    }

    PageProtectionMode &Write(bool allow = true)
    {
        m_write = allow;
        return *this;
    }

    PageProtectionMode &Execute(bool allow = true)
    {
        m_exec = allow;
        return *this;
    }

    PageProtectionMode &All(bool allow = true)
    {
        m_read = m_write = m_exec = allow;
        return *this;
    }

    bool CanRead() const { return m_read; }
    bool CanWrite() const { return m_write; }
    bool CanExecute() const { return m_exec && m_read; }
    bool IsNone() const { return !m_read && !m_write; }
};

static __fi PageProtectionMode PageAccess_None(void)
{
    return PageProtectionMode();
}

static __fi PageProtectionMode PageAccess_ReadOnly(void)
{
    return PageProtectionMode().Read();
}

static __fi PageProtectionMode PageAccess_ReadWrite(void)
{
    return PageAccess_ReadOnly().Write();
}

static __fi PageProtectionMode PageAccess_ExecOnly(void)
{
    return PageAccess_ReadOnly().Execute();
}

static __fi PageProtectionMode PageAccess_Any(void)
{
    return PageProtectionMode().All();
}

// --------------------------------------------------------------------------------------
//  HostSys
// --------------------------------------------------------------------------------------
// (this namespace name sucks, and is a throw-back to an older attempt to make things cross
// platform prior to wxWidgets .. it should prolly be removed -- air)
namespace HostSys
{
void *MmapReserve(uptr base, size_t size);

bool MmapCommitPtr(void *base, size_t size, const PageProtectionMode &mode);
void MmapResetPtr(void *base, size_t size);

// Unmaps a block allocated by SysMmap
extern void Munmap(uptr base, size_t size);

extern void MemProtect(void *baseaddr, size_t size, const PageProtectionMode &mode);

extern void Munmap(void *base, size_t size);

template <uint size>
void MemProtectStatic(u8 (&arr)[size], const PageProtectionMode &mode)
{
    MemProtect(arr, size, mode);
}

}
