/*
 * integrale_num_inf.h
 *
 * Code generation for function 'integrale_num_inf'
 *
 */

#ifndef INTEGRALE_NUM_INF_H
#define INTEGRALE_NUM_INF_H

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
extern void b_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
                 *FIRSTFUNEVAL, const coder_internal_ref *FUN, const
                 emxArray_real_T *t, emxArray_real_T *y, boolean_T *too_close);
extern void b_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const
  cell_2 *FUN_tunableEnvironment, real_T q[6]);
extern void c_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
                 *FIRSTFUNEVAL, const coder_internal_ref *FUN, const
                 emxArray_real_T *t, emxArray_real_T *y, boolean_T *too_close);
extern void c_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const
  cell_2 *FUN_tunableEnvironment, real_T q[6]);
extern void d_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
                 *FIRSTFUNEVAL, const coder_internal_ref *FUN, const
                 emxArray_real_T *t, emxArray_real_T *y, boolean_T *too_close);
extern void d_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const
  cell_2 *FUN_tunableEnvironment, real_T q[6]);
extern void e_f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
                 *FIRSTFUNEVAL, const coder_internal_ref *FUN, const
                 emxArray_real_T *t, emxArray_real_T *y, boolean_T *too_close);
extern void e_integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const
  cell_2 *FUN_tunableEnvironment, real_T q[6]);
extern void f4(stressStackData *SD, const emlrtStack *sp, coder_internal_ref_1
               *FIRSTFUNEVAL, const coder_internal_ref *FUN, const
               emxArray_real_T *t, emxArray_real_T *y, boolean_T *too_close);
extern void integrale_num_inf(stressStackData *SD, const emlrtStack *sp, const
  cell_2 *FUN_tunableEnvironment, real_T q[6]);

#endif

/* End of code generation (integrale_num_inf.h) */
