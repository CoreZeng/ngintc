/**
 * @file ntc_defines.h
 * @brief defines of NginTC
 * @author core zeng (corezeng@gmail.com)
 * @version 0.1
 * @date 2021-01-27
 */
#ifndef _NTC_DEFINES_H_
#define _NTC_DEFINES_H_

#define NTC_SUCCESS 0

/// type defines
typedef unsigned char _NTC_RUNMODE;  /// NginTC Run Mode
typedef unsigned char _NTC_MODULE_RUNMODE;  /// NginTC Modlue Run Mode
/**
 * @brief Work Mode Flages: 8 bit 
 * bit 0: Daemon Mode
 * bit 1: Divider Mode
 * bit 2: Waiter Mode
 * Others: Not Set Yet
 * 
 * ex: each mode can within one or more system run as same process 
 *     or independent process.
 */
_NTC_RUNMODE ntc_runmode;

/**
 * @brief Module Run Mode
 */
enum ModuleMode{
    MODULE_MODE_THREAD,  /// Run as a thread
    MODULE_MODE_PROCESS,  /// Run as a process 
};

#endif