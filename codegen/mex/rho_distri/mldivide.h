/*
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef MLDIVIDE_H
#define MLDIVIDE_H

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
extern void b_mldivide(const emlrtStack *sp, const real_T A[900], real_T B[900]);
extern void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
                     emxArray_real_T *B, emxArray_real_T *Y);

#endif

/* End of code generation (mldivide.h) */
