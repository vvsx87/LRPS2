/////////////////////////////////////////////////////////////////////////////
// Name:        wx/utils.h
// Purpose:     Miscellaneous utilities
// Author:      Julian Smart
// Modified by:
// Created:     29/01/98
// Copyright:   (c) 1998 Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_UTILS_H_
#define _WX_UTILS_H_

// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

#include "wx/object.h"
#include "wx/list.h"
#include "wx/filefn.h"
#include "wx/hashmap.h"
#include "wx/versioninfo.h"
#include "wx/meta/implicitconversion.h"

class WXDLLIMPEXP_FWD_BASE wxArrayString;
class WXDLLIMPEXP_FWD_BASE wxArrayInt;

// need this for wxGetDiskSpace() as we can't, unfortunately, forward declare
// wxLongLong
#include "wx/longlong.h"

// needed for wxOperatingSystemId, wxLinuxDistributionInfo
#include "wx/platinfo.h"

#ifdef __WATCOMC__
    #include <direct.h>
#elif defined(__X__)
    #include <dirent.h>
    #include <unistd.h>
#endif

#include <stdio.h>

// ----------------------------------------------------------------------------
// Forward declaration
// ----------------------------------------------------------------------------

class WXDLLIMPEXP_FWD_CORE wxFrame;
class WXDLLIMPEXP_FWD_CORE wxWindow;
class wxWindowList;
class WXDLLIMPEXP_FWD_CORE wxEventLoop;

// ----------------------------------------------------------------------------
// Arithmetic functions
// ----------------------------------------------------------------------------

template<typename T1, typename T2>
inline typename wxImplicitConversionType<T1,T2>::value
wxMax(T1 a, T2 b)
{
    typedef typename wxImplicitConversionType<T1,T2>::value ResultType;

    // Cast both operands to the same type before comparing them to avoid
    // warnings about signed/unsigned comparisons from some compilers:
    return static_cast<ResultType>(a) > static_cast<ResultType>(b) ? a : b;
}

template<typename T1, typename T2>
inline typename wxImplicitConversionType<T1,T2>::value
wxMin(T1 a, T2 b)
{
    typedef typename wxImplicitConversionType<T1,T2>::value ResultType;

    return static_cast<ResultType>(a) < static_cast<ResultType>(b) ? a : b;
}

template<typename T1, typename T2, typename T3>
inline typename wxImplicitConversionType3<T1,T2,T3>::value
wxClip(T1 a, T2 b, T3 c)
{
    typedef typename wxImplicitConversionType3<T1,T2,T3>::value ResultType;

    if ( static_cast<ResultType>(a) < static_cast<ResultType>(b) )
        return b;

    if ( static_cast<ResultType>(a) > static_cast<ResultType>(c) )
        return c;

    return a;
}

// ----------------------------------------------------------------------------
// wxMemorySize
// ----------------------------------------------------------------------------

// wxGetFreeMemory can return huge amount of memory on 32-bit platforms as well
// so to always use long long for its result type on all platforms which
// support it
#if wxUSE_LONGLONG
    typedef wxLongLong wxMemorySize;
#else
    typedef long wxMemorySize;
#endif

// ----------------------------------------------------------------------------
// String functions (deprecated, use wxString)
// ----------------------------------------------------------------------------

#if WXWIN_COMPATIBILITY_2_8
// A shorter way of using strcmp
wxDEPRECATED_INLINE(inline bool wxStringEq(const char *s1, const char *s2),
    return wxCRT_StrcmpA(s1, s2) == 0; )

#if wxUSE_UNICODE
wxDEPRECATED_INLINE(inline bool wxStringEq(const wchar_t *s1, const wchar_t *s2),
    return wxCRT_StrcmpW(s1, s2) == 0; )
#endif // wxUSE_UNICODE

#endif // WXWIN_COMPATIBILITY_2_8

// ----------------------------------------------------------------------------
// Miscellaneous functions
// ----------------------------------------------------------------------------

// Get OS description as a user-readable string
WXDLLIMPEXP_BASE wxString wxGetOsDescription();

// Get OS version
WXDLLIMPEXP_BASE wxOperatingSystemId wxGetOsVersion(int *majorVsn = NULL,
                                                    int *minorVsn = NULL);

// Get platform endianness
WXDLLIMPEXP_BASE bool wxIsPlatformLittleEndian();

// Get platform architecture
WXDLLIMPEXP_BASE bool wxIsPlatform64Bit();

#ifdef __LINUX__
// Get linux-distro informations
WXDLLIMPEXP_BASE wxLinuxDistributionInfo wxGetLinuxDistributionInfo();
#endif

// ----------------------------------------------------------------------------
// wxPlatform
// ----------------------------------------------------------------------------

/*
 * Class to make it easier to specify platform-dependent values
 *
 * Examples:
 *  long val = wxPlatform::If(wxMac, 1).ElseIf(wxGTK, 2).ElseIf(stPDA, 5).Else(3);
 *  wxString strVal = wxPlatform::If(wxMac, wxT("Mac")).ElseIf(wxMSW, wxT("MSW")).Else(wxT("Other"));
 *
 * A custom platform symbol:
 *
 *  #define stPDA 100
 *  #ifdef __WXWINCE__
 *      wxPlatform::AddPlatform(stPDA);
 *  #endif
 *
 *  long windowStyle = wxCAPTION | (long) wxPlatform::IfNot(stPDA, wxRESIZE_BORDER);
 *
 */

class WXDLLIMPEXP_BASE wxPlatform
{
public:
    wxPlatform() { Init(); }
    wxPlatform(const wxPlatform& platform) { Copy(platform); }
    void operator = (const wxPlatform& platform) { if (&platform != this) Copy(platform); }
    void Copy(const wxPlatform& platform);

    // Specify an optional default value
    wxPlatform(int defValue) { Init(); m_longValue = (long)defValue; }
    wxPlatform(long defValue) { Init(); m_longValue = defValue; }
    wxPlatform(const wxString& defValue) { Init(); m_stringValue = defValue; }
    wxPlatform(double defValue) { Init(); m_doubleValue = defValue; }

    static wxPlatform If(int platform, long value);
    static wxPlatform IfNot(int platform, long value);
    wxPlatform& ElseIf(int platform, long value);
    wxPlatform& ElseIfNot(int platform, long value);
    wxPlatform& Else(long value);

    static wxPlatform If(int platform, int value) { return If(platform, (long)value); }
    static wxPlatform IfNot(int platform, int value) { return IfNot(platform, (long)value); }
    wxPlatform& ElseIf(int platform, int value) { return ElseIf(platform, (long) value); }
    wxPlatform& ElseIfNot(int platform, int value) { return ElseIfNot(platform, (long) value); }
    wxPlatform& Else(int value) { return Else((long) value); }

    static wxPlatform If(int platform, double value);
    static wxPlatform IfNot(int platform, double value);
    wxPlatform& ElseIf(int platform, double value);
    wxPlatform& ElseIfNot(int platform, double value);
    wxPlatform& Else(double value);

    static wxPlatform If(int platform, const wxString& value);
    static wxPlatform IfNot(int platform, const wxString& value);
    wxPlatform& ElseIf(int platform, const wxString& value);
    wxPlatform& ElseIfNot(int platform, const wxString& value);
    wxPlatform& Else(const wxString& value);

    long GetInteger() const { return m_longValue; }
    const wxString& GetString() const { return m_stringValue; }
    double GetDouble() const { return m_doubleValue; }

    operator int() const { return (int) GetInteger(); }
    operator long() const { return GetInteger(); }
    operator double() const { return GetDouble(); }
    operator const wxString&() const { return GetString(); }

    static void AddPlatform(int platform);
    static bool Is(int platform);
    static void ClearPlatforms();

private:

    void Init() { m_longValue = 0; m_doubleValue = 0.0; }

    long                m_longValue;
    double              m_doubleValue;
    wxString            m_stringValue;
    static wxArrayInt*  sm_customPlatforms;
};

/// Function for testing current platform
inline bool wxPlatformIs(int platform) { return wxPlatform::Is(platform); }

// ----------------------------------------------------------------------------
// Various conversions
// ----------------------------------------------------------------------------

// Convert 2-digit hex number to decimal
WXDLLIMPEXP_BASE int wxHexToDec(const wxString& buf);

// Convert 2-digit hex number to decimal
inline int wxHexToDec(const char* buf)
{
    int firstDigit, secondDigit;

    if (buf[0] >= 'A')
        firstDigit = buf[0] - 'A' + 10;
    else
        firstDigit = buf[0] - '0';

    if (buf[1] >= 'A')
        secondDigit = buf[1] - 'A' + 10;
    else
        secondDigit = buf[1] - '0';

    return (firstDigit & 0xF) * 16 + (secondDigit & 0xF );
}


// Convert decimal integer to 2-character hex string
WXDLLIMPEXP_BASE void wxDecToHex(int dec, wxChar *buf);
WXDLLIMPEXP_BASE void wxDecToHex(int dec, char* ch1, char* ch2);
WXDLLIMPEXP_BASE wxString wxDecToHex(int dec);

// ----------------------------------------------------------------------------
// Process management
// ----------------------------------------------------------------------------

// NB: for backwards compatibility reasons the values of wxEXEC_[A]SYNC *must*
//     be 0 and 1, don't change!

enum
{
    // execute the process asynchronously
    wxEXEC_ASYNC    = 0,

    // execute it synchronously, i.e. wait until it finishes
    wxEXEC_SYNC     = 1,

    // under Windows, don't hide the child even if it's IO is redirected (this
    // is done by default)
    wxEXEC_SHOW_CONSOLE   = 2,

    // deprecated synonym for wxEXEC_SHOW_CONSOLE, use the new name as it's
    // more clear
    wxEXEC_NOHIDE = wxEXEC_SHOW_CONSOLE,

    // under Unix, if the process is the group leader then passing wxKILL_CHILDREN to wxKill
    // kills all children as well as pid
    // under Windows (NT family only), sets the CREATE_NEW_PROCESS_GROUP flag,
    // which allows to target Ctrl-Break signal to the spawned process.
    // applies to console processes only.
    wxEXEC_MAKE_GROUP_LEADER = 4,

    // by default synchronous execution disables all program windows to avoid
    // that the user interacts with the program while the child process is
    // running, you can use this flag to prevent this from happening
    wxEXEC_NODISABLE = 8,

    // by default, the event loop is run while waiting for synchronous execution
    // to complete and this flag can be used to simply block the main process
    // until the child process finishes
    wxEXEC_NOEVENTS = 16,

    // under Windows, hide the console of the child process if it has one, even
    // if its IO is not redirected
    wxEXEC_HIDE_CONSOLE = 32,

    // convenient synonym for flags given system()-like behaviour
    wxEXEC_BLOCK = wxEXEC_SYNC | wxEXEC_NOEVENTS
};

// Map storing environment variables.
typedef wxStringToStringHashMap wxEnvVariableHashMap;

enum wxSignal
{
    wxSIGNONE = 0,  // verify if the process exists under Unix
    wxSIGHUP,
    wxSIGINT,
    wxSIGQUIT,
    wxSIGILL,
    wxSIGTRAP,
    wxSIGABRT,
    wxSIGIOT = wxSIGABRT,   // another name
    wxSIGEMT,
    wxSIGFPE,
    wxSIGKILL,
    wxSIGBUS,
    wxSIGSEGV,
    wxSIGSYS,
    wxSIGPIPE,
    wxSIGALRM,
    wxSIGTERM

    // further signals are different in meaning between different Unix systems
};

// Sleep for nSecs seconds
WXDLLIMPEXP_BASE void wxSleep(int nSecs);

// Sleep for a given amount of milliseconds
WXDLLIMPEXP_BASE void wxMilliSleep(unsigned long milliseconds);

// Sleep for a given amount of microseconds
WXDLLIMPEXP_BASE void wxMicroSleep(unsigned long microseconds);

// ----------------------------------------------------------------------------
// Environment variables
// ----------------------------------------------------------------------------

// returns true if variable exists (value may be NULL if you just want to check
// for this)
WXDLLIMPEXP_BASE bool wxGetEnv(const wxString& var, wxString *value);

// set the env var name to the given value, return true on success
WXDLLIMPEXP_BASE bool wxSetEnv(const wxString& var, const wxString& value);

// remove the env var from environment
WXDLLIMPEXP_BASE bool wxUnsetEnv(const wxString& var);

#if WXWIN_COMPATIBILITY_2_8
inline bool wxSetEnv(const wxString& var, const char *value)
    { return wxSetEnv(var, wxString(value)); }
inline bool wxSetEnv(const wxString& var, const wchar_t *value)
    { return wxSetEnv(var, wxString(value)); }
template<typename T>
inline bool wxSetEnv(const wxString& var, const wxScopedCharTypeBuffer<T>& value)
    { return wxSetEnv(var, wxString(value)); }
inline bool wxSetEnv(const wxString& var, const wxCStrData& value)
    { return wxSetEnv(var, wxString(value)); }

// this one is for passing NULL directly - don't use it, use wxUnsetEnv instead
wxDEPRECATED( inline bool wxSetEnv(const wxString& var, int value) );
inline bool wxSetEnv(const wxString& var, int value)
{
    wxASSERT_MSG( value == 0, "using non-NULL integer as string?" );

    wxUnusedVar(value); // fix unused parameter warning in release build

    return wxUnsetEnv(var);
}
#endif // WXWIN_COMPATIBILITY_2_8

// Retrieve the complete environment by filling specified map.
// Returns true on success or false if an error occurred.
WXDLLIMPEXP_BASE bool wxGetEnvMap(wxEnvVariableHashMap *map);

// ----------------------------------------------------------------------------
// Network and username functions.
// ----------------------------------------------------------------------------

// Get user ID e.g. jacs (this is known as login name under Unix)
WXDLLIMPEXP_BASE bool wxGetUserId(wxChar *buf, int maxSize);
WXDLLIMPEXP_BASE wxString wxGetUserId();

// Get current Home dir and copy to dest (returns pstr->c_str())
WXDLLIMPEXP_BASE wxString wxGetHomeDir();
WXDLLIMPEXP_BASE const wxChar* wxGetHomeDir(wxString *pstr);

// Get the user's (by default use the current user name) home dir,
// return empty string on error
WXDLLIMPEXP_BASE wxString wxGetUserHome(const wxString& user = wxEmptyString);


#if wxUSE_LONGLONG
    typedef wxLongLong wxDiskspaceSize_t;
#else
    typedef long wxDiskspaceSize_t;
#endif

typedef int (*wxSortCallback)(const void* pItem1,
                              const void* pItem2,
                              const void* user_data);


WXDLLIMPEXP_BASE void wxQsort(void* pbase, size_t total_elems,
                              size_t size, wxSortCallback cmp,
                              const void* user_data);


// ----------------------------------------------------------------------------
// wxYield(): these functions are obsolete, please use wxApp methods instead!
// ----------------------------------------------------------------------------

// avoid redeclaring this function here if it had been already declated by
// wx/app.h, this results in warnings from g++ with -Wredundant-decls
#ifndef wx_YIELD_DECLARED
#define wx_YIELD_DECLARED

// Yield to other apps/messages
WXDLLIMPEXP_CORE bool wxYield();

#endif // wx_YIELD_DECLARED

// Like wxYield, but fails silently if the yield is recursive.
WXDLLIMPEXP_CORE bool wxYieldIfNeeded();

// ----------------------------------------------------------------------------
// Windows resources access
// ----------------------------------------------------------------------------

// Windows only: get user-defined resource from the .res file.
#ifdef __WINDOWS__
    // default resource type for wxLoadUserResource()
    extern WXDLLIMPEXP_DATA_BASE(const wxChar*) wxUserResourceStr;

    // Return the pointer to the resource data. This pointer is read-only, use
    // the overload below if you need to modify the data.
    //
    // Notice that the resource type can be either a real string or an integer
    // produced by MAKEINTRESOURCE(). In particular, any standard resource type,
    // i.e any RT_XXX constant, could be passed here.
    //
    // Returns true on success, false on failure. Doesn't log an error message
    // if the resource is not found (because this could be expected) but does
    // log one if any other error occurs.
    WXDLLIMPEXP_BASE bool
    wxLoadUserResource(const void **outData,
                       size_t *outLen,
                       const wxString& resourceName,
                       const wxChar* resourceType = wxUserResourceStr,
                       WXHINSTANCE module = 0);

    // This function allocates a new buffer and makes a copy of the resource
    // data, remember to delete[] the buffer. And avoid using it entirely if
    // the overload above can be used.
    //
    // Returns NULL on failure.
    WXDLLIMPEXP_BASE char*
    wxLoadUserResource(const wxString& resourceName,
                       const wxChar* resourceType = wxUserResourceStr,
                       int* pLen = NULL,
                       WXHINSTANCE module = 0);
#endif // __WINDOWS__

#endif
    // _WX_UTILSH__
