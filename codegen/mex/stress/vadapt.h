/*
 * vadapt.h
 *
 * Code generation for function 'vadapt'
 *
 */

#ifndef VADAPT_H
#define VADAPT_H

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
extern void b_vadapt(stressStackData *SD, const emlrtStack *sp,
                     coder_internal_ref_1 *f_tunableEnvironment_f1, const
                     coder_internal_ref *f_tunableEnvironment_f2, real_T q[6],
                     real_T errbnd[6]);
extern void c_vadapt(stressStackData *SD, const emlrtStack *sp,
                     coder_internal_ref_1 *f_tunableEnvironment_f1, const
                     coder_internal_ref *f_tunableEnvironment_f2, real_T q[6],
                     real_T errbnd[6]);
extern void d_vadapt(stressStackData *SD, const emlrtStack *sp,
                     coder_internal_ref_1 *f_tunableEnvironment_f1, const
                     coder_internal_ref *f_tunableEnvironment_f2, real_T q[6],
                     real_T errbnd[6]);
extern void e_vadapt(stressStackData *SD, const emlrtStack *sp,
                     coder_internal_ref_1 *f_tunableEnvironment_f1, const
                     coder_internal_ref *f_tunableEnvironment_f2, real_T q[6],
                     real_T errbnd[6]);
extern void vadapt(stressStackData *SD, const emlrtStack *sp,
                   coder_internal_ref_1 *f_tunableEnvironment_f1, const
                   coder_internal_ref *f_tunableEnvironment_f2, real_T q[6],
                   real_T errbnd[6]);

#endif

/* End of code generation (vadapt.h) */
