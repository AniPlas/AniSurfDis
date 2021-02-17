/*
 * diff.h
 *
 * Code generation for function 'diff'
 *
 */

#ifndef DIFF_H
#define DIFF_H

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
extern void b_diff(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *y);
extern void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T
                 *y);

#endif

/* End of code generation (diff.h) */
