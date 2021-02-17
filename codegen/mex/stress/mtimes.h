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
#include "stress_types.h"

/* Function Declarations */
void b_mtimes(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *C);
void c_mtimes(const emxArray_real_T *A, const emxArray_real_T *B, real_T C[30]);
void d_mtimes(const real_T A[900], const real_T B[90], real_T C[90]);
void e_mtimes(const real_T A[900], const real_T B[30], real_T C[30]);
void f_mtimes(const real_T B_data[], const int32_T B_size[2], real_T C_data[],
              int32_T C_size[2]);
void g_mtimes(const real_T B_data[], const int32_T B_size[2], real_T C_data[],
              int32_T C_size[2]);
void mtimes(const emlrtStack *sp, const real_T A[900], const emxArray_real_T *B,
            emxArray_real_T *C);

/* End of code generation (mtimes.h) */
