/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.35
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Jun 20 11:14:14 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_CombineModel.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "HANcoder_E407_TTA_CombineModel_private.h"
#include <math.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void);
void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T reqAngle;                       /* '<S5>/Data Store Read' */
real_T Gamma1;                         /* '<S19>/Sum1' */
real_T steering;                       /* '<S18>/Gain2' */
real_T position;                       /* '<S18>/Gain1' */
real_T control;                        /* '<S18>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S368>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S369>/Level-2 M-file S-Function' */
real32_T derivativeMean;               /* '<S79>/Moving Average' */
real32_T delta12K;                     /* '<S74>/tan 1' */
int32_T motorPos;                      /* '<S81>/Level-2 M-file S-Function' */
uint16_T pot31;                        /* '<S241>/Add' */
uint16_T pot32;                        /* '<S240>/Add' */
uint16_T pot11;                        /* '<S194>/Add' */
uint16_T pot12;                        /* '<S193>/Add' */
uint16_T pot21;                        /* '<S125>/Add' */
uint16_T pot22;                        /* '<S124>/Add' */
uint16_T testCounter;                  /* '<S103>/Data Store Read1' */
uint16_T potRaw;                       /* '<S79>/Data Store Read5' */
uint16_T lastPot;                      /* '<S79>/Data Store Read6' */
uint16_T derivative;                   /* '<S90>/Diff' */
uint16_T analogPot1;                   /* '<S82>/Level-2 M-file S-Function' */
uint16_T pot1;                         /* '<S77>/Cast1' */
uint16_T analogPot2;                   /* '<S83>/Level-2 M-file S-Function' */
uint16_T pot2;                         /* '<S77>/Cast2' */
uint16_T t2Angle;                      /* '<S5>/Data Store Read2' */
uint16_T t1Angle;                      /* '<S5>/Data Store Read1' */
uint16_T Gamma2;                       /* '<S19>/Sum2' */
uint16_T mospeed;                      /* '<S18>/Add' */
uint8_T SI_CPUload;                    /* '<S367>/Level-2 M-file S-Function' */
uint8_T buttonpress2;                  /* '<S320>/In6' */
uint8_T buttonpress1;                  /* '<S273>/In6' */
uint8_T amounttrailers;                /* '<S16>/Add' */
uint8_T positionID5;                   /* '<S16>/Cast3' */
uint8_T positionID4;                   /* '<S16>/Cast2' */
uint8_T local_ticks_interrupt;         /* '<S9>/Switch' */
uint8_T setSlotTime;                   /* '<S9>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S94>/Switch' */
boolean_T boolCan;                     /* '<S10>/AND' */
boolean_T potFaultDetected;            /* '<S108>/Data Store Read4' */
boolean_T masterCanFail;               /* '<S98>/NOT' */
boolean_T mf1;                         /* '<S79>/Delay' */
boolean_T mf2;                         /* '<S79>/Delay1' */
boolean_T mf3;                         /* '<S79>/Delay2' */
boolean_T mf4;                         /* '<S79>/Delay4' */
boolean_T mf5;                         /* '<S79>/Delay3' */
boolean_T motorFaultDetected;          /* '<S79>/AND2' */
boolean_T ioInit;                      /* '<S77>/Constant' */
boolean_T cw;                          /* '<S18>/Cast1' */
boolean_T ccw;                         /* '<S18>/NOT' */
boolean_T canActive;                   /* '<S9>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S12>/Constant'
                                        */
real_T ResetPosition = 0.0;            /* Variable: ResetPosition
                                        * Referenced by: '<S371>/Constant'
                                        */
real_T controlWidth = 10.0;            /* Variable: controlWidth
                                        * Referenced by: '<S18>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S77>/Constant2'
                                        */
real_T intVal = 0.15;                  /* Variable: intVal
                                        * Referenced by: '<S51>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S94>/Constant1'
                                        */
real_T propVal = 1.0;                  /* Variable: propVal
                                        * Referenced by: '<S59>/Proportional Gain'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S10>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S10>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S10>/Constant10'
                                        *   '<S360>/Constant10'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S10>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S10>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S10>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S10>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S10>/Constant18'
                                        */
uint8_T slotTime = 10U;                /* Variable: slotTime
                                        * Referenced by: '<S359>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Forward declaration for local functions */
static void SystemCore_setup(dsp_simulink_MovingAverage *obj);

/* Forward declaration for local functions */
static void SystemCore_setup_l(dsp_simulink_MovingAverage *obj);
static tCanDataTypes canRxData_0_MMBS1_ID;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_SSTM1_ID;
static tCanDataTypes canRxData_0_SYNC1_ID;
static tCanDataTypes canRxData_0_TRCK1_ID2;
static tCanDataTypes canRxData_0_TRCK1_ID1;
static tCanDataTypes canRxData_0_TRCK1_ID3;
static tCanDataTypes canRxData_0_TRLS1_ID4;
static tCanDataTypes canRxData_0_TRLS1_ID5;
static tCanDataTypes canRxData_0_SYNC1_ID;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S1>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;
    boolean_T rtb_Equal;

    /* SignalConversion generated from: '<S9>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S9>/Switch' */
    if (canActive) {
      /* Switch: '<S9>/Switch' incorporates:
       *  Constant: '<S9>/Constant2'
       *  DataStoreRead: '<S9>/Data Store Read'
       *  Sum: '<S9>/Sum1'
       */
      local_ticks_interrupt = (uint8_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint8_T)1U));
    } else {
      /* Switch: '<S9>/Switch' incorporates:
       *  DataStoreRead: '<S9>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S9>/Switch' */

    /* DataStoreWrite: '<S9>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S9>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* M-S-Function: '<S95>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S9>/Cast'
     */
    rtb_Level2MfileSFunction = setSlotTime;

    /* RelationalOperator: '<S9>/Equal' incorporates:
     *  DataStoreRead: '<S9>/Data Store Read2'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= rtb_Level2MfileSFunction);

    /* Outputs for Triggered SubSystem: '<S9>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S94>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S94>/Switch' incorporates:
       *  Constant: '<S94>/Constant1'
       *  DataStoreRead: '<S94>/Data Store Read1'
       *  DataTypeConversion: '<S94>/Cast'
       *  RelationalOperator: '<S94>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S94>/Switch' incorporates:
         *  Constant: '<S94>/Constant'
         *  DataStoreRead: '<S94>/Data Store Read'
         *  Sum: '<S94>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S94>/Switch' incorporates:
         *  Constant: '<S94>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S94>/Switch' */

      /* DataStoreWrite: '<S94>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S94>/Data Store Write1' incorporates:
       *  Constant: '<S94>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S9>/Enabled Subsystem' */
    /* M-S-Function: '<S95>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S9>/Sum' incorporates:
     *  Constant: '<S9>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S96>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S9>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void PwmoutIRQ_PWMOUT_MODULE_TIM14(void)
{
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

static void SystemCore_setup(dsp_simulink_MovingAverage *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void MovingAverage_Init(rtDW_MovingAverage *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;

  /* InitializeConditions for MATLABSystem: '<S77>/Moving Average' */
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0F;
    for (i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
  }

  /* End of InitializeConditions for MATLABSystem: '<S77>/Moving Average' */
}

/* Start for atomic system: */
void MovingAverage_Start(rtDW_MovingAverage *localDW)
{
  /* Start for MATLABSystem: '<S77>/Moving Average' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  SystemCore_setup(&localDW->obj);
}

/* Output and update for atomic system: */
void MovingAverage(real32_T rtu_0, rtB_MovingAverage *localB, rtDW_MovingAverage
                   *localDW)
{
  g_dsp_internal_SlidingWindowAve *obj;
  int32_T i;
  real32_T csumrev[9];
  real32_T csum;
  real32_T cumRevIndex;
  real32_T modValueRev;
  real32_T z;

  /* MATLABSystem: '<S77>/Moving Average' */
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  obj = localDW->obj.pStatistic;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->pCumSum = 0.0F;
    for (i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
    obj->isSetupComplete = true;
    obj->pCumSum = 0.0F;
    for (i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
  }

  cumRevIndex = obj->pCumRevIndex;
  csum = obj->pCumSum;
  for (i = 0; i < 9; i++) {
    csumrev[i] = obj->pCumSumRev[i];
  }

  modValueRev = obj->pModValueRev;
  z = 0.0F;

  /* MATLABSystem: '<S77>/Moving Average' */
  localB->MovingAverage_n = 0.0F;

  /* MATLABSystem: '<S77>/Moving Average' */
  csum += rtu_0;
  if (modValueRev == 0.0F) {
    z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  }

  csumrev[(int32_T)cumRevIndex - 1] = rtu_0;
  if (cumRevIndex != 9.0F) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0F;
    csum = 0.0F;
    for (i = 7; i >= 0; i--) {
      csumrev[i] += csumrev[i + 1];
    }
  }

  if (modValueRev == 0.0F) {
    /* MATLABSystem: '<S77>/Moving Average' */
    localB->MovingAverage_n = z / 10.0F;
  }

  obj->pCumSum = csum;
  for (i = 0; i < 9; i++) {
    obj->pCumSumRev[i] = csumrev[i];
  }

  obj->pCumRevIndex = cumRevIndex;
  if (modValueRev > 0.0F) {
    obj->pModValueRev = modValueRev - 1.0F;
  } else {
    obj->pModValueRev = 0.0F;
  }
}

/*
 * Output and update for enable system:
 *    '<S114>/Enabled Subsystem'
 *    '<S117>/Enabled Subsystem'
 *    '<S120>/Enabled Subsystem'
 *    '<S126>/Enabled Subsystem'
 *    '<S195>/Enabled Subsystem'
 *    '<S242>/Enabled Subsystem'
 *    '<S361>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In5_nc;
  uint8_T rtb_In6;
  uint8_T rtb_In8_m;

  /* Outputs for Enabled SubSystem: '<S114>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S115>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S115>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S115>/In3' */
    localB->In3 = rtu_In3;

    /* SignalConversion generated from: '<S115>/In4' */
    localB->In4 = rtu_In4;

    /* SignalConversion generated from: '<S115>/In5' */
    rtb_In5_nc = rtu_In5;

    /* SignalConversion generated from: '<S115>/In6' */
    rtb_In6 = rtu_In6;

    /* SignalConversion generated from: '<S115>/In7' */
    localB->In7 = rtu_In7;

    /* SignalConversion generated from: '<S115>/In8' */
    rtb_In8_m = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S114>/Enabled Subsystem' */
}

/*
 * Output and update for trigger system:
 *    '<S10>/MMBS1_TX'
 *    '<S10>/SSTM1_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S10>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S99>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S116>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S10>/MMBS1_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S124>/Bit Shift'
 *    '<S125>/Bit Shift'
 *    '<S193>/Bit Shift'
 *    '<S194>/Bit Shift'
 *    '<S240>/Bit Shift'
 *    '<S241>/Bit Shift'
 *    '<S265>/Bit Shift'
 *    '<S266>/Bit Shift'
 *    '<S312>/Bit Shift'
 *    '<S313>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S128>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S129>:1' */
  /* '<S129>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift'
 *    '<S127>/Bit Shift7'
 *    '<S196>/Bit Shift'
 *    '<S196>/Bit Shift7'
 *    '<S243>/Bit Shift'
 *    '<S243>/Bit Shift7'
 *    '<S268>/Bit Shift'
 *    '<S268>/Bit Shift7'
 *    '<S315>/Bit Shift'
 *    '<S315>/Bit Shift7'
 */
void BitShift_g(uint8_T rtu_u, rtB_BitShift_l *localB)
{
  /* MATLAB Function: '<S133>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S141>:1' */
  /* '<S141>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 1);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift1'
 *    '<S196>/Bit Shift1'
 *    '<S243>/Bit Shift1'
 *    '<S268>/Bit Shift1'
 *    '<S315>/Bit Shift1'
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S134>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S142>:1' */
  /* '<S142>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 2);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift2'
 *    '<S196>/Bit Shift2'
 *    '<S243>/Bit Shift2'
 *    '<S268>/Bit Shift2'
 *    '<S315>/Bit Shift2'
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S135>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S143>:1' */
  /* '<S143>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 3);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift3'
 *    '<S196>/Bit Shift3'
 *    '<S243>/Bit Shift3'
 *    '<S268>/Bit Shift3'
 *    '<S315>/Bit Shift3'
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S136>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S144>:1' */
  /* '<S144>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift4'
 *    '<S196>/Bit Shift4'
 *    '<S243>/Bit Shift4'
 *    '<S268>/Bit Shift4'
 *    '<S315>/Bit Shift4'
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S137>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S145>:1' */
  /* '<S145>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift5'
 *    '<S196>/Bit Shift5'
 *    '<S243>/Bit Shift5'
 *    '<S268>/Bit Shift5'
 *    '<S315>/Bit Shift5'
 */
void BitShift5(uint8_T rtu_u, rtB_BitShift5 *localB)
{
  /* MATLAB Function: '<S138>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S146>:1' */
  /* '<S146>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 6);
}

/*
 * Output and update for atomic system:
 *    '<S127>/Bit Shift6'
 *    '<S196>/Bit Shift6'
 *    '<S243>/Bit Shift6'
 *    '<S268>/Bit Shift6'
 *    '<S315>/Bit Shift6'
 */
void BitShift6(uint8_T rtu_u, rtB_BitShift6 *localB)
{
  /* MATLAB Function: '<S139>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S147>:1' */
  /* '<S147>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift'
 *    '<S172>/Bit Shift'
 *    '<S219>/Bit Shift'
 *    '<S291>/Bit Shift'
 *    '<S338>/Bit Shift'
 */
void BitShift_gy(uint8_T rtu_u, rtB_BitShift_o *localB)
{
  /* MATLAB Function: '<S153>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S160>:1' */
  /* '<S160>:1:6' */
  localB->y = (uint8_T)(rtu_u << 2);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift1'
 *    '<S172>/Bit Shift1'
 *    '<S219>/Bit Shift1'
 *    '<S291>/Bit Shift1'
 *    '<S338>/Bit Shift1'
 */
void BitShift1_b(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S154>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S161>:1' */
  /* '<S161>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift2'
 *    '<S172>/Bit Shift2'
 *    '<S219>/Bit Shift2'
 *    '<S291>/Bit Shift2'
 *    '<S338>/Bit Shift2'
 */
void BitShift2_p(uint8_T rtu_u, rtB_BitShift2_e *localB)
{
  /* MATLAB Function: '<S155>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S162>:1' */
  /* '<S162>:1:6' */
  localB->y = (uint8_T)(rtu_u << 3);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift3'
 *    '<S172>/Bit Shift3'
 *    '<S219>/Bit Shift3'
 *    '<S291>/Bit Shift3'
 *    '<S338>/Bit Shift3'
 */
void BitShift3_l(uint8_T rtu_u, rtB_BitShift3_g *localB)
{
  /* MATLAB Function: '<S156>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S163>:1' */
  /* '<S163>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift4'
 *    '<S172>/Bit Shift4'
 *    '<S219>/Bit Shift4'
 *    '<S291>/Bit Shift4'
 *    '<S338>/Bit Shift4'
 */
void BitShift4_g(uint8_T rtu_u, rtB_BitShift4_g *localB)
{
  /* MATLAB Function: '<S157>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S164>:1' */
  /* '<S164>:1:6' */
  localB->y = (uint8_T)(rtu_u << 5);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift5'
 *    '<S172>/Bit Shift5'
 *    '<S219>/Bit Shift5'
 *    '<S291>/Bit Shift5'
 *    '<S338>/Bit Shift5'
 */
void BitShift5_n(uint8_T rtu_u, rtB_BitShift5_e *localB)
{
  /* MATLAB Function: '<S158>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S165>:1' */
  /* '<S165>:1:6' */
  localB->y = (uint8_T)(rtu_u << 6);
}

/*
 * Output and update for atomic system:
 *    '<S150>/Bit Shift6'
 *    '<S172>/Bit Shift6'
 *    '<S219>/Bit Shift6'
 *    '<S291>/Bit Shift6'
 *    '<S338>/Bit Shift6'
 */
void BitShift6_d(uint8_T rtu_u, rtB_BitShift6_b *localB)
{
  /* MATLAB Function: '<S159>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S166>:1' */
  /* '<S166>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

/*
 * Output and update for atomic system:
 *    '<S151>/Bit Shift'
 *    '<S152>/Bit Shift'
 *    '<S173>/Bit Shift'
 *    '<S174>/Bit Shift'
 *    '<S220>/Bit Shift'
 *    '<S221>/Bit Shift'
 *    '<S292>/Bit Shift'
 *    '<S293>/Bit Shift'
 *    '<S339>/Bit Shift'
 *    '<S340>/Bit Shift'
 */
void BitShift_o(uint16_T rtu_u, rtB_BitShift_c *localB)
{
  /* MATLAB Function: '<S167>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S168>:1' */
  /* '<S168>:1:8' */
  localB->y = (uint16_T)((uint32_T)rtu_u >> 8);
}

static void SystemCore_setup_l(dsp_simulink_MovingAverage *obj)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->_pobj0.isInitialized = 0;
  obj->_pobj0.isInitialized = 0;
  obj->pStatistic = &obj->_pobj0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* Model step function */
void HANcoder_E407_TTA_CombineModel_step(void)
{
  /* local block i/o variables */
  real32_T rtb_Cast_m;
  real32_T rtb_Cast3;
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_l;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_f;
  uint8_T rtb_SFunction_o8_p;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_e;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_h;
  uint8_T rtb_SFunction_o2_j;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_c;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_b;
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_i;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_p;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_fg;
  uint8_T rtb_SFunction_o8_i;
  uint8_T rtb_SFunction_o9_o;
  uint8_T rtb_SFunction_o2_n;
  uint8_T rtb_SFunction_o3_l;
  uint8_T rtb_SFunction_o4_m;
  uint8_T rtb_SFunction_o5_i;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_j;
  uint8_T rtb_SFunction_o8_d;
  uint8_T rtb_SFunction_o9_lv;
  uint8_T rtb_SFunction_o2_ib;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_gy;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_b1;
  uint8_T rtb_SFunction_o2_c;
  uint8_T rtb_SFunction_o3_f;
  uint8_T rtb_SFunction_o4_k;
  uint8_T rtb_SFunction_o5_h;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_e;
  uint8_T rtb_SFunction_o8_pe;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_SFunction_o2_n2;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_k1;
  uint8_T rtb_SFunction_o7_dj;
  uint8_T rtb_SFunction_o8_n1;
  uint8_T rtb_SFunction_o9_ok;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_n;
  int8_T rtb_SFunction_o1_k;
  int8_T rtb_SFunction_o1_k1;
  int8_T rtb_SFunction_o1_ns;
  int8_T rtb_SFunction_o1_p;
  int8_T rtb_SFunction_o1_h;
  int8_T rtb_SFunction_o1_b;
  int8_T rtb_SFunction_o1_g;
  boolean_T rtb_Level2MfileSFunction_h;
  boolean_T rtb_Level2MfileSFunction_d;
  boolean_T rtb_Equal17;
  g_dsp_internal_SlidingWindowAve *obj;
  real_T rtb_IntegralGain;
  real_T rtb_Integrator;
  real_T rtb_Integrator_tmp;
  real_T rtb_Uk1;
  real_T tmp;
  int32_T i;
  int_T idxDelay;
  real32_T csumrev[9];
  real32_T csum;
  real32_T cumRevIndex;
  real32_T modValueRev;
  real32_T z;
  uint32_T IOexecution_ELAPS_T[2];
  uint32_T IOexecution_ELAPS_T_tmp;
  int16_T u;
  uint16_T rtb_Cast_d;
  uint16_T rtb_Cast_e1;
  uint16_T rtb_Cast_g;
  uint16_T rtb_Cast_gh;
  uint16_T rtb_Cast_i;
  uint16_T rtb_Cast_j;
  uint16_T rtb_Cast_ky;
  uint16_T rtb_Cast_lr;
  uint16_T rtb_Cast_o;
  uint16_T rtb_Cast_ow;
  uint16_T rtb_DataStoreRead8;
  uint16_T rtb_TSamp;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_Cast1_i;
  uint8_T rtb_Cast1_jo;
  uint8_T rtb_Cast1_l;
  uint8_T rtb_Cast1_ln;
  uint8_T rtb_Cast1_n;
  uint8_T rtb_Multiply;
  uint8_T rtb_Multiply1;
  boolean_T rtb_AND;
  boolean_T rtb_AND13;
  boolean_T rtb_AND15;
  boolean_T rtb_AND1_k;
  boolean_T rtb_AND2;
  boolean_T rtb_AND3;
  boolean_T rtb_AND4;
  boolean_T rtb_AND5;
  boolean_T rtb_AND7;
  boolean_T rtb_AND9;
  boolean_T rtb_AND_n;
  boolean_T rtb_DataStoreRead11;
  boolean_T rtb_Logic_c_idx_0;
  boolean_T rtb_Logic_f_idx_0;
  boolean_T rtb_OR1;
  ZCEventType zcEvent;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S8>/Data Store Write' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S93>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* If: '<S1>/If1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read2'
   */
  rtPrevAction = rtDWork.If1_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0) {
    rtAction = 0;
  }

  rtDWork.If1_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Setting ID' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* M-S-Function: '<S364>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_d = DiginGet(DIGIN_PORTG_PIN12);

    /* Product: '<S13>/Multiply' incorporates:
     *  Constant: '<S13>/Constant1'
     */
    rtb_Multiply = (uint8_T)(rtb_Level2MfileSFunction_d ? (int32_T)((uint8_T)1U)
      : 0);

    /* M-S-Function: '<S365>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_d = DiginGet(DIGIN_PORTG_PIN15);

    /* Product: '<S13>/Multiply1' incorporates:
     *  Constant: '<S13>/Constant4'
     */
    rtb_Multiply1 = (uint8_T)(rtb_Level2MfileSFunction_d ? (int32_T)((uint8_T)2U)
      : 0);

    /* M-S-Function: '<S366>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_d = DiginGet(DIGIN_PORTA_PIN4);

    /* Sum: '<S13>/Add' incorporates:
     *  Constant: '<S13>/Constant6'
     *  Product: '<S13>/Multiply2'
     */
    rtB.Add_i = (uint8_T)((uint8_T)((uint32_T)rtb_Multiply + rtb_Multiply1) +
                          (uint32_T)(rtb_Level2MfileSFunction_d ? (int32_T)
      ((uint8_T)4U) : 0));

    /* End of Outputs for SubSystem: '<S1>/Setting ID' */
  }

  /* End of If: '<S1>/If1' */

  /* DataStoreWrite: '<S1>/Data Store Write1' */
  rtDWork.Board_ID = rtB.Add_i;

  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant4'
   *  DataStoreRead: '<S1>/Data Store Read3'
   *  RelationalOperator: '<S12>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (rtDWork.Board_ID == ((uint8_T)1U)));

  /* Logic: '<S12>/OR' incorporates:
   *  DataStoreRead: '<S12>/Data Store Read2'
   */
  rtB.OR = (rtb_AND || rtDWork.slaveClockOn);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Logic: '<S14>/OR1' incorporates:
   *  Constant: '<S14>/Constant27'
   *  Constant: '<S14>/Constant4'
   *  RelationalOperator: '<S14>/Equal19'
   *  RelationalOperator: '<S14>/Equal4'
   */
  rtb_OR1 = ((slotSelected == 5.0) || (slotSelected == 10.0));

  /* Outputs for Triggered SubSystem: '<S1>/Control execution' incorporates:
   *  TriggerPort: '<S5>/Trigger'
   */
  if (rtb_OR1 && (rtPrevZCSigState.Controlexecution_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreRead: '<S5>/Data Store Read' */
    reqAngle = rtDWork.requestedAngle;

    /* Product: '<S73>/Product' incorporates:
     *  Constant: '<S19>/TrailUnitWheelbase'
     *  Trigonometry: '<S73>/tan '
     */
    rtb_Uk1 = tan(reqAngle) * rtConstB.Abs / 4.0;

    /* DataStoreRead: '<S5>/Data Store Read2' */
    t2Angle = rtDWork.trailerTwoAngle;

    /* DataStoreRead: '<S5>/Data Store Read1' */
    t1Angle = rtDWork.trailerOneAngle;

    /* Sum: '<S19>/Sum2' */
    Gamma2 = (uint16_T)(t1Angle - t2Angle);

    /* Trigonometry: '<S71>/tan 1' incorporates:
     *  DataTypeConversion: '<S71>/Cast'
     *  Trigonometry: '<S72>/tan '
     */
    rtb_IntegralGain = sin(Gamma2);

    /* Trigonometry: '<S71>/tan 2' incorporates:
     *  DataTypeConversion: '<S71>/Cast'
     *  Trigonometry: '<S72>/tan 1'
     */
    rtb_Integrator_tmp = cos(Gamma2);

    /* Sum: '<S71>/Add' incorporates:
     *  Constant: '<S19>/TrailUnitWheelbase'
     *  Constant: '<S5>/Constant'
     *  Product: '<S71>/Product1'
     *  Product: '<S71>/Product2'
     *  Trigonometry: '<S71>/tan 1'
     *  Trigonometry: '<S71>/tan 2'
     */
    rtb_Integrator = rtb_Uk1 * 4.0 * rtb_IntegralGain + rtb_Integrator_tmp * 0.5;

    /* Sum: '<S19>/Sum1' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    Gamma1 = 0.0 - (real_T)t1Angle;

    /* Product: '<S72>/Product' incorporates:
     *  Constant: '<S19>/RearAxleToHitch'
     *  Constant: '<S19>/TrailUnitWheelbase'
     *  Constant: '<S5>/Constant'
     *  Gain: '<S72>/Gain'
     *  Product: '<S72>/Product1'
     *  Product: '<S72>/Product3'
     *  Sum: '<S72>/Add'
     */
    rtb_IntegralGain = (0.5 / 1.0 * rtb_IntegralGain * (-1.0) +
                        rtb_Integrator_tmp / 1.0 * 4.0 * rtb_Uk1) *
      (rtConstB.signV2 * rtConstB.signL0b);

    /* Trigonometry: '<S76>/tan ' incorporates:
     *  DataTypeConversion: '<S76>/Cast'
     *  Trigonometry: '<S75>/tan 1'
     */
    rtb_Uk1 = sin(Gamma1);

    /* Trigonometry: '<S76>/tan 1' incorporates:
     *  DataTypeConversion: '<S76>/Cast'
     *  Trigonometry: '<S75>/tan 2'
     */
    rtb_Integrator_tmp = cos(Gamma1);

    /* Signum: '<S76>/Sign' */
    if (rtb_Integrator < 0.0) {
      tmp = -1.0;
    } else {
      tmp = (rtb_Integrator > 0.0);
    }

    /* Trigonometry: '<S74>/tan 1' incorporates:
     *  Constant: '<S19>/RearAxleToHitch'
     *  Constant: '<S19>/TractorWheelbase'
     *  Constant: '<S19>/TrailUnitWheelbase'
     *  DataTypeConversion: '<S74>/Cast'
     *  Gain: '<S76>/Gain'
     *  Product: '<S74>/Product1'
     *  Product: '<S75>/Product1'
     *  Product: '<S75>/Product2'
     *  Product: '<S76>/Product'
     *  Product: '<S76>/Product1'
     *  Product: '<S76>/Product3'
     *  Signum: '<S76>/Sign'
     *  Sum: '<S75>/Add'
     *  Sum: '<S76>/Add'
     *  Trigonometry: '<S76>/tan '
     *  Trigonometry: '<S76>/tan 1'
     */
    delta12K = (real32_T)atan((real32_T)((rtb_Integrator / 1.0 * rtb_Uk1 * (-1.0)
      + rtb_Integrator_tmp / 1.0 * 4.0 * rtb_IntegralGain) * (tmp *
      rtConstB.signL0b_o) * 3.0 / (rtb_IntegralGain * 4.0 * rtb_Uk1 +
      rtb_Integrator_tmp * rtb_Integrator)));

    /* Gain: '<S18>/Gain2' incorporates:
     *  DataTypeConversion: '<S18>/Cast3'
     */
    steering = 45.6 * delta12K;

    /* Gain: '<S18>/Gain1' incorporates:
     *  DataStoreRead: '<S18>/Data Store Read'
     */
    position = (real_T)1717986918 * 5.8207660913467407E-11 * (real_T)
      rtDWork.encoderPosition;

    /* Sum: '<S18>/Sum' incorporates:
     *  Rounding: '<S18>/Round'
     *  Rounding: '<S18>/Round1'
     */
    control = floor(steering) - floor(position);

    /* Abs: '<S18>/Abs' */
    rtb_IntegralGain = fabs(control);

    /* Sum: '<S63>/Sum' incorporates:
     *  DiscreteIntegrator: '<S54>/Integrator'
     *  Gain: '<S59>/Proportional Gain'
     */
    rtb_Uk1 = propVal * rtb_IntegralGain + rtDWork.Integrator_DSTATE;

    /* Saturate: '<S61>/Saturation' */
    if (rtb_Uk1 > 300.0) {
      tmp = 300.0;
    } else if (rtb_Uk1 < 0.0) {
      tmp = 0.0;
    } else {
      tmp = rtb_Uk1;
    }

    /* Sum: '<S18>/Add' incorporates:
     *  Constant: '<S18>/Motor dead zone'
     *  DataTypeConversion: '<S18>/Cast'
     *  Saturate: '<S61>/Saturation'
     */
    mospeed = (uint16_T)((uint32_T)((uint16_T)500U) + (uint16_T)tmp);

    /* DataStoreWrite: '<S5>/Data Store Write' */
    rtDWork.pwmMotor = mospeed;

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Constant: '<S18>/Constant'
     *  RelationalOperator: '<S18>/GreaterThan1'
     */
    rtb_Equal17 = (rtb_IntegralGain > controlWidth);

    /* DataTypeConversion: '<S18>/Cast1' incorporates:
     *  Constant: '<S18>/Constant1'
     *  RelationalOperator: '<S18>/GreaterThan'
     */
    cw = (control > 0.0);

    /* Logic: '<S18>/AND' incorporates:
     *  DataStoreWrite: '<S5>/Data Store Write1'
     */
    rtDWork.cwMotor = (rtb_Equal17 && cw);

    /* Logic: '<S18>/NOT' */
    ccw = !cw;

    /* Logic: '<S18>/AND1' incorporates:
     *  DataStoreWrite: '<S5>/Data Store Write8'
     */
    rtDWork.ccwMotor = (rtb_Equal17 && ccw);

    /* DeadZone: '<S47>/DeadZone' */
    if (rtb_Uk1 > 300.0) {
      rtb_Uk1 -= 300.0;
    } else if (rtb_Uk1 >= 0.0) {
      rtb_Uk1 = 0.0;
    } else {
      rtb_Uk1 -= 0.0;
    }

    /* End of DeadZone: '<S47>/DeadZone' */

    /* Gain: '<S51>/Integral Gain' */
    rtb_IntegralGain *= intVal;

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S45>/Clamping_zero'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S45>/Constant2'
     *  RelationalOperator: '<S45>/fix for DT propagation issue'
     */
    if (rtb_Uk1 > 0.0) {
      rtPrevAction = 1;
    } else {
      rtPrevAction = (-1);
    }

    /* Switch: '<S45>/Switch2' incorporates:
     *  Constant: '<S45>/Clamping_zero'
     *  Constant: '<S45>/Constant3'
     *  Constant: '<S45>/Constant4'
     *  RelationalOperator: '<S45>/fix for DT propagation issue1'
     */
    if (rtb_IntegralGain > 0.0) {
      rtAction = 1;
    } else {
      rtAction = (-1);
    }

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S45>/Clamping_zero'
     *  Constant: '<S45>/Constant1'
     *  Logic: '<S45>/AND3'
     *  RelationalOperator: '<S45>/Equal1'
     *  RelationalOperator: '<S45>/Relational Operator'
     *  Switch: '<S45>/Switch1'
     *  Switch: '<S45>/Switch2'
     */
    if ((0.0 != rtb_Uk1) && (rtPrevAction == rtAction)) {
      rtb_IntegralGain = 0.0;
    }

    /* Update for DiscreteIntegrator: '<S54>/Integrator' incorporates:
     *  Switch: '<S45>/Switch'
     */
    rtDWork.Integrator_DSTATE += 1.0 * rtb_IntegralGain;
    if (rtDWork.Integrator_DSTATE >= 100.0) {
      rtDWork.Integrator_DSTATE = 100.0;
    } else if (rtDWork.Integrator_DSTATE <= 0.0) {
      rtDWork.Integrator_DSTATE = 0.0;
    }

    /* End of Update for DiscreteIntegrator: '<S54>/Integrator' */
  }

  rtPrevZCSigState.Controlexecution_Trig_ZCE = rtb_OR1;

  /* End of Outputs for SubSystem: '<S1>/Control execution' */

  /* Outputs for Triggered SubSystem: '<S1>/IO execution' incorporates:
   *  TriggerPort: '<S7>/Trigger'
   */
  if (rtb_OR1 && (rtPrevZCSigState.IOexecution_Trig_ZCE != POS_ZCSIG)) {
    IOexecution_ELAPS_T_tmp = rtM->Timing.clockTick0;
    IOexecution_ELAPS_T[0] = IOexecution_ELAPS_T_tmp -
      rtDWork.IOexecution_PREV_T[0];
    rtDWork.IOexecution_PREV_T[0] = IOexecution_ELAPS_T_tmp;
    rtDWork.IOexecution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* Delay: '<S79>/Delay' */
    mf1 = rtDWork.Delay_DSTATE[0];

    /* Delay: '<S79>/Delay1' */
    mf2 = rtDWork.Delay1_DSTATE[0];

    /* Delay: '<S79>/Delay2' */
    mf3 = rtDWork.Delay2_DSTATE[0];

    /* Delay: '<S79>/Delay4' */
    mf4 = rtDWork.Delay4_DSTATE[0];

    /* Delay: '<S79>/Delay3' */
    mf5 = rtDWork.Delay3_DSTATE[0];

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Logic: '<S79>/AND1'
     */
    rtb_Equal17 = (mf1 && mf2 && mf3 && mf4 && mf5);

    /* CombinatorialLogic: '<S91>/Logic' incorporates:
     *  Memory: '<S91>/Memory'
     */
    rtb_Logic_c_idx_0 = rtConstP.pooled23[((((uint32_T)rtb_Equal17 << 1) + false)
      << 1) + rtDWork.Memory_PreviousInput_d1];

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Constant: '<S79>/Constant2'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  RelationalOperator: '<S79>/Equal1'
     */
    rtb_Equal17 = (rtDWork.Board_ID == ((uint8_T)1U));

    /* Logic: '<S79>/AND2' */
    motorFaultDetected = (rtb_Logic_c_idx_0 && rtb_Equal17);

    /* DataStoreWrite: '<S79>/Data Store Write' */
    rtDWork.motorFailed = motorFaultDetected;

    /* DataStoreRead: '<S79>/Data Store Read5' */
    potRaw = rtDWork.potentiometer1Raw;

    /* DataStoreRead: '<S79>/Data Store Read6' */
    lastPot = rtDWork.lastPot1;

    /* Sum: '<S79>/Add' incorporates:
     *  DataTypeConversion: '<S79>/Cast'
     *  DataTypeConversion: '<S79>/Cast1'
     */
    u = (int16_T)((int16_T)potRaw - (int16_T)lastPot);

    /* Abs: '<S79>/Abs' */
    if (u < 0) {
      u = (int16_T)-u;
    }

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Abs: '<S79>/Abs'
     *  Constant: '<S79>/Constant1'
     *  Delay: '<S79>/Delay6'
     *  Logic: '<S79>/AND3'
     *  RelationalOperator: '<S79>/GreaterThan1'
     */
    rtb_Equal17 = ((u > 500) && rtDWork.Delay6_DSTATE[0]);

    /* CombinatorialLogic: '<S92>/Logic' incorporates:
     *  Memory: '<S92>/Memory'
     */
    rtb_Logic_f_idx_0 = rtConstP.pooled23[((((uint32_T)rtb_Equal17 << 1) + false)
      << 1) + rtDWork.Memory_PreviousInput_a];

    /* DataStoreWrite: '<S79>/Data Store Write2' */
    rtDWork.potFault = rtb_Logic_f_idx_0;

    /* Gain: '<S79>/Gain' incorporates:
     *  DataStoreRead: '<S79>/Data Store Read12'
     *  DataStoreWrite: '<S79>/Data Store Write4'
     */
    rtDWork.trailerOneAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
      rtDWork.pot4_1) >> 22);

    /* Gain: '<S79>/Gain1' incorporates:
     *  DataStoreRead: '<S79>/Data Store Read13'
     *  DataStoreWrite: '<S79>/Data Store Write5'
     */
    rtDWork.trailerTwoAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
      rtDWork.pot5_1) >> 22);

    /* Delay: '<S79>/Delay7' incorporates:
     *  DataStoreWrite: '<S79>/Data Store Write1'
     */
    rtDWork.lastPot1 = rtDWork.Delay7_DSTATE[0];

    /* Logic: '<S79>/AND' incorporates:
     *  Constant: '<S79>/Constant'
     *  DataStoreRead: '<S79>/Data Store Read2'
     *  DataStoreRead: '<S79>/Data Store Read4'
     *  Delay: '<S79>/Delay5'
     *  RelationalOperator: '<S79>/Equal'
     *  RelationalOperator: '<S79>/GreaterThan'
     */
    rtb_AND_n = ((rtDWork.Delay5_DSTATE[0] == rtDWork.encoderPosition) &&
                 (rtDWork.pwmMotor > ((uint16_T)650U)));

    /* SampleTimeMath: '<S90>/TSamp'
     *
     * About '<S90>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp = (uint16_T)(potRaw * 10U / IOexecution_ELAPS_T[0]);

    /* Sum: '<S90>/Diff' incorporates:
     *  UnitDelay: '<S90>/UD'
     *
     * Block description for '<S90>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S90>/UD':
     *
     *  Store in Global RAM
     */
    derivative = (uint16_T)(rtb_TSamp - rtDWork.UD_DSTATE);

    /* DataStoreRead: '<S79>/Data Store Read11' */
    rtb_DataStoreRead11 = rtDWork.ioInitialized;

    /* MATLABSystem: '<S79>/Moving Average' */
    if (rtDWork.obj.TunablePropsChanged) {
      rtDWork.obj.TunablePropsChanged = false;
    }

    obj = rtDWork.obj.pStatistic;
    if (obj->isInitialized != 1) {
      obj->isSetupComplete = false;
      obj->isInitialized = 1;
      obj->pCumSum = 0.0F;
      for (i = 0; i < 9; i++) {
        obj->pCumSumRev[i] = 0.0F;
      }

      obj->pCumRevIndex = 1.0F;
      obj->pModValueRev = 0.0F;
      obj->isSetupComplete = true;
      obj->pCumSum = 0.0F;
      for (i = 0; i < 9; i++) {
        obj->pCumSumRev[i] = 0.0F;
      }

      obj->pCumRevIndex = 1.0F;
      obj->pModValueRev = 0.0F;
    }

    cumRevIndex = obj->pCumRevIndex;
    csum = obj->pCumSum;
    for (i = 0; i < 9; i++) {
      csumrev[i] = obj->pCumSumRev[i];
    }

    modValueRev = obj->pModValueRev;
    z = 0.0F;

    /* MATLABSystem: '<S79>/Moving Average' */
    derivativeMean = 0.0F;

    /* MATLABSystem: '<S79>/Moving Average' incorporates:
     *  DataTypeConversion: '<S79>/Cast2'
     */
    csum += (real32_T)derivative;
    if (modValueRev == 0.0F) {
      z = csumrev[(int32_T)cumRevIndex - 1] + csum;
    }

    csumrev[(int32_T)cumRevIndex - 1] = derivative;
    if (cumRevIndex != 9.0F) {
      cumRevIndex++;
    } else {
      cumRevIndex = 1.0F;
      csum = 0.0F;
      for (i = 7; i >= 0; i--) {
        csumrev[i] += csumrev[i + 1];
      }
    }

    if (modValueRev == 0.0F) {
      /* MATLABSystem: '<S79>/Moving Average' */
      derivativeMean = z / 10.0F;
    }

    obj->pCumSum = csum;
    for (i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = csumrev[i];
    }

    obj->pCumRevIndex = cumRevIndex;
    if (modValueRev > 0.0F) {
      obj->pModValueRev = modValueRev - 1.0F;
    } else {
      obj->pModValueRev = 0.0F;
    }

    /* DataStoreRead: '<S79>/Data Store Read7' */
    i = rtDWork.encoderPosition;

    /* DataStoreRead: '<S79>/Data Store Read8' */
    rtb_DataStoreRead8 = rtDWork.potentiometer1Raw;

    /* M-S-Function: '<S82>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    analogPot1 = AninGet(ANIN_PORTF_PIN7,0);

    /* DataTypeConversion: '<S77>/Cast' */
    rtb_Cast_m = analogPot1;
    MovingAverage(rtb_Cast_m, &rtB.MovingAverage_p, &rtDWork.MovingAverage_p);

    /* DataTypeConversion: '<S77>/Cast1' */
    pot1 = (uint16_T)rtB.MovingAverage_p.MovingAverage_n;

    /* DataStoreWrite: '<S77>/Data Store Write1' */
    rtDWork.potentiometer1 = pot1;

    /* DataStoreWrite: '<S77>/Data Store Write4' */
    rtDWork.potentiometer1Raw = analogPot1;

    /* M-S-Function: '<S83>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    analogPot2 = AninGet(ANIN_PORTF_PIN8,0);

    /* DataTypeConversion: '<S77>/Cast3' */
    rtb_Cast3 = analogPot2;
    MovingAverage(rtb_Cast3, &rtB.MovingAverage1, &rtDWork.MovingAverage1);

    /* DataTypeConversion: '<S77>/Cast2' */
    pot2 = (uint16_T)rtB.MovingAverage1.MovingAverage_n;

    /* DataStoreWrite: '<S77>/Data Store Write3' */
    rtDWork.potentiometer2 = pot2;

    /* M-S-Function: '<S80>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Equal17 = DiginGet(DIGIN_PORTA_PIN0);

    /* DataTypeConversion: '<S77>/Cast4' incorporates:
     *  DataStoreWrite: '<S77>/Data Store Write6'
     */
    rtDWork.buttonPress = rtb_Equal17;

    /* DataStoreWrite: '<S77>/Data Store Write5' */
    rtDWork.ioInitialized = ioInit;

    /* Gain: '<S77>/Gain' incorporates:
     *  Constant: '<S77>/Constant2'
     *  DataStoreWrite: '<S77>/Data Store Write2'
     */
    rtDWork.requestedAngle = 0.015001500150015003 * desiredAngle;

    /* M-S-Function: '<S81>/Level-2 M-file S-Function' */
    /* determine if the counter needs a reset  */
    if (rtB.DataTypeConversion > 0) {
      QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
    }

    /* read counter from the quadrature encoder module */
    motorPos = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

    /* DataStoreWrite: '<S77>/Data Store Write' */
    rtDWork.encoderPosition = motorPos;

    /* DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
     *  RelationalOperator: '<S84>/FixPt Relational Operator'
     *  UnitDelay: '<S84>/Delay Input1'
     *
     * Block description for '<S84>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);

    /* Switch: '<S78>/Switch' incorporates:
     *  Switch: '<S78>/Switch1'
     *  Switch: '<S78>/Switch2'
     */
    if (canActive) {
      /* Switch: '<S78>/Switch' incorporates:
       *  DataStoreRead: '<S7>/Data Store Read'
       */
      rtB.Switch = rtDWork.pwmMotor;

      /* Switch: '<S78>/Switch1' incorporates:
       *  DataStoreRead: '<S7>/Data Store Read1'
       */
      rtB.Switch1 = rtDWork.cwMotor;

      /* Switch: '<S78>/Switch2' incorporates:
       *  DataStoreRead: '<S7>/Data Store Read3'
       */
      rtB.Switch2 = rtDWork.ccwMotor;
    } else {
      /* Switch: '<S78>/Switch' */
      rtB.Switch = rtConstB.Cast;

      /* Switch: '<S78>/Switch1' */
      rtB.Switch1 = rtConstB.Cast1;

      /* Switch: '<S78>/Switch2' */
      rtB.Switch2 = rtConstB.Cast2_pq;
    }

    /* End of Switch: '<S78>/Switch' */
    /* Logic: '<S78>/NOT' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S78>/Constant2'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  DataStoreRead: '<S78>/Data Store Read'
     *  Logic: '<S78>/AND'
     *  Logic: '<S78>/OR'
     *  RelationalOperator: '<S78>/NotEqual'
     *  RelationalOperator: '<S78>/NotEqual1'
     */
    rtB.NOT = ((rtDWork.Board_ID != ((uint8_T)1U)) && ((!rtDWork.node1CanFailed)
                || (rtDWork.Board_ID != ((uint8_T)2U))));

    /* Update for Delay: '<S79>/Delay' */
    rtDWork.Delay_DSTATE[0] = rtDWork.Delay_DSTATE[1];
    rtDWork.Delay_DSTATE[1] = rtb_AND_n;

    /* Update for Delay: '<S79>/Delay1' */
    for (idxDelay = 0; idxDelay < 8; idxDelay++) {
      rtDWork.Delay1_DSTATE[idxDelay] = rtDWork.Delay1_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay1_DSTATE[8] = rtb_AND_n;

    /* End of Update for Delay: '<S79>/Delay1' */

    /* Update for Delay: '<S79>/Delay2' */
    for (idxDelay = 0; idxDelay < 15; idxDelay++) {
      rtDWork.Delay2_DSTATE[idxDelay] = rtDWork.Delay2_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay2_DSTATE[15] = rtb_AND_n;

    /* End of Update for Delay: '<S79>/Delay2' */

    /* Update for Delay: '<S79>/Delay4' */
    for (idxDelay = 0; idxDelay < 24; idxDelay++) {
      rtDWork.Delay4_DSTATE[idxDelay] = rtDWork.Delay4_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay4_DSTATE[24] = rtb_AND_n;

    /* End of Update for Delay: '<S79>/Delay4' */

    /* Update for Delay: '<S79>/Delay3' */
    for (idxDelay = 0; idxDelay < 34; idxDelay++) {
      rtDWork.Delay3_DSTATE[idxDelay] = rtDWork.Delay3_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay3_DSTATE[34] = rtb_AND_n;

    /* End of Update for Delay: '<S79>/Delay3' */

    /* Update for Memory: '<S91>/Memory' */
    rtDWork.Memory_PreviousInput_d1 = rtb_Logic_c_idx_0;

    /* Update for Delay: '<S79>/Delay6' */
    for (idxDelay = 0; idxDelay < 9; idxDelay++) {
      rtDWork.Delay6_DSTATE[idxDelay] = rtDWork.Delay6_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay6_DSTATE[9] = rtb_DataStoreRead11;

    /* End of Update for Delay: '<S79>/Delay6' */

    /* Update for Memory: '<S92>/Memory' */
    rtDWork.Memory_PreviousInput_a = rtb_Logic_f_idx_0;

    /* Update for Delay: '<S79>/Delay5' */
    for (idxDelay = 0; idxDelay < 6; idxDelay++) {
      rtDWork.Delay5_DSTATE[idxDelay] = rtDWork.Delay5_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay5_DSTATE[6] = i;

    /* End of Update for Delay: '<S79>/Delay5' */

    /* Update for Delay: '<S79>/Delay7' */
    rtDWork.Delay7_DSTATE[0] = rtDWork.Delay7_DSTATE[1];
    rtDWork.Delay7_DSTATE[1] = rtb_DataStoreRead8;

    /* Update for UnitDelay: '<S90>/UD'
     *
     * Block description for '<S90>/UD':
     *
     *  Store in Global RAM
     */
    rtDWork.UD_DSTATE = rtb_TSamp;

    /* Update for UnitDelay: '<S84>/Delay Input1'
     *
     * Block description for '<S84>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtDWork.DelayInput1_DSTATE = 0.0;

    /* Update for M-S-Function: '<S85>/Level-2 M-file S-Function' */
    /* update digital output */
    if (rtB.Switch1 == 0) {
      DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_HIGH);
    }

    /* Update for M-S-Function: '<S86>/Level-2 M-file S-Function' */
    /* update digital output */
    if (rtB.Switch2 == 0) {
      DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_HIGH);
    }

    /* Update for M-S-Function: '<S88>/Level-2 M-file S-Function' */
    /* set the new duty cycle */
    PwmoutSet(PWMOUT_TIM14_PIN_PF9, rtB.Switch);

    /* Update for M-S-Function: '<S87>/Level-2 M-file S-Function' */
    /* update digital output */
    if (rtB.NOT == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }
  }

  /* Outputs for Triggered SubSystem: '<S1>/Control execution' incorporates:
   *  TriggerPort: '<S5>/Trigger'
   */
  rtPrevZCSigState.IOexecution_Trig_ZCE = rtb_OR1;

  /* End of Outputs for SubSystem: '<S1>/Control execution' */
  /* End of Outputs for SubSystem: '<S1>/IO execution' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S10>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* RelationalOperator: '<S10>/Equal1' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    rtb_OR1 = (slotSelected == 2.0);

    /* Logic: '<S97>/AND16' incorporates:
     *  Constant: '<S97>/Constant4'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  DataStoreRead: '<S97>/Data Store Read'
     *  RelationalOperator: '<S97>/Equal4'
     */
    rtb_AND_n = ((rtDWork.Board_ID == 2.0) && rtDWork.node1CanFailed);

    /* Logic: '<S10>/OR' incorporates:
     *  Constant: '<S10>/Constant13'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  RelationalOperator: '<S10>/Equal11'
     */
    rtb_DataStoreRead11 = ((rtDWork.Board_ID == 1.0) || rtb_AND_n);

    /* Logic: '<S10>/AND3' incorporates:
     *  Logic: '<S10>/NOT1'
     */
    rtb_AND3 = (rtb_OR1 && (!rtb_DataStoreRead11));

    /* Outputs for Enabled SubSystem: '<S10>/MMBS1_RX' incorporates:
     *  EnablePort: '<S98>/Enable'
     */
    if (rtb_AND3) {
      rtDWork.MMBS1_RX_MODE = true;

      /* Logic: '<S98>/NOT' incorporates:
       *  Constant: '<S98>/Constant'
       *  DataStoreRead: '<S98>/Data Store Read'
       *  RelationalOperator: '<S98>/Equal'
       */
      masterCanFail = (rtDWork.receiveSync != true);

      /* DataStoreWrite: '<S98>/Data Store Write' */
      rtDWork.node1CanFailed = masterCanFail;

      /* M-S-Function: '<S114>/S-Function' incorporates:
       *  Constant: '<S10>/Constant12'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_g = CanIoGetMessage(0, MMBS1_ID, NULL,
        &canRxData_0_MMBS1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_g > 0) {
        /* read the data */
        rtb_SFunction_o2_n2 = canRxData_0_MMBS1_ID.uint8_T_info[0];
        rtb_SFunction_o3_b = canRxData_0_MMBS1_ID.uint8_T_info[1];
        rtb_SFunction_o4_l = canRxData_0_MMBS1_ID.uint8_T_info[2];
        rtb_SFunction_o5_e = canRxData_0_MMBS1_ID.uint8_T_info[3];
        rtb_SFunction_o6_k1 = canRxData_0_MMBS1_ID.uint8_T_info[4];
        rtb_SFunction_o7_dj = canRxData_0_MMBS1_ID.uint8_T_info[5];
        rtb_SFunction_o8_n1 = canRxData_0_MMBS1_ID.uint8_T_info[6];
        rtb_SFunction_o9_ok = canRxData_0_MMBS1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S114>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n2,
                       rtb_SFunction_o3_b, rtb_SFunction_o4_l,
                       rtb_SFunction_o5_e, rtb_SFunction_o6_k1,
                       rtb_SFunction_o7_dj, rtb_SFunction_o8_n1,
                       rtb_SFunction_o9_ok, &rtB.EnabledSubsystem_k);

      /* End of Outputs for SubSystem: '<S114>/Enabled Subsystem' */
    } else if (rtDWork.MMBS1_RX_MODE) {
      rtDWork.MMBS1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/MMBS1_RX' */

    /* Logic: '<S10>/AND2' */
    rtb_AND2 = (rtb_OR1 && rtb_DataStoreRead11);

    /* Outputs for Triggered SubSystem: '<S10>/MMBS1_TX' */
    /* Constant: '<S10>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S10>/MMBS1_TX' */

    /* RelationalOperator: '<S10>/Equal2' incorporates:
     *  Constant: '<S10>/Constant2'
     */
    rtb_OR1 = (slotSelected == 3.0);

    /* Logic: '<S10>/OR2' incorporates:
     *  Constant: '<S10>/Constant15'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  RelationalOperator: '<S10>/Equal12'
     */
    rtb_DataStoreRead11 = ((rtDWork.Board_ID == 1.0) || rtb_AND_n);

    /* Logic: '<S10>/AND5' incorporates:
     *  Logic: '<S10>/NOT2'
     */
    rtb_AND5 = (rtb_OR1 && (!rtb_DataStoreRead11));

    /* Outputs for Enabled SubSystem: '<S10>/SSTM1_RX' incorporates:
     *  EnablePort: '<S100>/Enable'
     */
    if (rtb_AND5) {
      rtDWork.SSTM1_RX_MODE = true;

      /* M-S-Function: '<S117>/S-Function' incorporates:
       *  Constant: '<S10>/Constant14'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_b = CanIoGetMessage(0, SSTM1_ID, NULL,
        &canRxData_0_SSTM1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_b > 0) {
        /* read the data */
        rtb_SFunction_o2_c = canRxData_0_SSTM1_ID.uint8_T_info[0];
        rtb_SFunction_o3_f = canRxData_0_SSTM1_ID.uint8_T_info[1];
        rtb_SFunction_o4_k = canRxData_0_SSTM1_ID.uint8_T_info[2];
        rtb_SFunction_o5_h = canRxData_0_SSTM1_ID.uint8_T_info[3];
        rtb_SFunction_o6_k = canRxData_0_SSTM1_ID.uint8_T_info[4];
        rtb_SFunction_o7_e = canRxData_0_SSTM1_ID.uint8_T_info[5];
        rtb_SFunction_o8_pe = canRxData_0_SSTM1_ID.uint8_T_info[6];
        rtb_SFunction_o9_f = canRxData_0_SSTM1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S117>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_b, rtb_SFunction_o2_c,
                       rtb_SFunction_o3_f, rtb_SFunction_o4_k,
                       rtb_SFunction_o5_h, rtb_SFunction_o6_k,
                       rtb_SFunction_o7_e, rtb_SFunction_o8_pe,
                       rtb_SFunction_o9_f, &rtB.EnabledSubsystem_h);

      /* End of Outputs for SubSystem: '<S117>/Enabled Subsystem' */
    } else if (rtDWork.SSTM1_RX_MODE) {
      rtDWork.SSTM1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/SSTM1_RX' */

    /* Logic: '<S10>/AND4' */
    rtb_AND4 = (rtb_OR1 && rtb_DataStoreRead11);

    /* Outputs for Triggered SubSystem: '<S10>/SSTM1_TX' */
    /* Constant: '<S10>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S10>/SSTM1_TX' */

    /* RelationalOperator: '<S10>/Equal' incorporates:
     *  Constant: '<S10>/Constant'
     */
    rtb_OR1 = (slotSelected == ((uint8_T)1U));

    /* Logic: '<S10>/OR1' incorporates:
     *  Constant: '<S10>/Constant11'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  RelationalOperator: '<S10>/Equal10'
     */
    rtb_AND_n = ((rtDWork.Board_ID == ((uint8_T)1U)) || rtb_AND_n);

    /* Logic: '<S10>/AND1' incorporates:
     *  Logic: '<S10>/NOT'
     */
    rtb_AND1_k = (rtb_OR1 && (!rtb_AND_n));

    /* Outputs for Enabled SubSystem: '<S10>/SYNC1_RX' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if (rtb_AND1_k) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S120>/S-Function' incorporates:
       *  Constant: '<S10>/Constant10'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_h = CanIoGetMessage(0, SYNC1_ID, NULL,
        &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_h > 0) {
        /* read the data */
        rtb_SFunction_o2_ib = canRxData_0_SYNC1_ID.uint8_T_info[0];
        rtb_SFunction_o3_g = canRxData_0_SYNC1_ID.uint8_T_info[1];
        rtb_SFunction_o4_j = canRxData_0_SYNC1_ID.uint8_T_info[2];
        rtb_SFunction_o5_f = canRxData_0_SYNC1_ID.uint8_T_info[3];
        rtb_SFunction_o6_gy = canRxData_0_SYNC1_ID.uint8_T_info[4];
        rtb_SFunction_o7_k = canRxData_0_SYNC1_ID.uint8_T_info[5];
        rtb_SFunction_o8_n = canRxData_0_SYNC1_ID.uint8_T_info[6];
        rtb_SFunction_o9_b1 = canRxData_0_SYNC1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S120>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_h, rtb_SFunction_o2_ib,
                       rtb_SFunction_o3_g, rtb_SFunction_o4_j,
                       rtb_SFunction_o5_f, rtb_SFunction_o6_gy,
                       rtb_SFunction_o7_k, rtb_SFunction_o8_n,
                       rtb_SFunction_o9_b1, &rtB.EnabledSubsystem_c);

      /* End of Outputs for SubSystem: '<S120>/Enabled Subsystem' */

      /* Outputs for Triggered SubSystem: '<S102>/Subsystem' incorporates:
       *  TriggerPort: '<S121>/Trigger'
       */
      zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                            &rtPrevZCSigState.Subsystem_Trig_ZCE_h,
                            (rtb_SFunction_o1_h));
      if (zcEvent != NO_ZCEVENT) {
        /* DataStoreWrite: '<S121>/Data Store Write' */
        rtDWork.SlotTime = rtB.EnabledSubsystem_c.In1;

        /* DataStoreWrite: '<S121>/Data Store Write1' incorporates:
         *  Constant: '<S121>/Constant'
         */
        rtDWork.Local_Ticks = ((uint8_T)1U);

        /* DataStoreWrite: '<S121>/Data Store Write2' incorporates:
         *  Constant: '<S121>/Constant1'
         */
        rtDWork.slot = ((uint8_T)1U);

        /* DataStoreWrite: '<S121>/Data Store Write3' incorporates:
         *  Constant: '<S121>/Constant2'
         */
        rtDWork.receiveSync = true;
      }

      /* End of Outputs for SubSystem: '<S102>/Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/SYNC1_RX' */

    /* Logic: '<S10>/AND' */
    boolCan = (rtb_OR1 && rtb_AND_n);

    /* Outputs for Triggered SubSystem: '<S10>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S103>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S103>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S103>/Add' incorporates:
       *  Constant: '<S103>/Constant7'
       *  DataStoreWrite: '<S103>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S103>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S123>/S-Function' incorporates:
       *  Constant: '<S103>/Constant'
       *  Constant: '<S103>/Constant1'
       *  Constant: '<S103>/Constant2'
       *  Constant: '<S103>/Constant3'
       *  Constant: '<S103>/Constant4'
       *  Constant: '<S103>/Constant5'
       *  Constant: '<S103>/Constant6'
       *  Constant: '<S10>/Constant10'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.DataStoreRead;
        canTxData.uint8_T_info[1] = ((uint8_T)1U);
        canTxData.uint8_T_info[2] = ((uint8_T)0U);
        canTxData.uint8_T_info[3] = ((uint8_T)0U);
        canTxData.uint8_T_info[4] = ((uint8_T)0U);
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = ((uint8_T)0U);
        canTxData.uint8_T_info[7] = ((uint8_T)1U);

        /* send the data */
        CanTransmit(0, SYNC1_ID, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = boolCan;

    /* End of Outputs for SubSystem: '<S10>/SYNC1_TX' */

    /* RelationalOperator: '<S10>/Equal6' incorporates:
     *  Constant: '<S10>/Constant7'
     */
    rtb_AND_n = (slotSelected == 6.0);

    /* RelationalOperator: '<S10>/Equal5' incorporates:
     *  Constant: '<S10>/Constant6'
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    rtb_OR1 = (rtDWork.Board_ID == 2.0);

    /* Logic: '<S10>/AND9' incorporates:
     *  Logic: '<S10>/NOT4'
     */
    rtb_AND9 = (rtb_AND_n && (!rtb_OR1));

    /* Outputs for Enabled SubSystem: '<S10>/TRCK1_ID2_RX' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtb_AND9) {
      rtDWork.TRCK1_ID2_RX_MODE = true;

      /* M-S-Function: '<S126>/S-Function' incorporates:
       *  Constant: '<S10>/Constant5'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_p = CanIoGetMessage(0, TRCK1_ID2, NULL,
        &canRxData_0_TRCK1_ID2.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_p > 0) {
        /* read the data */
        rtb_SFunction_o2_n = canRxData_0_TRCK1_ID2.uint8_T_info[0];
        rtb_SFunction_o3_l = canRxData_0_TRCK1_ID2.uint8_T_info[1];
        rtb_SFunction_o4_m = canRxData_0_TRCK1_ID2.uint8_T_info[2];
        rtb_SFunction_o5_i = canRxData_0_TRCK1_ID2.uint8_T_info[3];
        rtb_SFunction_o6_o = canRxData_0_TRCK1_ID2.uint8_T_info[4];
        rtb_SFunction_o7_j = canRxData_0_TRCK1_ID2.uint8_T_info[5];
        rtb_SFunction_o8_d = canRxData_0_TRCK1_ID2.uint8_T_info[6];
        rtb_SFunction_o9_lv = canRxData_0_TRCK1_ID2.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S126>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_p, rtb_SFunction_o2_n,
                       rtb_SFunction_o3_l, rtb_SFunction_o4_m,
                       rtb_SFunction_o5_i, rtb_SFunction_o6_o,
                       rtb_SFunction_o7_j, rtb_SFunction_o8_d,
                       rtb_SFunction_o9_lv, &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S126>/Enabled Subsystem' */

      /* DataTypeConversion: '<S125>/Cast' */
      rtb_Cast_o = rtB.EnabledSubsystem_b.In1;

      /* Outputs for Atomic SubSystem: '<S125>/Bit Shift' */
      BitShift(rtb_Cast_o, &rtB.BitShift_gvk);

      /* End of Outputs for SubSystem: '<S125>/Bit Shift' */

      /* Sum: '<S125>/Add' incorporates:
       *  DataTypeConversion: '<S125>/Cast1'
       */
      pot21 = (uint16_T)((uint32_T)rtB.BitShift_gvk.y +
                         rtB.EnabledSubsystem_b.In2);

      /* DataTypeConversion: '<S124>/Cast' */
      rtb_Cast_j = rtB.EnabledSubsystem_b.In3;

      /* Outputs for Atomic SubSystem: '<S124>/Bit Shift' */
      BitShift(rtb_Cast_j, &rtB.BitShift_gv);

      /* End of Outputs for SubSystem: '<S124>/Bit Shift' */

      /* Sum: '<S124>/Add' incorporates:
       *  DataTypeConversion: '<S124>/Cast1'
       */
      pot22 = (uint16_T)((uint32_T)rtB.BitShift_gv.y +
                         rtB.EnabledSubsystem_b.In4);

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_b.In7, &rtB.BitShift_gy3);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_b.In7, &rtB.BitShift1_g);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_b.In7, &rtB.BitShift2_i);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_b.In7, &rtB.BitShift3_c);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_b.In7, &rtB.BitShift4_e);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_b.In7, &rtB.BitShift5_b);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_b.In7, &rtB.BitShift6_o);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_b.In7, &rtB.BitShift7);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift7' */
    } else if (rtDWork.TRCK1_ID2_RX_MODE) {
      rtDWork.TRCK1_ID2_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/TRCK1_ID2_RX' */

    /* Logic: '<S10>/AND8' */
    rtb_OR1 = (rtb_AND_n && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S10>/TRCK1_ID2_TX' incorporates:
     *  TriggerPort: '<S105>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRCK1_ID2_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreWrite: '<S105>/Data Store Write1' incorporates:
       *  Constant: '<S105>/Constant2'
       */
      rtDWork.receiveSync = false;

      /* DataStoreRead: '<S105>/Data Store Read2' */
      rtB.DataStoreRead2_n = rtDWork.Local_Ticks;

      /* DataTypeConversion: '<S150>/Cast1' incorporates:
       *  DataStoreRead: '<S105>/Data Store Read4'
       */
      rtb_Cast1_ln = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_ln, &rtB.BitShift1_b0);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_a, &rtB.BitShift_gyk);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_p, &rtB.BitShift2_pw);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_l, &rtB.BitShift3_lh);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_f, &rtB.BitShift4_g2);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_e, &rtB.BitShift5_nr);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S150>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_iq, &rtB.BitShift6_dc);

      /* End of Outputs for SubSystem: '<S150>/Bit Shift6' */

      /* Sum: '<S150>/Add' incorporates:
       *  DataStoreRead: '<S105>/Data Store Read3'
       *  DataTypeConversion: '<S150>/Cast7'
       */
      rtB.Add_h = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtDWork.motorFailed + rtB.BitShift1_b0.y) +
        rtB.BitShift_gyk.y) + rtB.BitShift2_pw.y) + rtB.BitShift3_lh.y) +
        rtB.BitShift4_g2.y) + rtB.BitShift5_nr.y) + rtB.BitShift6_dc.y);

      /* Outputs for Atomic SubSystem: '<S151>/Bit Shift' */
      /* DataStoreRead: '<S105>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_of);

      /* End of Outputs for SubSystem: '<S151>/Bit Shift' */

      /* DataTypeConversion: '<S151>/Cast' */
      rtB.Cast_c = (uint8_T)rtB.BitShift_of.y;

      /* DataTypeConversion: '<S151>/Cast1' incorporates:
       *  DataStoreRead: '<S105>/Data Store Read1'
       */
      rtB.Cast1_ib = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S152>/Bit Shift' */
      /* DataStoreRead: '<S105>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_h);

      /* End of Outputs for SubSystem: '<S152>/Bit Shift' */

      /* DataTypeConversion: '<S152>/Cast' */
      rtB.Cast_k = (uint8_T)rtB.BitShift_h.y;

      /* DataTypeConversion: '<S152>/Cast1' incorporates:
       *  DataStoreRead: '<S105>/Data Store Read'
       */
      rtB.Cast1_i0 = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S149>/S-Function' incorporates:
       *  Constant: '<S105>/Constant'
       *  Constant: '<S105>/Constant1'
       *  Constant: '<S10>/Constant5'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_k;
        canTxData.uint8_T_info[1] = rtB.Cast1_i0;
        canTxData.uint8_T_info[2] = rtB.Cast_c;
        canTxData.uint8_T_info[3] = rtB.Cast1_ib;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2_n;
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = rtB.Add_h;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRCK1_ID2, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRCK1_ID2_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S10>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S10>/Equal14' incorporates:
     *  Constant: '<S10>/Constant20'
     */
    rtb_AND_n = (slotSelected == 7.0);

    /* RelationalOperator: '<S10>/Equal7' incorporates:
     *  Constant: '<S10>/Constant19'
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    rtb_OR1 = (rtDWork.Board_ID == 3.0);

    /* Logic: '<S10>/AND10' */
    rtb_DataStoreRead11 = (rtb_AND_n && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S10>/TRCK1_ID3_TX' incorporates:
     *  TriggerPort: '<S106>/Trigger'
     */
    if (rtb_DataStoreRead11 && (rtPrevZCSigState.TRCK1_ID3_TX_Trig_ZCE !=
         POS_ZCSIG)) {
      /* DataStoreRead: '<S106>/Data Store Read2' */
      rtB.DataStoreRead2_l = rtDWork.Local_Ticks;

      /* DataTypeConversion: '<S172>/Cast1' incorporates:
       *  DataStoreRead: '<S106>/Data Store Read4'
       */
      rtb_Cast1_jo = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_jo, &rtB.BitShift1_k);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_e, &rtB.BitShift_p);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_f, &rtB.BitShift2_h);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_kx, &rtB.BitShift3_d);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_d, &rtB.BitShift4_k);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_a, &rtB.BitShift5_j);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S172>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_a, &rtB.BitShift6_a);

      /* End of Outputs for SubSystem: '<S172>/Bit Shift6' */

      /* Sum: '<S172>/Add' incorporates:
       *  DataStoreRead: '<S106>/Data Store Read3'
       *  DataTypeConversion: '<S172>/Cast7'
       */
      rtB.Add_jr = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtDWork.motorFailed + rtB.BitShift1_k.y) + rtB.BitShift_p.y)
        + rtB.BitShift2_h.y) + rtB.BitShift3_d.y) + rtB.BitShift4_k.y) +
        rtB.BitShift5_j.y) + rtB.BitShift6_a.y);

      /* Outputs for Atomic SubSystem: '<S173>/Bit Shift' */
      /* DataStoreRead: '<S106>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_e);

      /* End of Outputs for SubSystem: '<S173>/Bit Shift' */

      /* DataTypeConversion: '<S173>/Cast' */
      rtB.Cast_o = (uint8_T)rtB.BitShift_e.y;

      /* DataTypeConversion: '<S173>/Cast1' incorporates:
       *  DataStoreRead: '<S106>/Data Store Read1'
       */
      rtB.Cast1_nt = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S174>/Bit Shift' */
      /* DataStoreRead: '<S106>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_ph);

      /* End of Outputs for SubSystem: '<S174>/Bit Shift' */

      /* DataTypeConversion: '<S174>/Cast' */
      rtB.Cast_j = (uint8_T)rtB.BitShift_ph.y;

      /* DataTypeConversion: '<S174>/Cast1' incorporates:
       *  DataStoreRead: '<S106>/Data Store Read'
       */
      rtB.Cast1_ig = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S171>/S-Function' incorporates:
       *  Constant: '<S106>/Constant'
       *  Constant: '<S106>/Constant1'
       *  Constant: '<S10>/Constant26'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_j;
        canTxData.uint8_T_info[1] = rtB.Cast1_ig;
        canTxData.uint8_T_info[2] = rtB.Cast_o;
        canTxData.uint8_T_info[3] = rtB.Cast1_nt;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2_l;
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = rtB.Add_jr;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRCK1_ID3, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRCK1_ID3_TX_Trig_ZCE = rtb_DataStoreRead11;

    /* End of Outputs for SubSystem: '<S10>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S10>/Equal13' incorporates:
     *  Constant: '<S10>/Constant17'
     */
    rtb_DataStoreRead11 = (slotSelected == 4.0);

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Constant: '<S10>/Constant16'
     *  DataStoreRead: '<S1>/Data Store Read1'
     *  RelationalOperator: '<S10>/Equal3'
     */
    rtb_Equal17 = (rtDWork.Board_ID == 1.0);

    /* Logic: '<S10>/AND7' incorporates:
     *  Logic: '<S10>/NOT3'
     */
    rtb_AND7 = (rtb_DataStoreRead11 && (!rtb_Equal17));

    /* Outputs for Enabled SubSystem: '<S10>/TRCK1_RX' incorporates:
     *  EnablePort: '<S107>/Enable'
     */
    if (rtb_AND7) {
      rtDWork.TRCK1_RX_MODE = true;

      /* M-S-Function: '<S195>/S-Function' incorporates:
       *  Constant: '<S10>/Constant3'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_ns = CanIoGetMessage(0, TRCK1_ID1, NULL,
        &canRxData_0_TRCK1_ID1.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_ns > 0) {
        /* read the data */
        rtb_SFunction_o2_i = canRxData_0_TRCK1_ID1.uint8_T_info[0];
        rtb_SFunction_o3_i = canRxData_0_TRCK1_ID1.uint8_T_info[1];
        rtb_SFunction_o4_n = canRxData_0_TRCK1_ID1.uint8_T_info[2];
        rtb_SFunction_o5_p = canRxData_0_TRCK1_ID1.uint8_T_info[3];
        rtb_SFunction_o6_g = canRxData_0_TRCK1_ID1.uint8_T_info[4];
        rtb_SFunction_o7_fg = canRxData_0_TRCK1_ID1.uint8_T_info[5];
        rtb_SFunction_o8_i = canRxData_0_TRCK1_ID1.uint8_T_info[6];
        rtb_SFunction_o9_o = canRxData_0_TRCK1_ID1.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S195>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_ns, rtb_SFunction_o2_i,
                       rtb_SFunction_o3_i, rtb_SFunction_o4_n,
                       rtb_SFunction_o5_p, rtb_SFunction_o6_g,
                       rtb_SFunction_o7_fg, rtb_SFunction_o8_i,
                       rtb_SFunction_o9_o, &rtB.EnabledSubsystem_hn);

      /* End of Outputs for SubSystem: '<S195>/Enabled Subsystem' */

      /* DataTypeConversion: '<S194>/Cast' */
      rtb_Cast_d = rtB.EnabledSubsystem_hn.In1;

      /* Outputs for Atomic SubSystem: '<S194>/Bit Shift' */
      BitShift(rtb_Cast_d, &rtB.BitShift_j);

      /* End of Outputs for SubSystem: '<S194>/Bit Shift' */

      /* Sum: '<S194>/Add' incorporates:
       *  DataTypeConversion: '<S194>/Cast1'
       */
      pot11 = (uint16_T)((uint32_T)rtB.BitShift_j.y +
                         rtB.EnabledSubsystem_hn.In2);

      /* DataTypeConversion: '<S193>/Cast' */
      rtb_Cast_lr = rtB.EnabledSubsystem_hn.In3;

      /* Outputs for Atomic SubSystem: '<S193>/Bit Shift' */
      BitShift(rtb_Cast_lr, &rtB.BitShift_k);

      /* End of Outputs for SubSystem: '<S193>/Bit Shift' */

      /* Sum: '<S193>/Add' incorporates:
       *  DataTypeConversion: '<S193>/Cast1'
       */
      pot12 = (uint16_T)((uint32_T)rtB.BitShift_k.y +
                         rtB.EnabledSubsystem_hn.In4);

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift7_e);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift7' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift1_l);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift2_c);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift3_lj);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift4_a);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift5_bs);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S196>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift6_i);

      /* End of Outputs for SubSystem: '<S196>/Bit Shift6' */
    } else if (rtDWork.TRCK1_RX_MODE) {
      rtDWork.TRCK1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/TRCK1_RX' */

    /* Logic: '<S10>/AND6' */
    rtb_DataStoreRead11 = (rtb_DataStoreRead11 && rtb_Equal17);

    /* Outputs for Triggered SubSystem: '<S10>/TRCK1_TX' incorporates:
     *  TriggerPort: '<S108>/Trigger'
     */
    if (rtb_DataStoreRead11 && (rtPrevZCSigState.TRCK1_TX_Trig_ZCE != POS_ZCSIG))
    {
      /* DataStoreRead: '<S108>/Data Store Read2' */
      rtB.DataStoreRead2_h = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S108>/Data Store Read4' */
      potFaultDetected = rtDWork.potFault;

      /* DataTypeConversion: '<S219>/Cast1' */
      rtb_Cast1_n = potFaultDetected;

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_n, &rtB.BitShift1_n);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_f, &rtB.BitShift_gk);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_i, &rtB.BitShift2_b);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_k, &rtB.BitShift3_b);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_b, &rtB.BitShift4_f);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_k, &rtB.BitShift5_i);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S219>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_i, &rtB.BitShift6_e);

      /* End of Outputs for SubSystem: '<S219>/Bit Shift6' */

      /* Sum: '<S219>/Add' incorporates:
       *  DataStoreRead: '<S108>/Data Store Read3'
       *  DataTypeConversion: '<S219>/Cast7'
       */
      rtB.Add_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtDWork.motorFailed + rtB.BitShift1_n.y) + rtB.BitShift_gk.y)
        + rtB.BitShift2_b.y) + rtB.BitShift3_b.y) + rtB.BitShift4_f.y) +
        rtB.BitShift5_i.y) + rtB.BitShift6_e.y);

      /* Outputs for Atomic SubSystem: '<S220>/Bit Shift' */
      /* DataStoreRead: '<S108>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_jy);

      /* End of Outputs for SubSystem: '<S220>/Bit Shift' */

      /* DataTypeConversion: '<S220>/Cast' */
      rtB.Cast_p = (uint8_T)rtB.BitShift_jy.y;

      /* DataTypeConversion: '<S220>/Cast1' incorporates:
       *  DataStoreRead: '<S108>/Data Store Read1'
       */
      rtB.Cast1_b = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S221>/Bit Shift' */
      /* DataStoreRead: '<S108>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_b);

      /* End of Outputs for SubSystem: '<S221>/Bit Shift' */

      /* DataTypeConversion: '<S221>/Cast' */
      rtB.Cast_a = (uint8_T)rtB.BitShift_b.y;

      /* DataTypeConversion: '<S221>/Cast1' incorporates:
       *  DataStoreRead: '<S108>/Data Store Read'
       */
      rtB.Cast1_n = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S218>/S-Function' incorporates:
       *  Constant: '<S108>/Constant'
       *  Constant: '<S108>/Constant1'
       *  Constant: '<S10>/Constant3'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_a;
        canTxData.uint8_T_info[1] = rtB.Cast1_n;
        canTxData.uint8_T_info[2] = rtB.Cast_p;
        canTxData.uint8_T_info[3] = rtB.Cast1_b;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2_h;
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = rtB.Add_j;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRCK1_ID1, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRCK1_TX_Trig_ZCE = rtb_DataStoreRead11;

    /* End of Outputs for SubSystem: '<S10>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S10>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S109>/Enable'
     */
    /* Logic: '<S10>/AND11' incorporates:
     *  Logic: '<S10>/NOT5'
     */
    if (rtb_AND_n && (!rtb_OR1)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S242>/S-Function' incorporates:
       *  Constant: '<S10>/Constant26'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k1 = CanIoGetMessage(0, TRCK1_ID3, NULL,
        &canRxData_0_TRCK1_ID3.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k1 > 0) {
        /* read the data */
        rtb_SFunction_o2_j = canRxData_0_TRCK1_ID3.uint8_T_info[0];
        rtb_SFunction_o3_a = canRxData_0_TRCK1_ID3.uint8_T_info[1];
        rtb_SFunction_o4_i = canRxData_0_TRCK1_ID3.uint8_T_info[2];
        rtb_SFunction_o5_k = canRxData_0_TRCK1_ID3.uint8_T_info[3];
        rtb_SFunction_o6_c = canRxData_0_TRCK1_ID3.uint8_T_info[4];
        rtb_SFunction_o7_d = canRxData_0_TRCK1_ID3.uint8_T_info[5];
        rtb_SFunction_o8_h = canRxData_0_TRCK1_ID3.uint8_T_info[6];
        rtb_SFunction_o9_b = canRxData_0_TRCK1_ID3.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S242>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       rtb_SFunction_o3_a, rtb_SFunction_o4_i,
                       rtb_SFunction_o5_k, rtb_SFunction_o6_c,
                       rtb_SFunction_o7_d, rtb_SFunction_o8_h,
                       rtb_SFunction_o9_b, &rtB.EnabledSubsystem_bj);

      /* End of Outputs for SubSystem: '<S242>/Enabled Subsystem' */

      /* DataTypeConversion: '<S241>/Cast' */
      rtb_Cast_e1 = rtB.EnabledSubsystem_bj.In1;

      /* Outputs for Atomic SubSystem: '<S241>/Bit Shift' */
      BitShift(rtb_Cast_e1, &rtB.BitShift_pe);

      /* End of Outputs for SubSystem: '<S241>/Bit Shift' */

      /* Sum: '<S241>/Add' incorporates:
       *  DataTypeConversion: '<S241>/Cast1'
       */
      pot31 = (uint16_T)((uint32_T)rtB.BitShift_pe.y +
                         rtB.EnabledSubsystem_bj.In2);

      /* DataTypeConversion: '<S240>/Cast' */
      rtb_Cast_i = rtB.EnabledSubsystem_bj.In3;

      /* Outputs for Atomic SubSystem: '<S240>/Bit Shift' */
      BitShift(rtb_Cast_i, &rtB.BitShift_e3);

      /* End of Outputs for SubSystem: '<S240>/Bit Shift' */

      /* Sum: '<S240>/Add' incorporates:
       *  DataTypeConversion: '<S240>/Cast1'
       */
      pot32 = (uint16_T)((uint32_T)rtB.BitShift_e3.y +
                         rtB.EnabledSubsystem_bj.In4);

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift_f);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift1_a);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift2_cw);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift3_dg);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift4_d);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift5_c);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift6_b);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S243>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift7_j);

      /* End of Outputs for SubSystem: '<S243>/Bit Shift7' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S10>/AND11' */
    /* End of Outputs for SubSystem: '<S10>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Constant: '<S10>/Constant22'
     *  RelationalOperator: '<S10>/Equal15'
     */
    rtb_Equal17 = (slotSelected == 8.0);

    /* RelationalOperator: '<S10>/Equal8' incorporates:
     *  Constant: '<S10>/Constant21'
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    rtb_AND_n = (rtDWork.Board_ID == 4.0);

    /* Logic: '<S10>/AND13' incorporates:
     *  Logic: '<S10>/NOT6'
     */
    rtb_AND13 = (rtb_Equal17 && (!rtb_AND_n));

    /* Outputs for Enabled SubSystem: '<S10>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S110>/Enable'
     */
    if (rtb_AND13) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S267>/S-Function' incorporates:
       *  Constant: '<S10>/Constant8'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_k = CanIoGetMessage(0, TRLS1_ID4, NULL,
        &canRxData_0_TRLS1_ID4.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_k > 0) {
        /* read the data */
        rtb_SFunction_o2_e = canRxData_0_TRLS1_ID4.uint8_T_info[0];
        rtb_SFunction_o3_p = canRxData_0_TRLS1_ID4.uint8_T_info[1];
        rtb_SFunction_o4_c = canRxData_0_TRLS1_ID4.uint8_T_info[2];
        rtb_SFunction_o5_c = canRxData_0_TRLS1_ID4.uint8_T_info[3];
        rtb_SFunction_o6_e = canRxData_0_TRLS1_ID4.uint8_T_info[4];
        rtb_SFunction_o7_l = canRxData_0_TRLS1_ID4.uint8_T_info[5];
        rtb_SFunction_o8_f = canRxData_0_TRLS1_ID4.uint8_T_info[6];
        rtb_SFunction_o9_h = canRxData_0_TRLS1_ID4.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S267>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S273>/Enable'
       */
      if (rtb_SFunction_o1_k > 0) {
        /* SignalConversion generated from: '<S273>/In1' */
        rtB.In1_e = rtb_SFunction_o2_e;

        /* SignalConversion generated from: '<S273>/In2' */
        rtB.In2_e = rtb_SFunction_o3_p;

        /* SignalConversion generated from: '<S273>/In3' */
        rtB.In3_g = rtb_SFunction_o4_c;

        /* SignalConversion generated from: '<S273>/In6' */
        buttonpress1 = rtb_SFunction_o7_l;

        /* SignalConversion generated from: '<S273>/In7' */
        rtB.In7_g = rtb_SFunction_o8_f;
      }

      /* End of Outputs for SubSystem: '<S267>/Enabled Subsystem' */

      /* DataStoreWrite: '<S110>/Data Store Write' */
      rtDWork.trailer1buttonPress = buttonpress1;

      /* DataTypeConversion: '<S266>/Cast' */
      rtb_Cast_gh = rtB.In1_e;

      /* Outputs for Atomic SubSystem: '<S266>/Bit Shift' */
      BitShift(rtb_Cast_gh, &rtB.BitShift_n);

      /* End of Outputs for SubSystem: '<S266>/Bit Shift' */

      /* Sum: '<S266>/Add' incorporates:
       *  DataStoreWrite: '<S110>/Data Store Write1'
       *  DataTypeConversion: '<S266>/Cast1'
       */
      rtDWork.pot4_1 = (uint16_T)((uint32_T)rtB.BitShift_n.y + rtB.In2_e);

      /* DataTypeConversion: '<S265>/Cast' */
      rtb_Cast_ow = rtB.In3_g;

      /* Outputs for Atomic SubSystem: '<S265>/Bit Shift' */
      BitShift(rtb_Cast_ow, &rtB.BitShift_gu);

      /* End of Outputs for SubSystem: '<S265>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift' */
      BitShift_g(rtB.In7_g, &rtB.BitShift_l);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift1' */
      BitShift1(rtB.In7_g, &rtB.BitShift1_e);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift2' */
      BitShift2(rtB.In7_g, &rtB.BitShift2_l);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift3' */
      BitShift3(rtB.In7_g, &rtB.BitShift3_f);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift4' */
      BitShift4(rtB.In7_g, &rtB.BitShift4_j);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift5' */
      BitShift5(rtB.In7_g, &rtB.BitShift5_o);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift6' */
      BitShift6(rtB.In7_g, &rtB.BitShift6_o5);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S268>/Bit Shift7' */
      BitShift_g(rtB.In7_g, &rtB.BitShift7_m);

      /* End of Outputs for SubSystem: '<S268>/Bit Shift7' */
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/TRLS_ID4_RX' */

    /* Logic: '<S10>/AND12' */
    rtb_OR1 = (rtb_Equal17 && rtb_AND_n);

    /* Outputs for Triggered SubSystem: '<S10>/TRLS_ID4_TX' incorporates:
     *  TriggerPort: '<S111>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S111>/Data Store Read2' */
      rtB.DataStoreRead2 = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S111>/Data Store Read3' */
      rtB.DataStoreRead3_c = rtDWork.buttonPress;

      /* DataTypeConversion: '<S291>/Cast1' incorporates:
       *  DataStoreRead: '<S111>/Data Store Read4'
       */
      rtb_Cast1_l = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_l, &rtB.BitShift1_c);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_j, &rtB.BitShift_eg);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_o, &rtB.BitShift2_l4);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_g, &rtB.BitShift3_m);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_l, &rtB.BitShift4_c);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_h, &rtB.BitShift5_og);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S291>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_e, &rtB.BitShift6_k);

      /* End of Outputs for SubSystem: '<S291>/Bit Shift6' */

      /* Sum: '<S291>/Add' */
      rtB.Add_f = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtConstB.Cast7_e + rtB.BitShift1_c.y) + rtB.BitShift_eg.y) +
        rtB.BitShift2_l4.y) + rtB.BitShift3_m.y) + rtB.BitShift4_c.y) +
        rtB.BitShift5_og.y) + rtB.BitShift6_k.y);

      /* Outputs for Atomic SubSystem: '<S292>/Bit Shift' */
      /* DataStoreRead: '<S111>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_hr);

      /* End of Outputs for SubSystem: '<S292>/Bit Shift' */

      /* DataTypeConversion: '<S292>/Cast' */
      rtB.Cast_d = (uint8_T)rtB.BitShift_hr.y;

      /* DataTypeConversion: '<S292>/Cast1' incorporates:
       *  DataStoreRead: '<S111>/Data Store Read1'
       */
      rtB.Cast1_c = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S293>/Bit Shift' */
      /* DataStoreRead: '<S111>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_d);

      /* End of Outputs for SubSystem: '<S293>/Bit Shift' */

      /* DataTypeConversion: '<S293>/Cast' */
      rtB.Cast_n = (uint8_T)rtB.BitShift_d.y;

      /* DataTypeConversion: '<S293>/Cast1' incorporates:
       *  DataStoreRead: '<S111>/Data Store Read'
       */
      rtB.Cast1_i = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S290>/S-Function' incorporates:
       *  Constant: '<S10>/Constant8'
       *  Constant: '<S111>/Constant1'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_n;
        canTxData.uint8_T_info[1] = rtB.Cast1_i;
        canTxData.uint8_T_info[2] = rtB.Cast_d;
        canTxData.uint8_T_info[3] = rtB.Cast1_c;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2;
        canTxData.uint8_T_info[5] = rtB.DataStoreRead3_c;
        canTxData.uint8_T_info[6] = rtB.Add_f;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRLS1_ID4, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S10>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S10>/Equal17' incorporates:
     *  Constant: '<S10>/Constant25'
     */
    rtb_Equal17 = (slotSelected == 9.0);

    /* RelationalOperator: '<S10>/Equal16' incorporates:
     *  Constant: '<S10>/Constant24'
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    rtb_AND_n = (rtDWork.Board_ID == 5.0);

    /* Logic: '<S10>/AND15' incorporates:
     *  Logic: '<S10>/NOT7'
     */
    rtb_AND15 = (rtb_Equal17 && (!rtb_AND_n));

    /* Outputs for Enabled SubSystem: '<S10>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S112>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S314>/S-Function' incorporates:
       *  Constant: '<S10>/Constant18'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_n = CanIoGetMessage(0, TRLS1_ID5, NULL,
        &canRxData_0_TRLS1_ID5.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_n > 0) {
        /* read the data */
        rtb_SFunction_o2_l = canRxData_0_TRLS1_ID5.uint8_T_info[0];
        rtb_SFunction_o3_m = canRxData_0_TRLS1_ID5.uint8_T_info[1];
        rtb_SFunction_o4_b = canRxData_0_TRLS1_ID5.uint8_T_info[2];
        rtb_SFunction_o5_o = canRxData_0_TRLS1_ID5.uint8_T_info[3];
        rtb_SFunction_o6_i = canRxData_0_TRLS1_ID5.uint8_T_info[4];
        rtb_SFunction_o7_f = canRxData_0_TRLS1_ID5.uint8_T_info[5];
        rtb_SFunction_o8_p = canRxData_0_TRLS1_ID5.uint8_T_info[6];
        rtb_SFunction_o9_l = canRxData_0_TRLS1_ID5.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S314>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S320>/Enable'
       */
      if (rtb_SFunction_o1_n > 0) {
        /* SignalConversion generated from: '<S320>/In1' */
        rtB.In1 = rtb_SFunction_o2_l;

        /* SignalConversion generated from: '<S320>/In2' */
        rtB.In2 = rtb_SFunction_o3_m;

        /* SignalConversion generated from: '<S320>/In3' */
        rtB.In3 = rtb_SFunction_o4_b;

        /* SignalConversion generated from: '<S320>/In6' */
        buttonpress2 = rtb_SFunction_o7_f;

        /* SignalConversion generated from: '<S320>/In7' */
        rtB.In7 = rtb_SFunction_o8_p;
      }

      /* End of Outputs for SubSystem: '<S314>/Enabled Subsystem' */

      /* DataStoreWrite: '<S112>/Data Store Write' */
      rtDWork.trailer2buttonPress = buttonpress2;

      /* DataTypeConversion: '<S313>/Cast' */
      rtb_Cast_g = rtB.In1;

      /* Outputs for Atomic SubSystem: '<S313>/Bit Shift' */
      BitShift(rtb_Cast_g, &rtB.BitShift_jx);

      /* End of Outputs for SubSystem: '<S313>/Bit Shift' */

      /* Sum: '<S313>/Add' incorporates:
       *  DataStoreWrite: '<S112>/Data Store Write1'
       *  DataTypeConversion: '<S313>/Cast1'
       */
      rtDWork.pot5_1 = (uint16_T)((uint32_T)rtB.BitShift_jx.y + rtB.In2);

      /* DataTypeConversion: '<S312>/Cast' */
      rtb_Cast_ky = rtB.In3;

      /* Outputs for Atomic SubSystem: '<S312>/Bit Shift' */
      BitShift(rtb_Cast_ky, &rtB.BitShift_a);

      /* End of Outputs for SubSystem: '<S312>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift' */
      BitShift_g(rtB.In7, &rtB.BitShift_dp);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift1' */
      BitShift1(rtB.In7, &rtB.BitShift1_au);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift2' */
      BitShift2(rtB.In7, &rtB.BitShift2_d);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift3' */
      BitShift3(rtB.In7, &rtB.BitShift3_dx);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift4' */
      BitShift4(rtB.In7, &rtB.BitShift4_o);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift5' */
      BitShift5(rtB.In7, &rtB.BitShift5_ni);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift6' */
      BitShift6(rtB.In7, &rtB.BitShift6_a5);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift7' */
      BitShift_g(rtB.In7, &rtB.BitShift7_ms);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift7' */
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S10>/TRLS_ID5_RX' */

    /* Logic: '<S10>/AND14' */
    rtb_OR1 = (rtb_Equal17 && rtb_AND_n);

    /* Outputs for Triggered SubSystem: '<S10>/TRLS_ID5_TX' incorporates:
     *  TriggerPort: '<S113>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S113>/Data Store Read3' */
      rtB.DataStoreRead3 = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S113>/Data Store Read4' */
      rtB.DataStoreRead4 = rtDWork.buttonPress;

      /* DataTypeConversion: '<S338>/Cast1' incorporates:
       *  DataStoreRead: '<S113>/Data Store Read5'
       */
      rtb_Cast1_i = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_i, &rtB.BitShift1_n4);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_h, &rtB.BitShift_a0);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2, &rtB.BitShift2_f);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3, &rtB.BitShift3_a);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4, &rtB.BitShift4_ew);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5, &rtB.BitShift5_nm);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S338>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6, &rtB.BitShift6_ab);

      /* End of Outputs for SubSystem: '<S338>/Bit Shift6' */

      /* Sum: '<S338>/Add' */
      rtB.Add = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtConstB.Cast7 + rtB.BitShift1_n4.y) + rtB.BitShift_a0.y) +
        rtB.BitShift2_f.y) + rtB.BitShift3_a.y) + rtB.BitShift4_ew.y) +
        rtB.BitShift5_nm.y) + rtB.BitShift6_ab.y);

      /* Outputs for Atomic SubSystem: '<S339>/Bit Shift' */
      /* DataStoreRead: '<S113>/Data Store Read2' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_g3);

      /* End of Outputs for SubSystem: '<S339>/Bit Shift' */

      /* DataTypeConversion: '<S339>/Cast' */
      rtB.Cast = (uint8_T)rtB.BitShift_g3.y;

      /* DataTypeConversion: '<S339>/Cast1' incorporates:
       *  DataStoreRead: '<S113>/Data Store Read2'
       */
      rtB.Cast1 = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S340>/Bit Shift' */
      /* DataStoreRead: '<S113>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_gul);

      /* End of Outputs for SubSystem: '<S340>/Bit Shift' */

      /* DataTypeConversion: '<S340>/Cast' */
      rtB.Cast_f = (uint8_T)rtB.BitShift_gul.y;

      /* DataTypeConversion: '<S340>/Cast1' incorporates:
       *  DataStoreRead: '<S113>/Data Store Read1'
       */
      rtB.Cast1_m = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S337>/S-Function' incorporates:
       *  Constant: '<S10>/Constant18'
       *  Constant: '<S113>/Constant1'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_f;
        canTxData.uint8_T_info[1] = rtB.Cast1_m;
        canTxData.uint8_T_info[2] = rtB.Cast;
        canTxData.uint8_T_info[3] = rtB.Cast1;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead3;
        canTxData.uint8_T_info[5] = rtB.DataStoreRead4;
        canTxData.uint8_T_info[6] = rtB.Add;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRLS1_ID5, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S10>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S10>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_MODE) {
      rtDWork.MMBS1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S10>/MMBS1_TX' */
    /* Constant: '<S10>/Constant12' */
    /* Disable for Enabled SubSystem: '<S10>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX_MODE) {
      rtDWork.SSTM1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S10>/SSTM1_TX' */
    /* Constant: '<S10>/Constant14' */
    /* Disable for Enabled SubSystem: '<S10>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S10>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX_MODE) {
      rtDWork.TRCK1_ID2_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/TRCK1_ID2_RX' */
    /* Disable for Enabled SubSystem: '<S10>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX_MODE) {
      rtDWork.TRCK1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/TRCK1_RX' */
    /* Disable for Enabled SubSystem: '<S10>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S10>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/TRLS_ID4_RX' */
    /* Disable for Enabled SubSystem: '<S10>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S10>/TRLS_ID5_RX' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S12>/Subsystem' incorporates:
   *  TriggerPort: '<S359>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S359>/Data Store Write1' incorporates:
     *  Constant: '<S359>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint8_T)0U);

    /* DataStoreWrite: '<S359>/Data Store Write' incorporates:
     *  Constant: '<S359>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S12>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S12>/Subsystem2' incorporates:
   *  EnablePort: '<S360>/Enable'
   */
  /* Logic: '<S12>/AND1' incorporates:
   *  Constant: '<S12>/Constant1'
   *  DataStoreRead: '<S12>/Data Store Read'
   *  DataStoreRead: '<S1>/Data Store Read3'
   *  Logic: '<S12>/NOT'
   *  RelationalOperator: '<S12>/GreaterThan'
   */
  if ((rtDWork.Board_ID > ((uint8_T)1U)) && (!rtDWork.slaveClockOn)) {
    rtDWork.Subsystem2_MODE = true;

    /* M-S-Function: '<S361>/S-Function' incorporates:
     *  Constant: '<S360>/Constant10'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1 = CanIoGetMessage(0, SYNC1_ID, NULL,
      &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_SYNC1_ID.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_SYNC1_ID.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_SYNC1_ID.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_SYNC1_ID.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_SYNC1_ID.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_SYNC1_ID.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_SYNC1_ID.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_SYNC1_ID.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S361>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S361>/Enabled Subsystem' */

    /* Outputs for Triggered SubSystem: '<S360>/Subsystem1' incorporates:
     *  TriggerPort: '<S362>/Trigger'
     */
    zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                          &rtPrevZCSigState.Subsystem1_Trig_ZCE,
                          (rtb_SFunction_o1));
    if (zcEvent != NO_ZCEVENT) {
      /* DataStoreWrite: '<S362>/Data Store Write' */
      rtDWork.SlotTime = rtB.EnabledSubsystem_i.In1;

      /* DataStoreWrite: '<S362>/Data Store Write1' incorporates:
       *  Constant: '<S362>/Constant'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);

      /* DataStoreWrite: '<S362>/Data Store Write2' incorporates:
       *  Constant: '<S362>/Constant1'
       */
      rtDWork.slaveClockOn = true;

      /* DataStoreWrite: '<S362>/Data Store Write3' incorporates:
       *  Constant: '<S362>/Constant2'
       */
      rtDWork.slot = ((uint8_T)1U);
    }

    /* End of Outputs for SubSystem: '<S360>/Subsystem1' */
  } else if (rtDWork.Subsystem2_MODE) {
    rtDWork.Subsystem2_MODE = false;
  }

  /* End of Logic: '<S12>/AND1' */
  /* End of Outputs for SubSystem: '<S12>/Subsystem2' */

  /* If: '<S1>/If' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read38'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID <= 3) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Triggered Subsystem' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* Saturate: '<S16>/Saturation' */
    rtb_Multiply = ((uint8_T)1U);

    /* Saturate: '<S16>/Saturation1' */
    rtb_Multiply1 = ((uint8_T)1U);

    /* Saturate: '<S16>/Saturation' incorporates:
     *  DataStoreRead: '<S16>/Data Store Read46'
     */
    if (rtDWork.PositionID4 <= rtb_Multiply) {
      rtb_Multiply = rtDWork.PositionID4;
    }

    /* Saturate: '<S16>/Saturation1' incorporates:
     *  DataStoreRead: '<S16>/Data Store Read45'
     */
    if (rtDWork.PositionID5 <= rtb_Multiply1) {
      rtb_Multiply1 = rtDWork.PositionID5;
    }

    /* Sum: '<S16>/Add' incorporates:
     *  Saturate: '<S16>/Saturation'
     *  Saturate: '<S16>/Saturation1'
     */
    amounttrailers = (uint8_T)((uint32_T)rtb_Multiply + rtb_Multiply1);

    /* M-S-Function: '<S370>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_h = DiginGet(DIGIN_PORTA_PIN0);

    /* Outputs for Enabled SubSystem: '<S16>/Subsystem' incorporates:
     *  EnablePort: '<S371>/Enable'
     */
    if (rtb_Level2MfileSFunction_h) {
      /* CombinatorialLogic: '<S377>/Logic' incorporates:
       *  Constant: '<S371>/Constant'
       *  DataStoreRead: '<S16>/Data Store Read1'
       *  DataTypeConversion: '<S16>/Cast'
       *  DataTypeConversion: '<S371>/Cast2'
       *  Memory: '<S377>/Memory'
       */
      rtb_AND = rtConstP.pooled23[((((uint32_T)(rtDWork.trailer2buttonPress != 0)
        << 1) + (uint32_T)(ResetPosition != 0.0)) << 1) +
        rtDWork.Memory_PreviousInput];

      /* If: '<S371>/If1' incorporates:
       *  DataStoreRead: '<S371>/Data Store Read3'
       */
      if (rtDWork.PositionID4 == 1) {
        /* Outputs for IfAction SubSystem: '<S371>/If Action Subsystem' incorporates:
         *  ActionPort: '<S372>/Action Port'
         */
        /* Gain: '<S372>/Gain' */
        rtB.Gain_n = (uint8_T)(rtb_AND ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S371>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S371>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S373>/Action Port'
         */
        /* Gain: '<S373>/Gain' */
        rtB.Gain = (uint8_T)(rtb_AND ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S371>/If Action Subsystem1' */
      }

      /* End of If: '<S371>/If1' */

      /* Sum: '<S371>/Add1' incorporates:
       *  Gain: '<S372>/Gain'
       *  Gain: '<S373>/Gain'
       */
      rtB.Add1 = (uint8_T)((((uint32_T)rtB.Gain_n << 1) + rtB.Gain) >> 1);

      /* CombinatorialLogic: '<S376>/Logic' incorporates:
       *  Constant: '<S371>/Constant'
       *  DataStoreRead: '<S16>/Data Store Read'
       *  DataTypeConversion: '<S16>/Cast1'
       *  DataTypeConversion: '<S371>/Cast2'
       *  Memory: '<S376>/Memory'
       */
      rtb_OR1 = rtConstP.pooled23[((((uint32_T)(rtDWork.trailer1buttonPress != 0)
        << 1) + (uint32_T)(ResetPosition != 0.0)) << 1) +
        rtDWork.Memory_PreviousInput_d];

      /* If: '<S371>/If' incorporates:
       *  DataStoreRead: '<S371>/Data Store Read2'
       */
      if (rtDWork.PositionID5 == 1) {
        /* Outputs for IfAction SubSystem: '<S371>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S374>/Action Port'
         */
        /* Gain: '<S374>/Gain' */
        rtB.Gain_d = (uint8_T)(rtb_OR1 ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S371>/If Action Subsystem2' */
      } else {
        /* Outputs for IfAction SubSystem: '<S371>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        /* Gain: '<S375>/Gain' */
        rtB.Gain_j = (uint8_T)(rtb_OR1 ? (int32_T)((uint8_T)128U) : 0);

        /* End of Outputs for SubSystem: '<S371>/If Action Subsystem3' */
      }

      /* End of If: '<S371>/If' */

      /* Sum: '<S371>/Add2' incorporates:
       *  Gain: '<S374>/Gain'
       *  Gain: '<S375>/Gain'
       */
      rtB.Add2 = (uint8_T)((((uint32_T)rtB.Gain_d << 1) + rtB.Gain_j) >> 1);

      /* Update for Memory: '<S377>/Memory' */
      rtDWork.Memory_PreviousInput = rtb_AND;

      /* Update for Memory: '<S376>/Memory' */
      rtDWork.Memory_PreviousInput_d = rtb_OR1;
    }

    /* End of Outputs for SubSystem: '<S16>/Subsystem' */

    /* DataTypeConversion: '<S16>/Cast3' incorporates:
     *  Sum: '<S371>/Add1'
     */
    positionID5 = (uint8_T)((uint32_T)rtB.Add1 >> 6);

    /* DataStoreWrite: '<S16>/Data Store Write12' */
    rtDWork.PositionID5 = positionID5;

    /* DataTypeConversion: '<S16>/Cast2' incorporates:
     *  Sum: '<S371>/Add2'
     */
    positionID4 = (uint8_T)((uint32_T)rtB.Add2 >> 6);

    /* DataStoreWrite: '<S16>/Data Store Write6' */
    rtDWork.PositionID4 = positionID4;

    /* End of Outputs for SubSystem: '<S1>/Triggered Subsystem' */
  }

  /* End of If: '<S1>/If' */
  /* M-S-Function: '<S367>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S368>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S369>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void HANcoder_E407_TTA_CombineModel_initialize(void)
{
  {
    g_dsp_internal_SlidingWindowAve *obj;
    int32_T i;

    {
      /* user code (Start function Header) */
      uint8_t canResult1;
      tCanFilter canFilter1;

      /* user code (Start function Body) */

      /* initialize the CAN driver. */
      CanInit(64, 8);

      /* initialize the CAN I/O module for channel 1 */
      CanIoInit(0);

      /* initialize the timer module for output compare. */
      TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

      /* Start for If: '<S1>/If1' */
      rtDWork.If1_ActiveSubsystem = -1;

      /* Start for IfAction SubSystem: '<S1>/Setting ID' */
      /* Start for M-S-Function: '<S364>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN12, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S365>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN15, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S366>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN4, DIGIN_CFG_PULLDOWN);

      /* End of Start for SubSystem: '<S1>/Setting ID' */

      /* register the callback handler */
      TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
        TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

      /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

      /* Start for Triggered SubSystem: '<S1>/IO execution' */
      /* Start for MATLABSystem: '<S79>/Moving Average' */
      rtDWork.obj.isInitialized = 0;
      rtDWork.obj.NumChannels = -1;
      rtDWork.obj.FrameLength = -1;
      rtDWork.obj.matlabCodegenIsDeleted = false;
      SystemCore_setup_l(&rtDWork.obj);

      /* Start for M-S-Function: '<S82>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN7,0);
      MovingAverage_Start(&rtDWork.MovingAverage_p);

      /* Start for M-S-Function: '<S83>/Level-2 M-file S-Function' */

      /* configure the analog input for filtered inputs */
      AninConfigure(ANIN_PORTF_PIN8,0);
      MovingAverage_Start(&rtDWork.MovingAverage1);

      /* Start for M-S-Function: '<S80>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S81>/Level-2 M-file S-Function' */

      /* configure the quadrature encoder module */
      QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_FLOATING);

      /* Start for M-S-Function: '<S85>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN5, DIGOUT_CFG_PUSHPULL);

      /* Start for M-S-Function: '<S86>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTE_PIN6, DIGOUT_CFG_PUSHPULL);

      /* Start for M-S-Function: '<S87>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

      /* Start for S-Function (sfcn_pwmout_init): '<S89>/S-Function' */

      /* initialize the PWM module and register the callback handler */
      PwmoutInit(PWMOUT_MODULE_TIM14, 10253, PWMOUT_EDGE_ALIGNMENT);
      PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM14,
        PwmoutIRQ_PWMOUT_MODULE_TIM14);

      /* configures channel 1 */
      PwmoutConfigure(PWMOUT_TIM14_PIN_PF9, PWMOUT_ACTIVE_HIGH,
                      PWMOUT_INVERTED_OUTPUT_OFF);

      /* End of Start for SubSystem: '<S1>/IO execution' */

      /* Start for Enabled SubSystem: '<S1>/Message selector'
       *
       * Block description for '<S1>/Message selector':
       *  Truck 1
       */
      /* Start for Enabled SubSystem: '<S10>/MMBS1_RX' */
      /* Start for M-S-Function: '<S114>/S-Function' incorporates:
       *  Constant: '<S10>/Constant12'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, MMBS1_ID);

      /* End of Start for SubSystem: '<S10>/MMBS1_RX' */

      /* Start for Enabled SubSystem: '<S10>/SSTM1_RX' */
      /* Start for M-S-Function: '<S117>/S-Function' incorporates:
       *  Constant: '<S10>/Constant14'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SSTM1_ID);

      /* End of Start for SubSystem: '<S10>/SSTM1_RX' */

      /* Start for Enabled SubSystem: '<S10>/SYNC1_RX' */
      /* Start for M-S-Function: '<S120>/S-Function' incorporates:
       *  Constant: '<S10>/Constant10'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S10>/SYNC1_RX' */

      /* Start for Enabled SubSystem: '<S10>/TRCK1_ID2_RX' */
      /* Start for M-S-Function: '<S126>/S-Function' incorporates:
       *  Constant: '<S10>/Constant5'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID2);

      /* End of Start for SubSystem: '<S10>/TRCK1_ID2_RX' */

      /* Start for Enabled SubSystem: '<S10>/TRCK1_RX' */
      /* Start for M-S-Function: '<S195>/S-Function' incorporates:
       *  Constant: '<S10>/Constant3'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID1);

      /* End of Start for SubSystem: '<S10>/TRCK1_RX' */

      /* Start for Enabled SubSystem: '<S10>/TRCK_ID3_RX' */
      /* Start for M-S-Function: '<S242>/S-Function' incorporates:
       *  Constant: '<S10>/Constant26'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

      /* End of Start for SubSystem: '<S10>/TRCK_ID3_RX' */

      /* Start for Enabled SubSystem: '<S10>/TRLS_ID4_RX' */
      /* Start for M-S-Function: '<S267>/S-Function' incorporates:
       *  Constant: '<S10>/Constant8'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

      /* End of Start for SubSystem: '<S10>/TRLS_ID4_RX' */

      /* Start for Enabled SubSystem: '<S10>/TRLS_ID5_RX' */
      /* Start for M-S-Function: '<S314>/S-Function' incorporates:
       *  Constant: '<S10>/Constant18'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

      /* End of Start for SubSystem: '<S10>/TRLS_ID5_RX' */
      /* End of Start for SubSystem: '<S1>/Message selector' */

      /* Start for Enabled SubSystem: '<S12>/Subsystem2' */
      /* Start for M-S-Function: '<S361>/S-Function' incorporates:
       *  Constant: '<S360>/Constant10'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S12>/Subsystem2' */

      /* Start for If: '<S1>/If' */
      rtDWork.If_ActiveSubsystem = -1;

      /* Start for IfAction SubSystem: '<S1>/Triggered Subsystem' */
      /* Start for M-S-Function: '<S370>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

      /* End of Start for SubSystem: '<S1>/Triggered Subsystem' */

      /* Start for M-S-Function: '<S2>/Level-2 M-file S-Function' */

      /* configure the stack size for the task that executes the model */
      AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
        100);

      /* configure the sample time of the model in microseconds */
      AppCtrlTaskSetPeriod(1000);

      /* Run the ADC conversions ten times faster than the Simulink model */
      ADCconversionTaskSetPeriod(1000/10);

      /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

      /* store the CAN controller's filter configuration */
      canFilter1.mask = 0x00000000;
      canFilter1.code = 0x00000000;
      canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

      /* connect and synchronize the CAN bus */
      canResult1 = CanConnect(0, 1000000, &canFilter1);
      configASSERT(canResult1 == TRUE);

      /* Start for S-Function (sfcn_timeout_init): '<S11>/S-Function' */

      /* register the free running counter overflow callback handler */
      TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
        TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

      /* Start for M-S-Function: '<S17>/Level-2 M-file S-Function' */

      /* initialize the measurement and calibration interface */
      MacUsbComInit();
      MacInit();
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Controlexecution_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.IOexecution_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_ID3_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem1_Trig_ZCE = UNINITIALIZED_ZCSIG;
    rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;

    /* ConstCode for Triggered SubSystem: '<S1>/IO execution' */
    /* ConstCode for Constant: '<S77>/Constant' */
    ioInit = true;

    /* End of ConstCode for SubSystem: '<S1>/IO execution' */

    /* SystemInitialize for Triggered SubSystem: '<S1>/IO execution' */
    rtDWork.IOexecution_PREV_T[0] = rtM->Timing.clockTick0;
    rtDWork.IOexecution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* InitializeConditions for MATLABSystem: '<S79>/Moving Average' */
    obj = rtDWork.obj.pStatistic;
    if (obj->isInitialized == 1) {
      obj->pCumSum = 0.0F;
      for (i = 0; i < 9; i++) {
        obj->pCumSumRev[i] = 0.0F;
      }

      obj->pCumRevIndex = 1.0F;
      obj->pModValueRev = 0.0F;
    }

    /* End of InitializeConditions for MATLABSystem: '<S79>/Moving Average' */
    MovingAverage_Init(&rtDWork.MovingAverage_p);
    MovingAverage_Init(&rtDWork.MovingAverage1);

    /* End of SystemInitialize for SubSystem: '<S1>/IO execution' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
