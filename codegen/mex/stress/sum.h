/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

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
extern void b_sum(const emxArray_real_T *x, real_T y[6]);
extern void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *
                y);

#endif

/* End of code generation (sum.h) */
