/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 */

#ifndef ABS_H
#define ABS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "stress_types.h"

/* Function Declarations */
extern void b_abs(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern void c_abs(const real_T x[6], real_T y[6]);
extern void d_abs(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);

#endif

/* End of code generation (abs.h) */
