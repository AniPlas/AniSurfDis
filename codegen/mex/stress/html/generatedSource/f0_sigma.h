/*
 * f0_sigma.h
 *
 * Code generation for function 'f0_sigma'
 *
 */

#ifndef F0_SIGMA_H
#define F0_SIGMA_H

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
extern void f0_sigma(const emlrtStack *sp, const creal_T Z[3], const
                     emxArray_cell_wrap_0 *S, const creal_T Q0[3], real_T
                     N_singularity, creal_T b_f0_sigma[3]);

#endif

/* End of code generation (f0_sigma.h) */
