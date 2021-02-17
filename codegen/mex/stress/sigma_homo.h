/*
 * sigma_homo.h
 *
 * Code generation for function 'sigma_homo'
 *
 */

#ifndef SIGMA_HOMO_H
#define SIGMA_HOMO_H

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
extern void sigma_homo(const emlrtStack *sp, const creal_T Z[3], const
  emxArray_cell_wrap_0 *S, const creal_T Q0[3], real_T N_pileup, real_T x2,
  const creal_T M_P_I[9], const creal_T A_I[9], const creal_T M_P_II[9], const
  creal_T A_II[9], const creal_T M_P_GB[9], const creal_T A_GB[9], const creal_T
  M_P_SU[9], const creal_T A_SU[9], const creal_T M_P_SL[9], const creal_T A_SL
  [9], real_T x22, real_T x23, real_T x24, real_T x25, real_T x26, real_T Ug[6]);

#endif

/* End of code generation (sigma_homo.h) */
