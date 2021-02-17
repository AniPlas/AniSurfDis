/*
 * xgetrf.h
 *
 * Code generation for function 'xgetrf'
 *
 */

#ifndef XGETRF_H
#define XGETRF_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "coef_rho_types.h"

/* Type Definitions */

/* Function Declarations */
extern void xgetrf(const emlrtStack *sp, real_T A[900], int32_T ipiv[30],
                   int32_T *info);

#endif

/* End of code generation (xgetrf.h) */
