#ifndef _OPENNUI_SYSTEM_SYSBASE_H_
#define _OPENNUI_SYSTEM_SYSBASE_H_

#include <opennui/opennui.h>
#include <system/logger.h>

// Check windows
#if _WIN32 || _WIN64
#define OPENNUI_PLATFORM_WINDOWS 1
#define _WIN32_WINNT 0x0501
#if _WIN64
#define OPENNUI_PLATFORM_X32 0
#define OPENNUI_PLATFORM_X64 1
#else
#define OPENNUI_PLATFORM_X32 1
#define OPENNUI_PLATFORM_X64 0
#endif
#endif

// Check GCC
#if __GNUC__
#define OPENNUI_PLATFORM_WINDOWS 0
#if __x86_64__ || __ppc64__
#define OPENNUI_PLATFORM_X32 0
#define OPENNUI_PLATFORM_X64 1
#else
#define OPENNUI_PLATFORM_X32 1
#define OPENNUI_PLATFORM_X64 0
#endif
#endif

namespace opennui {

namespace system {

} // !namespace system

} // !namespace opennui

#endif // !_OPENNUI_SYSTEM_SYSBASE_H_