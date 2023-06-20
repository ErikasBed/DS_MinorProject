<<<<<<< HEAD
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_types.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.23
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun  5 20:39:27 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_26dhrvbwoL7CdPMxA9K2tG
#define struct_tag_26dhrvbwoL7CdPMxA9K2tG

struct tag_26dhrvbwoL7CdPMxA9K2tG
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real32_T pCumSum;
  real32_T pCumSumRev[59];
  real32_T pCumRevIndex;
  real32_T pModValueRev;
};

#endif                                 /* struct_tag_26dhrvbwoL7CdPMxA9K2tG */

#ifndef typedef_g_dsp_internal_SlidingWindowAve
#define typedef_g_dsp_internal_SlidingWindowAve

typedef struct tag_26dhrvbwoL7CdPMxA9K2tG g_dsp_internal_SlidingWindowAve;

#endif                             /* typedef_g_dsp_internal_SlidingWindowAve */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_tag_ZKdIQuck2mXbyGfLk4EJZB
#define struct_tag_ZKdIQuck2mXbyGfLk4EJZB

struct tag_ZKdIQuck2mXbyGfLk4EJZB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  g_dsp_internal_SlidingWindowAve *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_SlidingWindowAve _pobj0;
};

#endif                                 /* struct_tag_ZKdIQuck2mXbyGfLk4EJZB */

#ifndef typedef_dsp_simulink_MovingAverage
#define typedef_dsp_simulink_MovingAverage

typedef struct tag_ZKdIQuck2mXbyGfLk4EJZB dsp_simulink_MovingAverage;

#endif                                 /* typedef_dsp_simulink_MovingAverage */
#endif                  /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
=======
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_types.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.34
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jun 19 11:48:19 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_mJe2swu4Us9xX2hzs0ahHB
#define struct_tag_mJe2swu4Us9xX2hzs0ahHB

struct tag_mJe2swu4Us9xX2hzs0ahHB
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real32_T pCumSum;
  real32_T pCumSumRev[9];
  real32_T pCumRevIndex;
  real32_T pModValueRev;
};

#endif                                 /* struct_tag_mJe2swu4Us9xX2hzs0ahHB */

#ifndef typedef_g_dsp_internal_SlidingWindowAve
#define typedef_g_dsp_internal_SlidingWindowAve

typedef struct tag_mJe2swu4Us9xX2hzs0ahHB g_dsp_internal_SlidingWindowAve;

#endif                             /* typedef_g_dsp_internal_SlidingWindowAve */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_tag_1K8LTFDXi6otMlpJhpxnC
#define struct_tag_1K8LTFDXi6otMlpJhpxnC

struct tag_1K8LTFDXi6otMlpJhpxnC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  g_dsp_internal_SlidingWindowAve *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_SlidingWindowAve _pobj0;
};

#endif                                 /* struct_tag_1K8LTFDXi6otMlpJhpxnC */

#ifndef typedef_dsp_simulink_MovingAverage
#define typedef_dsp_simulink_MovingAverage

typedef struct tag_1K8LTFDXi6otMlpJhpxnC dsp_simulink_MovingAverage;

#endif                                 /* typedef_dsp_simulink_MovingAverage */

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#endif                  /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
>>>>>>> 81417dd1e339209a4e3107c0a47e656175be45ac
