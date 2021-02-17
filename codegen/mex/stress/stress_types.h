/*
 * stress_types.h
 *
 * Code generation for function 'stress'
 *
 */

#ifndef STRESS_TYPES_H
#define STRESS_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_cell_2
#define typedef_cell_2

typedef struct {
  real_T f1;
  real_T f2;
  real_T f3[81];
  creal_T f4[3];
  real_T f5[3];
  real_T f6[3];
  creal_T f7[9];
  creal_T f8[9];
  real_T f9[81];
  creal_T f10[3];
  real_T f11[3];
  real_T f12[3];
  creal_T f13[9];
  creal_T f14[9];
  real_T f15[81];
  creal_T f16[3];
  real_T f17[3];
  real_T f18[3];
  creal_T f19[9];
  creal_T f20[9];
  real_T f21[81];
  creal_T f22[3];
  real_T f23[3];
  real_T f24[3];
  creal_T f25[9];
  creal_T f26[9];
  real_T f27[81];
  creal_T f28[3];
  real_T f29[3];
  real_T f30[3];
  creal_T f31[9];
  creal_T f32[9];
  real_T f33[25];
  real_T f34;
  emxArray_real_T *f35;
  emxArray_real_T *f36;
  emxArray_real_T *f37;
  real_T f38[900];
  real_T f39[900];
  real_T f40[900];
  real_T f41[3];
  real_T f42;
  emxArray_real_T *f43;
  emxArray_real_T *f44;
} cell_2;

#endif                                 /*typedef_cell_2*/

#ifndef typedef_c_coder_internal_anonymous_func
#define typedef_c_coder_internal_anonymous_func

typedef struct {
  cell_2 tunableEnvironment;
} c_coder_internal_anonymous_func;

#endif                                 /*typedef_c_coder_internal_anonymous_func*/

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct {
  creal_T f1[3];
} cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef typedef_coder_internal_ref
#define typedef_coder_internal_ref

typedef struct {
  c_coder_internal_anonymous_func contents;
} coder_internal_ref;

#endif                                 /*typedef_coder_internal_ref*/

#ifndef typedef_coder_internal_ref_1
#define typedef_coder_internal_ref_1

typedef struct {
  boolean_T contents;
} coder_internal_ref_1;

#endif                                 /*typedef_coder_internal_ref_1*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef typedef_emxArray_cell_wrap_0
#define typedef_emxArray_cell_wrap_0

typedef struct {
  cell_wrap_0 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_0;

#endif                                 /*typedef_emxArray_cell_wrap_0*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T

struct emxArray_uint32_T
{
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint32_T*/

#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T

typedef struct emxArray_uint32_T emxArray_uint32_T;

#endif                                 /*typedef_emxArray_uint32_T*/

#ifndef typedef_stressStackData
#define typedef_stressStackData

typedef struct {
  union
  {
    struct {
      real_T y_data[5000];
    } f0;

    struct {
      real_T y_data[5000];
    } f1;

    struct {
      real_T y_data[5000];
    } f2;

    struct {
      real_T y_data[5000];
    } f3;

    struct {
      real_T y_data[5000];
    } f4;
  } u1;

  union
  {
    struct {
      real_T F_data[5010];
      real_T varargout_1_data[5000];
    } f5;

    struct {
      real_T F_data[5010];
      real_T varargout_1_data[5000];
    } f6;

    struct {
      real_T F_data[5010];
      real_T varargout_1_data[5000];
    } f7;

    struct {
      real_T F_data[5010];
      real_T varargout_1_data[5000];
    } f8;

    struct {
      real_T F_data[5010];
      real_T varargout_1_data[5000];
    } f9;
  } u2;
} stressStackData;

#endif                                 /*typedef_stressStackData*/
#endif

/* End of code generation (stress_types.h) */
