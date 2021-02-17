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
#include "rho_distri_types.h"

/* Function Declarations */
extern void b_xgetrf(const emlrtStack *sp, real_T A[900], int32_T ipiv[30],
                     int32_T *info);
extern void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, emxArray_real_T
                   *A, int32_T lda, emxArray_int32_T *ipiv, int32_T *info);

#endif

/* End of code generation (xgetrf.h) */
