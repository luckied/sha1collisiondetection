/***
* Copyright 2017 Marc Stevens <marc@marc-stevens.nl>, Dan Shumow (danshu@microsoft.com)
* Distributed under the MIT Software License.
* See accompanying file LICENSE.txt or copy at
* https://opensource.org/licenses/MIT
***/

// this file generates sse128 code using sse128 MACROS (simd_sse128.h) and generic SIMD code (ubc_check_simd.cinc) 
#ifdef HAVE_SSE
#include "ubc_check.h"
#include "simd_sse128.h"

#define UBC_CHECK_SIMD ubc_check_sse128

#include "ubc_check_simd.cinc"

#else

#pragma message "The file: ubc_check_simd_sse128.c is not compiled for this architecture."

#endif //HAVE_SSE