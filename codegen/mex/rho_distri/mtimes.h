/*
 * mtimes.h
 *
 * Code generation for function 'mtimes'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "rho_distri_types.h"

/* Function Declarations */
void b_mtimes(const emlrtStack *sp, const real_T A[900], const emxArray_real_T
              *B, emxArray_real_T *C);
void c_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
void d_mtimes(const emxArray_real_T *A, const emxArray_real_T *B, real_T C[30]);
void e_mtimes(const real_T A[900], const real_T B[90], real_T C[90]);
void f_mtimes(const real_T A[900], const real_T B[30], real_T C[30]);
void mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
            emxArray_real_T *B, emxArray_real_T *C);

/* End of code generation (mtimes.h) */
