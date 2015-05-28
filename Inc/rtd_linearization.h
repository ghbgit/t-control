/**
 *   @file   rtd_linearization.h
 *   @brief  Header file of RTD linearization functions.
 *   @author hylics
 
Copyright (c) 2015, hylics
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of t-control nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _RTD_LINEARIZATION_H
#define _RTD_LINEARIZATION_H

/* configuration */
#define RTD_METHOD_PIECEWISE
#define USE_ARM_MATH
#define RTD_N_POLY_4

/* defines */



/* end defines*/

/* includes */
#include <stdint.h>

#if defined(RTD_METHOD_MATH)
  #if defined(USE_ARM_MATH)
    #define ARM_MATH_CM0
    #include "arm_math.h"
	#else
	  #include <math.h>
	#endif
#elif defined(RTD_METHOD_PIECEWISE)
  typedef float float32_t;
  typedef double float64_t;
#else
  #error "Define method used to calculate temperature RTD_METHOD_MATH or RTD_METHOD_PIECEWISE"
#endif
/* end includes*/

/* function prototypes*/
float32_t rtd_get_temp(uint32_t Rx);

/* end function prototypes*/

#endif	// _RTD_LINEARIZATION_H