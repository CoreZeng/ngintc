/**
 * @file ntc_waiter.h
 * @author zcore zeng (corezeng@gmail.com)
 * @brief NGINTC Waiter Module
 * @version 0.1
 * @date 2021-01-28
 */

#ifndef _NTC_WAITER_H
#define _NTC_WAITER_H

#include "ntc_defines.h"

/**
 * @brief Class of Waiter Module
 * 
 */
class Waiter{

public:

};

/**
 * @brief Create a Waiter Instance object
 * 
 * @param moduleMode The Module Run Mode of new instance
 * @return NTC_FD 
 */
Waiter* CreateWaiterInstance(ModuleMode moduleMode);
#endif