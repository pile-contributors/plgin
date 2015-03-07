/**
 * @file plgin-private.h
 * @brief Declarations for PlgIn class
 * @author Nicu Tofan <nicu.tofan@gmail.com>
 * @copyright Copyright 2014 piles contributors. All rights reserved.
 * This file is released under the
 * [MIT License](http://opensource.org/licenses/mit-license.html)
 */

#ifndef GUARD_PLGIN_PRIVATE_H_INCLUDE
#define GUARD_PLGIN_PRIVATE_H_INCLUDE

#include <plgin/plgin-config.h>

#if 0
#    define PLGIN_DEBUGM printf
#else
#    define PLGIN_DEBUGM black_hole
#endif

#if 0
#    define PLGIN_TRACE_ENTRY printf("PLGIN ENTRY %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define PLGIN_TRACE_ENTRY
#endif

#if 0
#    define PLGIN_TRACE_EXIT printf("PLGIN EXIT %s in %s[%d]\n", __func__, __FILE__, __LINE__)
#else
#    define PLGIN_TRACE_EXIT
#endif


static inline void black_hole (...)
{}

#endif // GUARD_PLGIN_PRIVATE_H_INCLUDE
