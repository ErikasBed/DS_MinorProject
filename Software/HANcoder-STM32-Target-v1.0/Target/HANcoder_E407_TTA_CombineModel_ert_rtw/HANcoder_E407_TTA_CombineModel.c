/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.32
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jun 15 16:05:00 2023
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
real_T Gamma1;                         /* '<S20>/Sum1' */
real_T steering;                       /* '<S19>/Gain2' */
real_T position;                       /* '<S19>/Gain1' */
real_T control;                        /* '<S19>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S369>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S370>/Level-2 M-file S-Function' */
real32_T derivativeMean;               /* '<S80>/Moving Average' */
real32_T delta12K;                     /* '<S75>/tan 1' */
int32_T motorPos;                      /* '<S81>/Level-2 M-file S-Function' */
uint16_T pot31;                        /* '<S245>/Add' */
uint16_T pot32;                        /* '<S244>/Add' */
uint16_T pot11;                        /* '<S198>/Add' */
uint16_T pot12;                        /* '<S197>/Add' */
uint16_T pot21;                        /* '<S129>/Add' */
uint16_T pot22;                        /* '<S128>/Add' */
uint16_T testCounter;                  /* '<S107>/Data Store Read1' */
uint16_T potRaw;                       /* '<S80>/Data Store Read5' */
uint16_T lastPot;                      /* '<S80>/Data Store Read6' */
uint16_T derivative;                   /* '<S90>/Diff' */
uint16_T analogPot1;                   /* '<S82>/Level-2 M-file S-Function' */
uint16_T pot1;                         /* '<S78>/Cast1' */
uint16_T analogPot2;                   /* '<S83>/Level-2 M-file S-Function' */
uint16_T pot2;                         /* '<S78>/Cast2' */
uint16_T t2Angle;                      /* '<S5>/Data Store Read2' */
uint16_T t1Angle;                      /* '<S5>/Data Store Read1' */
uint16_T Gamma2;                       /* '<S20>/Sum2' */
uint16_T mospeed;                      /* '<S19>/Add' */
uint8_T SI_CPUload;                    /* '<S368>/Level-2 M-file S-Function' */
uint8_T local_ticks_interrupt;         /* '<S12>/Switch' */
uint8_T setSlotTime;                   /* '<S12>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S98>/Switch' */
boolean_T boolCan;                     /* '<S13>/AND' */
boolean_T potFaultDetected;            /* '<S112>/Data Store Read4' */
boolean_T masterCanFail;               /* '<S102>/NOT' */
boolean_T mf1;                         /* '<S80>/Delay' */
boolean_T mf2;                         /* '<S80>/Delay1' */
boolean_T mf3;                         /* '<S80>/Delay2' */
boolean_T mf4;                         /* '<S80>/Delay4' */
boolean_T mf5;                         /* '<S80>/Delay3' */
boolean_T motorFaultDetected;          /* '<S80>/AND2' */
boolean_T ioInit;                      /* '<S78>/Constant' */
boolean_T cw;                          /* '<S19>/Cast1' */
boolean_T ccw;                         /* '<S19>/NOT' */
boolean_T canActive;                   /* '<S12>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S15>/Constant'
                                        */
real_T controlWidth = 10.0;            /* Variable: controlWidth
                                        * Referenced by: '<S19>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S78>/Constant2'
                                        */
real_T intVal = 0.15;                  /* Variable: intVal
                                        * Referenced by: '<S52>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S98>/Constant1'
                                        */
real_T propVal = 1.0;                  /* Variable: propVal
                                        * Referenced by: '<S60>/Proportional Gain'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S13>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S13>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S13>/Constant10'
                                        *   '<S364>/Constant10'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S13>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S13>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S13>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S13>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S13>/Constant18'
                                        */
uint8_T slotTime = 10U;                /* Variable: slotTime
                                        * Referenced by: '<S363>/Constant3'
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

    /* SignalConversion generated from: '<S12>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S12>/Switch' */
    if (canActive) {
      /* Switch: '<S12>/Switch' incorporates:
       *  Constant: '<S12>/Constant2'
       *  DataStoreRead: '<S12>/Data Store Read'
       *  Sum: '<S12>/Sum1'
       */
      local_ticks_interrupt = (uint8_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint8_T)1U));
    } else {
      /* Switch: '<S12>/Switch' incorporates:
       *  DataStoreRead: '<S12>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S12>/Switch' */

    /* DataStoreWrite: '<S12>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S12>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* M-S-Function: '<S99>/Level-2 M-file S-Function' incorporates:
     *  DataTypeConversion: '<S12>/Cast'
     */
    rtb_Level2MfileSFunction = setSlotTime;

    /* RelationalOperator: '<S12>/Equal' incorporates:
     *  DataStoreRead: '<S12>/Data Store Read2'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= rtb_Level2MfileSFunction);

    /* Outputs for Triggered SubSystem: '<S12>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S98>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S98>/Switch' incorporates:
       *  Constant: '<S98>/Constant1'
       *  DataStoreRead: '<S98>/Data Store Read1'
       *  DataTypeConversion: '<S98>/Cast'
       *  RelationalOperator: '<S98>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S98>/Switch' incorporates:
         *  Constant: '<S98>/Constant'
         *  DataStoreRead: '<S98>/Data Store Read'
         *  Sum: '<S98>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S98>/Switch' incorporates:
         *  Constant: '<S98>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S98>/Switch' */

      /* DataStoreWrite: '<S98>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S98>/Data Store Write1' incorporates:
       *  Constant: '<S98>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S12>/Enabled Subsystem' */
    /* M-S-Function: '<S99>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S12>/Sum' incorporates:
     *  Constant: '<S12>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S100>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S12>/Constant1'
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

  /* InitializeConditions for MATLABSystem: '<S78>/Moving Average' */
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0F;
    for (i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = 0.0F;
    }

    obj->pCumRevIndex = 1.0F;
    obj->pModValueRev = 0.0F;
  }

  /* End of InitializeConditions for MATLABSystem: '<S78>/Moving Average' */
}

/* Start for atomic system: */
void MovingAverage_Start(rtDW_MovingAverage *localDW)
{
  /* Start for MATLABSystem: '<S78>/Moving Average' */
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

  /* MATLABSystem: '<S78>/Moving Average' */
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

  /* MATLABSystem: '<S78>/Moving Average' */
  localB->MovingAverage_n = 0.0F;

  /* MATLABSystem: '<S78>/Moving Average' */
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
    /* MATLABSystem: '<S78>/Moving Average' */
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
 *    '<S118>/Enabled Subsystem'
 *    '<S121>/Enabled Subsystem'
 *    '<S124>/Enabled Subsystem'
 *    '<S130>/Enabled Subsystem'
 *    '<S199>/Enabled Subsystem'
 *    '<S246>/Enabled Subsystem'
 *    '<S271>/Enabled Subsystem'
 *    '<S318>/Enabled Subsystem'
 *    '<S365>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In5;
  uint8_T rtb_In6;
  uint8_T rtb_In8;

  /* Outputs for Enabled SubSystem: '<S118>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S119>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S119>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S119>/In3' */
    localB->In3 = rtu_In3;

    /* SignalConversion generated from: '<S119>/In4' */
    localB->In4 = rtu_In4;

    /* SignalConversion generated from: '<S119>/In5' */
    rtb_In5 = rtu_In5;

    /* SignalConversion generated from: '<S119>/In6' */
    rtb_In6 = rtu_In6;

    /* SignalConversion generated from: '<S119>/In7' */
    localB->In7 = rtu_In7;

    /* SignalConversion generated from: '<S119>/In8' */
    rtb_In8 = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S118>/Enabled Subsystem' */
}

/*
 * Output and update for trigger system:
 *    '<S13>/MMBS1_TX'
 *    '<S13>/SSTM1_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S13>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S103>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S120>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S13>/MMBS1_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S128>/Bit Shift'
 *    '<S129>/Bit Shift'
 *    '<S197>/Bit Shift'
 *    '<S198>/Bit Shift'
 *    '<S244>/Bit Shift'
 *    '<S245>/Bit Shift'
 *    '<S269>/Bit Shift'
 *    '<S270>/Bit Shift'
 *    '<S316>/Bit Shift'
 *    '<S317>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S132>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S133>:1' */
  /* '<S133>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift'
 *    '<S131>/Bit Shift7'
 *    '<S200>/Bit Shift'
 *    '<S200>/Bit Shift7'
 *    '<S247>/Bit Shift'
 *    '<S247>/Bit Shift7'
 *    '<S272>/Bit Shift'
 *    '<S272>/Bit Shift7'
 *    '<S319>/Bit Shift'
 *    '<S319>/Bit Shift7'
 */
void BitShift_g(uint8_T rtu_u, rtB_BitShift_l *localB)
{
  /* MATLAB Function: '<S137>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S145>:1' */
  /* '<S145>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 1);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift1'
 *    '<S200>/Bit Shift1'
 *    '<S247>/Bit Shift1'
 *    '<S272>/Bit Shift1'
 *    '<S319>/Bit Shift1'
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S138>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S146>:1' */
  /* '<S146>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 2);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift2'
 *    '<S200>/Bit Shift2'
 *    '<S247>/Bit Shift2'
 *    '<S272>/Bit Shift2'
 *    '<S319>/Bit Shift2'
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S139>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S147>:1' */
  /* '<S147>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 3);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift3'
 *    '<S200>/Bit Shift3'
 *    '<S247>/Bit Shift3'
 *    '<S272>/Bit Shift3'
 *    '<S319>/Bit Shift3'
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S140>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S148>:1' */
  /* '<S148>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift4'
 *    '<S200>/Bit Shift4'
 *    '<S247>/Bit Shift4'
 *    '<S272>/Bit Shift4'
 *    '<S319>/Bit Shift4'
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S141>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S149>:1' */
  /* '<S149>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift5'
 *    '<S200>/Bit Shift5'
 *    '<S247>/Bit Shift5'
 *    '<S272>/Bit Shift5'
 *    '<S319>/Bit Shift5'
 */
void BitShift5(uint8_T rtu_u, rtB_BitShift5 *localB)
{
  /* MATLAB Function: '<S142>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S150>:1' */
  /* '<S150>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 6);
}

/*
 * Output and update for atomic system:
 *    '<S131>/Bit Shift6'
 *    '<S200>/Bit Shift6'
 *    '<S247>/Bit Shift6'
 *    '<S272>/Bit Shift6'
 *    '<S319>/Bit Shift6'
 */
void BitShift6(uint8_T rtu_u, rtB_BitShift6 *localB)
{
  /* MATLAB Function: '<S143>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S151>:1' */
  /* '<S151>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift'
 *    '<S176>/Bit Shift'
 *    '<S223>/Bit Shift'
 *    '<S295>/Bit Shift'
 *    '<S342>/Bit Shift'
 */
void BitShift_gy(uint8_T rtu_u, rtB_BitShift_o *localB)
{
  /* MATLAB Function: '<S157>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S164>:1' */
  /* '<S164>:1:6' */
  localB->y = (uint8_T)(rtu_u << 2);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift1'
 *    '<S176>/Bit Shift1'
 *    '<S223>/Bit Shift1'
 *    '<S295>/Bit Shift1'
 *    '<S342>/Bit Shift1'
 */
void BitShift1_b(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S158>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S165>:1' */
  /* '<S165>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift2'
 *    '<S176>/Bit Shift2'
 *    '<S223>/Bit Shift2'
 *    '<S295>/Bit Shift2'
 *    '<S342>/Bit Shift2'
 */
void BitShift2_p(uint8_T rtu_u, rtB_BitShift2_e *localB)
{
  /* MATLAB Function: '<S159>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S166>:1' */
  /* '<S166>:1:6' */
  localB->y = (uint8_T)(rtu_u << 3);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift3'
 *    '<S176>/Bit Shift3'
 *    '<S223>/Bit Shift3'
 *    '<S295>/Bit Shift3'
 *    '<S342>/Bit Shift3'
 */
void BitShift3_l(uint8_T rtu_u, rtB_BitShift3_g *localB)
{
  /* MATLAB Function: '<S160>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S167>:1' */
  /* '<S167>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift4'
 *    '<S176>/Bit Shift4'
 *    '<S223>/Bit Shift4'
 *    '<S295>/Bit Shift4'
 *    '<S342>/Bit Shift4'
 */
void BitShift4_g(uint8_T rtu_u, rtB_BitShift4_g *localB)
{
  /* MATLAB Function: '<S161>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S168>:1' */
  /* '<S168>:1:6' */
  localB->y = (uint8_T)(rtu_u << 5);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift5'
 *    '<S176>/Bit Shift5'
 *    '<S223>/Bit Shift5'
 *    '<S295>/Bit Shift5'
 *    '<S342>/Bit Shift5'
 */
void BitShift5_n(uint8_T rtu_u, rtB_BitShift5_e *localB)
{
  /* MATLAB Function: '<S162>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S169>:1' */
  /* '<S169>:1:6' */
  localB->y = (uint8_T)(rtu_u << 6);
}

/*
 * Output and update for atomic system:
 *    '<S154>/Bit Shift6'
 *    '<S176>/Bit Shift6'
 *    '<S223>/Bit Shift6'
 *    '<S295>/Bit Shift6'
 *    '<S342>/Bit Shift6'
 */
void BitShift6_d(uint8_T rtu_u, rtB_BitShift6_b *localB)
{
  /* MATLAB Function: '<S163>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S170>:1' */
  /* '<S170>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

/*
 * Output and update for atomic system:
 *    '<S155>/Bit Shift'
 *    '<S156>/Bit Shift'
 *    '<S177>/Bit Shift'
 *    '<S178>/Bit Shift'
 *    '<S224>/Bit Shift'
 *    '<S225>/Bit Shift'
 *    '<S296>/Bit Shift'
 *    '<S297>/Bit Shift'
 *    '<S343>/Bit Shift'
 *    '<S344>/Bit Shift'
 */
void BitShift_o(uint16_T rtu_u, rtB_BitShift_c *localB)
{
  /* MATLAB Function: '<S171>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S172>:1' */
  /* '<S172>:1:8' */
  localB->y = (uint16_T)((uint32_T)rtu_u >> 8);
}

/*
 * Output and update for trigger system:
 *    '<S13>/TRCK1_ID2_TX'
 *    '<S13>/TRCK1_ID3_TX'
 */
void TRCK1_ID2_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, const uint8_T
                  *rtd_Local_Ticks, const boolean_T *rtd_motorFailed, const
                  boolean_T *rtd_potFault, const uint16_T *rtd_potentiometer1,
                  const uint16_T *rtd_potentiometer2, rtB_TRCK1_ID2_TX *localB,
                  const rtC_TRCK1_ID2_TX *localC, rtZCE_TRCK1_ID2_TX *localZCE)
{
  uint8_T rtb_Cast1_j;

  /* Outputs for Triggered SubSystem: '<S13>/TRCK1_ID2_TX' incorporates:
   *  TriggerPort: '<S109>/Trigger'
   */
  if (rtu_Trigger && (localZCE->TRCK1_ID2_TX_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreRead: '<S109>/Data Store Read2' */
    localB->DataStoreRead2 = *rtd_Local_Ticks;

    /* DataTypeConversion: '<S154>/Cast1' incorporates:
     *  DataStoreRead: '<S109>/Data Store Read4'
     */
    rtb_Cast1_j = *rtd_potFault;

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift1' */
    BitShift1_b(rtb_Cast1_j, &localB->BitShift1_b0);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift1' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift' */
    BitShift_gy(localC->Cast, &localB->BitShift_gyk);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift2' */
    BitShift2_p(localC->Cast2, &localB->BitShift2_pw);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift2' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift3' */
    BitShift3_l(localC->Cast3, &localB->BitShift3_lh);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift4' */
    BitShift4_g(localC->Cast4, &localB->BitShift4_g2);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift5' */
    BitShift5_n(localC->Cast5, &localB->BitShift5_nr);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift5' */

    /* Outputs for Atomic SubSystem: '<S154>/Bit Shift6' */
    BitShift6_d(localC->Cast6, &localB->BitShift6_dc);

    /* End of Outputs for SubSystem: '<S154>/Bit Shift6' */

    /* Sum: '<S154>/Add' incorporates:
     *  DataStoreRead: '<S109>/Data Store Read3'
     *  DataTypeConversion: '<S154>/Cast7'
     */
    localB->Add = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
      (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
      ((uint32_T)*rtd_motorFailed + localB->BitShift1_b0.y) +
      localB->BitShift_gyk.y) + localB->BitShift2_pw.y) + localB->BitShift3_lh.y)
      + localB->BitShift4_g2.y) + localB->BitShift5_nr.y) +
      localB->BitShift6_dc.y);

    /* Outputs for Atomic SubSystem: '<S155>/Bit Shift' */
    /* DataStoreRead: '<S109>/Data Store Read1' */
    BitShift_o(*rtd_potentiometer2, &localB->BitShift_of);

    /* End of Outputs for SubSystem: '<S155>/Bit Shift' */

    /* DataTypeConversion: '<S155>/Cast' */
    localB->Cast = (uint8_T)localB->BitShift_of.y;

    /* DataTypeConversion: '<S155>/Cast1' incorporates:
     *  DataStoreRead: '<S109>/Data Store Read1'
     */
    localB->Cast1 = (uint8_T)*rtd_potentiometer2;

    /* Outputs for Atomic SubSystem: '<S156>/Bit Shift' */
    /* DataStoreRead: '<S109>/Data Store Read' */
    BitShift_o(*rtd_potentiometer1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S156>/Bit Shift' */

    /* DataTypeConversion: '<S156>/Cast' */
    localB->Cast_k = (uint8_T)localB->BitShift_h.y;

    /* DataTypeConversion: '<S156>/Cast1' incorporates:
     *  DataStoreRead: '<S109>/Data Store Read'
     */
    localB->Cast1_i = (uint8_T)*rtd_potentiometer1;

    /* Update for M-S-Function: '<S153>/S-Function' incorporates:
     *  Constant: '<S109>/Constant'
     *  Constant: '<S109>/Constant1'
     */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = localB->Cast_k;
      canTxData.uint8_T_info[1] = localB->Cast1_i;
      canTxData.uint8_T_info[2] = localB->Cast;
      canTxData.uint8_T_info[3] = localB->Cast1;
      canTxData.uint8_T_info[4] = localB->DataStoreRead2;
      canTxData.uint8_T_info[5] = ((uint8_T)0U);
      canTxData.uint8_T_info[6] = localB->Add;
      canTxData.uint8_T_info[7] = ((uint8_T)0U);

      /* send the data */
      CanTransmit(0, rtu_In1, 8, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->TRCK1_ID2_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S13>/TRCK1_ID2_TX' */
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
  boolean_T rtb_Level2MfileSFunction_j;
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
  int8_T tmp_0;
  int8_T tmp_1;
  uint8_T rtb_Cast1_cy;
  uint8_T rtb_Cast1_j;
  uint8_T rtb_Cast1_m;
  uint8_T rtb_Multiply;
  uint8_T rtb_Multiply1;
  boolean_T rtb_AND;
  boolean_T rtb_AND10;
  boolean_T rtb_AND13;
  boolean_T rtb_AND15;
  boolean_T rtb_AND1_k;
  boolean_T rtb_AND2;
  boolean_T rtb_AND3;
  boolean_T rtb_AND4;
  boolean_T rtb_AND5;
  boolean_T rtb_AND7;
  boolean_T rtb_AND8;
  boolean_T rtb_AND9;
  boolean_T rtb_DataStoreRead11;
  boolean_T rtb_Equal17;
  boolean_T rtb_Logic_f_idx_0;
  boolean_T rtb_Logic_idx_0;
  boolean_T rtb_OR1;
  ZCEventType zcEvent;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S11>/Data Store Write' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S97>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S11>/Constant'
     *  Constant: '<S11>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* Logic: '<S15>/AND' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant4'
   *  DataStoreRead: '<S15>/Data Store Read1'
   *  RelationalOperator: '<S15>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (rtDWork.nodeRole == ((uint8_T)1U)));

  /* Logic: '<S15>/OR' incorporates:
   *  DataStoreRead: '<S15>/Data Store Read2'
   */
  rtB.OR = (rtb_AND || rtDWork.slaveClockOn);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
   *  Constant: '<S16>/Constant27'
   *  RelationalOperator: '<S16>/Equal19'
   */
  rtb_Level2MfileSFunction_j = (slotSelected == 10.0);

  /* Logic: '<S16>/OR1' incorporates:
   *  Constant: '<S16>/Constant4'
   *  RelationalOperator: '<S16>/Equal4'
   */
  rtb_OR1 = ((slotSelected == 5.0) || rtb_Level2MfileSFunction_j);

  /* Outputs for Triggered SubSystem: '<S1>/Control execution' incorporates:
   *  TriggerPort: '<S5>/Trigger'
   */
  if (rtb_OR1 && (rtPrevZCSigState.Controlexecution_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreRead: '<S5>/Data Store Read' */
    reqAngle = rtDWork.requestedAngle;

    /* Product: '<S74>/Product' incorporates:
     *  Constant: '<S20>/TrailUnitWheelbase'
     *  Trigonometry: '<S74>/tan '
     */
    rtb_Uk1 = tan(reqAngle) * rtConstB.Abs / 4.0;

    /* DataStoreRead: '<S5>/Data Store Read2' */
    t2Angle = rtDWork.trailerTwoAngle;

    /* DataStoreRead: '<S5>/Data Store Read1' */
    t1Angle = rtDWork.trailerOneAngle;

    /* Sum: '<S20>/Sum2' */
    Gamma2 = (uint16_T)(t1Angle - t2Angle);

    /* Trigonometry: '<S72>/tan 1' incorporates:
     *  DataTypeConversion: '<S72>/Cast'
     *  Trigonometry: '<S73>/tan '
     */
    rtb_IntegralGain = sin(Gamma2);

    /* Trigonometry: '<S72>/tan 2' incorporates:
     *  DataTypeConversion: '<S72>/Cast'
     *  Trigonometry: '<S73>/tan 1'
     */
    rtb_Integrator_tmp = cos(Gamma2);

    /* Sum: '<S72>/Add' incorporates:
     *  Constant: '<S20>/TrailUnitWheelbase'
     *  Constant: '<S5>/Constant'
     *  Product: '<S72>/Product1'
     *  Product: '<S72>/Product2'
     *  Trigonometry: '<S72>/tan 1'
     *  Trigonometry: '<S72>/tan 2'
     */
    rtb_Integrator = rtb_Uk1 * 4.0 * rtb_IntegralGain + rtb_Integrator_tmp * 0.5;

    /* Sum: '<S20>/Sum1' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    Gamma1 = 0.0 - (real_T)t1Angle;

    /* Product: '<S73>/Product' incorporates:
     *  Constant: '<S20>/RearAxleToHitch'
     *  Constant: '<S20>/TrailUnitWheelbase'
     *  Constant: '<S5>/Constant'
     *  Gain: '<S73>/Gain'
     *  Product: '<S73>/Product1'
     *  Product: '<S73>/Product3'
     *  Sum: '<S73>/Add'
     */
    rtb_IntegralGain = (0.5 / 1.0 * rtb_IntegralGain * (-1.0) +
                        rtb_Integrator_tmp / 1.0 * 4.0 * rtb_Uk1) *
      (rtConstB.signV2 * rtConstB.signL0b);

    /* Trigonometry: '<S77>/tan ' incorporates:
     *  DataTypeConversion: '<S77>/Cast'
     *  Trigonometry: '<S76>/tan 1'
     */
    rtb_Uk1 = sin(Gamma1);

    /* Trigonometry: '<S77>/tan 1' incorporates:
     *  DataTypeConversion: '<S77>/Cast'
     *  Trigonometry: '<S76>/tan 2'
     */
    rtb_Integrator_tmp = cos(Gamma1);

    /* Signum: '<S77>/Sign' */
    if (rtb_Integrator < 0.0) {
      tmp = -1.0;
    } else {
      tmp = (rtb_Integrator > 0.0);
    }

    /* Trigonometry: '<S75>/tan 1' incorporates:
     *  Constant: '<S20>/RearAxleToHitch'
     *  Constant: '<S20>/TractorWheelbase'
     *  Constant: '<S20>/TrailUnitWheelbase'
     *  DataTypeConversion: '<S75>/Cast'
     *  Gain: '<S77>/Gain'
     *  Product: '<S75>/Product1'
     *  Product: '<S76>/Product1'
     *  Product: '<S76>/Product2'
     *  Product: '<S77>/Product'
     *  Product: '<S77>/Product1'
     *  Product: '<S77>/Product3'
     *  Signum: '<S77>/Sign'
     *  Sum: '<S76>/Add'
     *  Sum: '<S77>/Add'
     *  Trigonometry: '<S77>/tan '
     *  Trigonometry: '<S77>/tan 1'
     */
    delta12K = (real32_T)atan((real32_T)((rtb_Integrator / 1.0 * rtb_Uk1 * (-1.0)
      + rtb_Integrator_tmp / 1.0 * 4.0 * rtb_IntegralGain) * (tmp *
      rtConstB.signL0b_o) * 3.0 / (rtb_IntegralGain * 4.0 * rtb_Uk1 +
      rtb_Integrator_tmp * rtb_Integrator)));

    /* Gain: '<S19>/Gain2' incorporates:
     *  DataTypeConversion: '<S19>/Cast3'
     */
    steering = 45.6 * delta12K;

    /* Gain: '<S19>/Gain1' incorporates:
     *  DataStoreRead: '<S19>/Data Store Read'
     */
    position = (real_T)1717986918 * 5.8207660913467407E-11 * (real_T)
      rtDWork.encoderPosition;

    /* Sum: '<S19>/Sum' incorporates:
     *  Rounding: '<S19>/Round'
     *  Rounding: '<S19>/Round1'
     */
    control = floor(steering) - floor(position);

    /* Abs: '<S19>/Abs' */
    rtb_IntegralGain = fabs(control);

    /* Sum: '<S64>/Sum' incorporates:
     *  DiscreteIntegrator: '<S55>/Integrator'
     *  Gain: '<S60>/Proportional Gain'
     */
    rtb_Uk1 = propVal * rtb_IntegralGain + rtDWork.Integrator_DSTATE;

    /* Saturate: '<S62>/Saturation' */
    if (rtb_Uk1 > 300.0) {
      tmp = 300.0;
    } else if (rtb_Uk1 < 0.0) {
      tmp = 0.0;
    } else {
      tmp = rtb_Uk1;
    }

    /* Sum: '<S19>/Add' incorporates:
     *  Constant: '<S19>/Motor dead zone'
     *  DataTypeConversion: '<S19>/Cast'
     *  Saturate: '<S62>/Saturation'
     */
    mospeed = (uint16_T)((uint32_T)((uint16_T)500U) + (uint16_T)tmp);

    /* DataStoreWrite: '<S5>/Data Store Write' */
    rtDWork.pwmMotor = mospeed;

    /* RelationalOperator: '<S19>/GreaterThan1' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtb_Equal17 = (rtb_IntegralGain > controlWidth);

    /* DataTypeConversion: '<S19>/Cast1' incorporates:
     *  Constant: '<S19>/Constant1'
     *  RelationalOperator: '<S19>/GreaterThan'
     */
    cw = (control > 0.0);

    /* Logic: '<S19>/AND' incorporates:
     *  DataStoreWrite: '<S5>/Data Store Write1'
     */
    rtDWork.cwMotor = (rtb_Equal17 && cw);

    /* Logic: '<S19>/NOT' */
    ccw = !cw;

    /* Logic: '<S19>/AND1' incorporates:
     *  DataStoreWrite: '<S5>/Data Store Write8'
     */
    rtDWork.ccwMotor = (rtb_Equal17 && ccw);

    /* DeadZone: '<S48>/DeadZone' */
    if (rtb_Uk1 > 300.0) {
      rtb_Uk1 -= 300.0;
    } else if (rtb_Uk1 >= 0.0) {
      rtb_Uk1 = 0.0;
    } else {
      rtb_Uk1 -= 0.0;
    }

    /* End of DeadZone: '<S48>/DeadZone' */

    /* Gain: '<S52>/Integral Gain' */
    rtb_IntegralGain *= intVal;

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S46>/Clamping_zero'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S46>/Constant2'
     *  RelationalOperator: '<S46>/fix for DT propagation issue'
     */
    if (rtb_Uk1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = (-1);
    }

    /* Switch: '<S46>/Switch2' incorporates:
     *  Constant: '<S46>/Clamping_zero'
     *  Constant: '<S46>/Constant3'
     *  Constant: '<S46>/Constant4'
     *  RelationalOperator: '<S46>/fix for DT propagation issue1'
     */
    if (rtb_IntegralGain > 0.0) {
      tmp_1 = 1;
    } else {
      tmp_1 = (-1);
    }

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S46>/Clamping_zero'
     *  Constant: '<S46>/Constant1'
     *  Logic: '<S46>/AND3'
     *  RelationalOperator: '<S46>/Equal1'
     *  RelationalOperator: '<S46>/Relational Operator'
     *  Switch: '<S46>/Switch1'
     *  Switch: '<S46>/Switch2'
     */
    if ((0.0 != rtb_Uk1) && (tmp_0 == tmp_1)) {
      rtb_IntegralGain = 0.0;
    }

    /* Update for DiscreteIntegrator: '<S55>/Integrator' incorporates:
     *  Switch: '<S46>/Switch'
     */
    rtDWork.Integrator_DSTATE += 1.0 * rtb_IntegralGain;
    if (rtDWork.Integrator_DSTATE >= 100.0) {
      rtDWork.Integrator_DSTATE = 100.0;
    } else if (rtDWork.Integrator_DSTATE <= 0.0) {
      rtDWork.Integrator_DSTATE = 0.0;
    }

    /* End of Update for DiscreteIntegrator: '<S55>/Integrator' */
  }

  rtPrevZCSigState.Controlexecution_Trig_ZCE = rtb_OR1;

  /* End of Outputs for SubSystem: '<S1>/Control execution' */

  /* Outputs for Triggered SubSystem: '<S1>/IO execution' incorporates:
   *  TriggerPort: '<S10>/Trigger'
   */
  if (rtb_OR1 && (rtPrevZCSigState.IOexecution_Trig_ZCE != POS_ZCSIG)) {
    IOexecution_ELAPS_T_tmp = rtM->Timing.clockTick0;
    IOexecution_ELAPS_T[0] = IOexecution_ELAPS_T_tmp -
      rtDWork.IOexecution_PREV_T[0];
    rtDWork.IOexecution_PREV_T[0] = IOexecution_ELAPS_T_tmp;
    rtDWork.IOexecution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* Delay: '<S80>/Delay' */
    mf1 = rtDWork.Delay_DSTATE[0];

    /* Delay: '<S80>/Delay1' */
    mf2 = rtDWork.Delay1_DSTATE[0];

    /* Delay: '<S80>/Delay2' */
    mf3 = rtDWork.Delay2_DSTATE[0];

    /* Delay: '<S80>/Delay4' */
    mf4 = rtDWork.Delay4_DSTATE[0];

    /* Delay: '<S80>/Delay3' */
    mf5 = rtDWork.Delay3_DSTATE[0];

    /* CombinatorialLogic: '<S91>/Logic' incorporates:
     *  Logic: '<S80>/AND1'
     *  Memory: '<S91>/Memory'
     */
    rtb_Logic_idx_0 = rtConstP.pooled23[((((uint32_T)(mf1 && mf2 && mf3 && mf4 &&
      mf5) << 1) + false) << 1) + rtDWork.Memory_PreviousInput];

    /* Logic: '<S80>/AND2' incorporates:
     *  Constant: '<S80>/Constant2'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S80>/Equal1'
     */
    motorFaultDetected = (rtb_Logic_idx_0 && (rtDWork.nodeRole == ((uint8_T)1U)));

    /* DataStoreWrite: '<S80>/Data Store Write' */
    rtDWork.motorFailed = motorFaultDetected;

    /* DataStoreRead: '<S80>/Data Store Read5' */
    potRaw = rtDWork.potentiometer1Raw;

    /* DataStoreRead: '<S80>/Data Store Read6' */
    lastPot = rtDWork.lastPot1;

    /* Sum: '<S80>/Add' incorporates:
     *  DataTypeConversion: '<S80>/Cast'
     *  DataTypeConversion: '<S80>/Cast1'
     */
    u = (int16_T)((int16_T)potRaw - (int16_T)lastPot);

    /* Abs: '<S80>/Abs' */
    if (u < 0) {
      u = (int16_T)-u;
    }

    /* CombinatorialLogic: '<S92>/Logic' incorporates:
     *  Abs: '<S80>/Abs'
     *  Constant: '<S80>/Constant1'
     *  Delay: '<S80>/Delay6'
     *  Logic: '<S80>/AND3'
     *  Memory: '<S92>/Memory'
     *  RelationalOperator: '<S80>/GreaterThan1'
     */
    rtb_Logic_f_idx_0 = rtConstP.pooled23[((((uint32_T)((u > 500) &&
      rtDWork.Delay6_DSTATE[0]) << 1) + false) << 1) +
      rtDWork.Memory_PreviousInput_a];

    /* DataStoreWrite: '<S80>/Data Store Write2' */
    rtDWork.potFault = rtb_Logic_f_idx_0;

    /* Delay: '<S80>/Delay7' incorporates:
     *  DataStoreWrite: '<S80>/Data Store Write1'
     */
    rtDWork.lastPot1 = rtDWork.Delay7_DSTATE[0];

    /* Logic: '<S80>/AND' incorporates:
     *  Constant: '<S80>/Constant'
     *  DataStoreRead: '<S80>/Data Store Read2'
     *  DataStoreRead: '<S80>/Data Store Read4'
     *  Delay: '<S80>/Delay5'
     *  RelationalOperator: '<S80>/Equal'
     *  RelationalOperator: '<S80>/GreaterThan'
     */
    rtb_Equal17 = ((rtDWork.Delay5_DSTATE[0] == rtDWork.encoderPosition) &&
                   (rtDWork.pwmMotor > ((uint16_T)650U)));

    /* SampleTimeMath: '<S90>/TSamp'
     *
     * About '<S90>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp = (uint16_T)(potRaw * 1000U / IOexecution_ELAPS_T[0]);

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

    /* DataStoreRead: '<S80>/Data Store Read11' */
    rtb_DataStoreRead11 = rtDWork.ioInitialized;

    /* MATLABSystem: '<S80>/Moving Average' */
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

    /* MATLABSystem: '<S80>/Moving Average' */
    derivativeMean = 0.0F;

    /* MATLABSystem: '<S80>/Moving Average' incorporates:
     *  DataTypeConversion: '<S80>/Cast2'
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
      /* MATLABSystem: '<S80>/Moving Average' */
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

    /* Outputs for Enabled SubSystem: '<S80>/Triggered Subsystem' incorporates:
     *  EnablePort: '<S93>/Enable'
     */
    /* Logic: '<S80>/NOT' incorporates:
     *  DataStoreRead: '<S80>/Data Store Read1'
     *  DataStoreRead: '<S80>/Data Store Read9'
     *  Logic: '<S80>/OR'
     */
    if ((!rtDWork.node4Active) && (!rtDWork.potReadNode4Fail)) {
      /* Gain: '<S93>/Gain' incorporates:
       *  DataStoreRead: '<S93>/Data Store Read'
       *  DataStoreWrite: '<S93>/Data Store Write1'
       */
      rtDWork.trailerOneAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
        rtDWork.potentiometer2) >> 22);
    } else {
      /* Outputs for Enabled SubSystem: '<S80>/Triggered Subsystem1' incorporates:
       *  EnablePort: '<S94>/Enable'
       */
      /* Gain: '<S94>/Gain' incorporates:
       *  DataStoreRead: '<S94>/Data Store Read1'
       *  DataStoreWrite: '<S94>/Data Store Write1'
       */
      rtDWork.trailerOneAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
        rtDWork.pot4_1) >> 22);

      /* End of Outputs for SubSystem: '<S80>/Triggered Subsystem1' */
    }

    /* End of Logic: '<S80>/NOT' */
    /* End of Outputs for SubSystem: '<S80>/Triggered Subsystem' */

    /* Outputs for Enabled SubSystem: '<S80>/Triggered Subsystem2' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    /* Logic: '<S80>/NOT1' incorporates:
     *  DataStoreRead: '<S80>/Data Store Read10'
     *  DataStoreRead: '<S80>/Data Store Read3'
     *  Logic: '<S80>/OR1'
     */
    if ((!rtDWork.node5Active) && (!rtDWork.potReadNode5Fail)) {
      /* Gain: '<S95>/Gain' incorporates:
       *  DataStoreRead: '<S95>/Data Store Read'
       *  DataStoreWrite: '<S95>/Data Store Write1'
       */
      rtDWork.trailerOneAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
        rtDWork.pot4_2) >> 22);
    } else {
      /* Outputs for Enabled SubSystem: '<S80>/Triggered Subsystem3' incorporates:
       *  EnablePort: '<S96>/Enable'
       */
      /* Gain: '<S96>/Gain' incorporates:
       *  DataStoreRead: '<S96>/Data Store Read1'
       *  DataStoreWrite: '<S96>/Data Store Write1'
       */
      rtDWork.trailerOneAngle = (uint16_T)(((uint32_T)((uint16_T)62602U) *
        rtDWork.pot5_1) >> 22);

      /* End of Outputs for SubSystem: '<S80>/Triggered Subsystem3' */
    }

    /* End of Logic: '<S80>/NOT1' */
    /* End of Outputs for SubSystem: '<S80>/Triggered Subsystem2' */

    /* DataStoreRead: '<S80>/Data Store Read7' */
    i = rtDWork.encoderPosition;

    /* DataStoreRead: '<S80>/Data Store Read8' */
    rtb_DataStoreRead8 = rtDWork.potentiometer1Raw;

    /* M-S-Function: '<S82>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    analogPot1 = AninGet(ANIN_PORTF_PIN7,0);

    /* DataTypeConversion: '<S78>/Cast' */
    rtb_Cast_m = analogPot1;
    MovingAverage(rtb_Cast_m, &rtB.MovingAverage_p, &rtDWork.MovingAverage_p);

    /* DataTypeConversion: '<S78>/Cast1' */
    pot1 = (uint16_T)rtB.MovingAverage_p.MovingAverage_n;

    /* DataStoreWrite: '<S78>/Data Store Write1' */
    rtDWork.potentiometer1 = pot1;

    /* DataStoreWrite: '<S78>/Data Store Write4' */
    rtDWork.potentiometer1Raw = analogPot1;

    /* M-S-Function: '<S83>/Level-2 M-file S-Function' */
    /* read from analog input for filtered inputs*/
    analogPot2 = AninGet(ANIN_PORTF_PIN8,0);

    /* DataTypeConversion: '<S78>/Cast3' */
    rtb_Cast3 = analogPot2;
    MovingAverage(rtb_Cast3, &rtB.MovingAverage1, &rtDWork.MovingAverage1);

    /* DataTypeConversion: '<S78>/Cast2' */
    pot2 = (uint16_T)rtB.MovingAverage1.MovingAverage_n;

    /* DataStoreWrite: '<S78>/Data Store Write3' */
    rtDWork.potentiometer2 = pot2;

    /* DataStoreWrite: '<S78>/Data Store Write5' */
    rtDWork.ioInitialized = ioInit;

    /* Gain: '<S78>/Gain' incorporates:
     *  Constant: '<S78>/Constant2'
     *  DataStoreWrite: '<S78>/Data Store Write2'
     */
    rtDWork.requestedAngle = 0.015001500150015003 * desiredAngle;

    /* M-S-Function: '<S81>/Level-2 M-file S-Function' */
    /* determine if the counter needs a reset  */
    if (rtB.DataTypeConversion > 0) {
      QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
    }

    /* read counter from the quadrature encoder module */
    motorPos = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

    /* DataStoreWrite: '<S78>/Data Store Write' */
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

    /* Switch: '<S79>/Switch' incorporates:
     *  Switch: '<S79>/Switch1'
     *  Switch: '<S79>/Switch2'
     */
    if (canActive) {
      /* Switch: '<S79>/Switch' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read'
       */
      rtB.Switch = rtDWork.pwmMotor;

      /* Switch: '<S79>/Switch1' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read1'
       */
      rtB.Switch1 = rtDWork.cwMotor;

      /* Switch: '<S79>/Switch2' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read3'
       */
      rtB.Switch2 = rtDWork.ccwMotor;
    } else {
      /* Switch: '<S79>/Switch' */
      rtB.Switch = rtConstB.Cast;

      /* Switch: '<S79>/Switch1' */
      rtB.Switch1 = rtConstB.Cast1;

      /* Switch: '<S79>/Switch2' */
      rtB.Switch2 = rtConstB.Cast2_p;
    }

    /* End of Switch: '<S79>/Switch' */
    /* RelationalOperator: '<S79>/NotEqual' incorporates:
     *  Constant: '<S79>/Constant'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtB.NotEqual = (rtDWork.nodeRole != ((uint8_T)1U));

    /* Update for Delay: '<S80>/Delay' */
    rtDWork.Delay_DSTATE[0] = rtDWork.Delay_DSTATE[1];
    rtDWork.Delay_DSTATE[1] = rtb_Equal17;

    /* Update for Delay: '<S80>/Delay1' */
    for (idxDelay = 0; idxDelay < 8; idxDelay++) {
      rtDWork.Delay1_DSTATE[idxDelay] = rtDWork.Delay1_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay1_DSTATE[8] = rtb_Equal17;

    /* End of Update for Delay: '<S80>/Delay1' */

    /* Update for Delay: '<S80>/Delay2' */
    for (idxDelay = 0; idxDelay < 15; idxDelay++) {
      rtDWork.Delay2_DSTATE[idxDelay] = rtDWork.Delay2_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay2_DSTATE[15] = rtb_Equal17;

    /* End of Update for Delay: '<S80>/Delay2' */

    /* Update for Delay: '<S80>/Delay4' */
    for (idxDelay = 0; idxDelay < 24; idxDelay++) {
      rtDWork.Delay4_DSTATE[idxDelay] = rtDWork.Delay4_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay4_DSTATE[24] = rtb_Equal17;

    /* End of Update for Delay: '<S80>/Delay4' */

    /* Update for Delay: '<S80>/Delay3' */
    for (idxDelay = 0; idxDelay < 34; idxDelay++) {
      rtDWork.Delay3_DSTATE[idxDelay] = rtDWork.Delay3_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay3_DSTATE[34] = rtb_Equal17;

    /* End of Update for Delay: '<S80>/Delay3' */

    /* Update for Memory: '<S91>/Memory' */
    rtDWork.Memory_PreviousInput = rtb_Logic_idx_0;

    /* Update for Delay: '<S80>/Delay6' */
    for (idxDelay = 0; idxDelay < 9; idxDelay++) {
      rtDWork.Delay6_DSTATE[idxDelay] = rtDWork.Delay6_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay6_DSTATE[9] = rtb_DataStoreRead11;

    /* End of Update for Delay: '<S80>/Delay6' */

    /* Update for Memory: '<S92>/Memory' */
    rtDWork.Memory_PreviousInput_a = rtb_Logic_f_idx_0;

    /* Update for Delay: '<S80>/Delay5' */
    for (idxDelay = 0; idxDelay < 6; idxDelay++) {
      rtDWork.Delay5_DSTATE[idxDelay] = rtDWork.Delay5_DSTATE[idxDelay + 1];
    }

    rtDWork.Delay5_DSTATE[6] = i;

    /* End of Update for Delay: '<S80>/Delay5' */

    /* Update for Delay: '<S80>/Delay7' */
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
    if (rtB.NotEqual == 0) {
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
   *  EnablePort: '<S13>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S13>/Constant1'
     *  RelationalOperator: '<S13>/Equal1'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 2.0);

    /* Logic: '<S101>/AND16' incorporates:
     *  Constant: '<S101>/Constant4'
     *  DataStoreRead: '<S101>/Data Store Read'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S101>/Equal4'
     */
    rtb_OR1 = ((rtDWork.nodeRole == 2.0) && rtDWork.node1CanFailed);

    /* Logic: '<S13>/OR' incorporates:
     *  Constant: '<S13>/Constant13'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S13>/Equal11'
     */
    rtb_DataStoreRead11 = ((rtDWork.nodeRole == 1.0) || rtb_OR1);

    /* Logic: '<S13>/AND3' incorporates:
     *  Logic: '<S13>/NOT1'
     */
    rtb_AND3 = (rtb_Level2MfileSFunction_j && (!rtb_DataStoreRead11));

    /* Outputs for Enabled SubSystem: '<S13>/MMBS1_RX' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if (rtb_AND3) {
      rtDWork.MMBS1_RX_MODE = true;

      /* Logic: '<S102>/NOT' incorporates:
       *  Constant: '<S102>/Constant'
       *  DataStoreRead: '<S102>/Data Store Read'
       *  RelationalOperator: '<S102>/Equal'
       */
      masterCanFail = (rtDWork.receiveSync != true);

      /* DataStoreWrite: '<S102>/Data Store Write' */
      rtDWork.node1CanFailed = masterCanFail;

      /* DataStoreWrite: '<S102>/Data Store Write1' incorporates:
       *  Constant: '<S102>/Constant1'
       */
      rtDWork.receiveSync = false;

      /* M-S-Function: '<S118>/S-Function' incorporates:
       *  Constant: '<S13>/Constant12'
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

      /* Outputs for Enabled SubSystem: '<S118>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n2,
                       rtb_SFunction_o3_b, rtb_SFunction_o4_l,
                       rtb_SFunction_o5_e, rtb_SFunction_o6_k1,
                       rtb_SFunction_o7_dj, rtb_SFunction_o8_n1,
                       rtb_SFunction_o9_ok, &rtB.EnabledSubsystem_k);

      /* End of Outputs for SubSystem: '<S118>/Enabled Subsystem' */
    } else if (rtDWork.MMBS1_RX_MODE) {
      rtDWork.MMBS1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/MMBS1_RX' */

    /* Logic: '<S13>/AND2' */
    rtb_AND2 = (rtb_Level2MfileSFunction_j && rtb_DataStoreRead11);

    /* Outputs for Triggered SubSystem: '<S13>/MMBS1_TX' */
    /* Constant: '<S13>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S13>/MMBS1_TX' */

    /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S13>/Constant2'
     *  RelationalOperator: '<S13>/Equal2'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == 3.0);

    /* Logic: '<S13>/OR2' incorporates:
     *  Constant: '<S13>/Constant15'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S13>/Equal12'
     */
    rtb_DataStoreRead11 = ((rtDWork.nodeRole == 1.0) || rtb_OR1);

    /* Logic: '<S13>/AND5' incorporates:
     *  Logic: '<S13>/NOT2'
     */
    rtb_AND5 = (rtb_Level2MfileSFunction_j && (!rtb_DataStoreRead11));

    /* Outputs for Enabled SubSystem: '<S13>/SSTM1_RX' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtb_AND5) {
      rtDWork.SSTM1_RX_MODE = true;

      /* M-S-Function: '<S121>/S-Function' incorporates:
       *  Constant: '<S13>/Constant14'
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

      /* Outputs for Enabled SubSystem: '<S121>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_b, rtb_SFunction_o2_c,
                       rtb_SFunction_o3_f, rtb_SFunction_o4_k,
                       rtb_SFunction_o5_h, rtb_SFunction_o6_k,
                       rtb_SFunction_o7_e, rtb_SFunction_o8_pe,
                       rtb_SFunction_o9_f, &rtB.EnabledSubsystem_h);

      /* End of Outputs for SubSystem: '<S121>/Enabled Subsystem' */
    } else if (rtDWork.SSTM1_RX_MODE) {
      rtDWork.SSTM1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/SSTM1_RX' */

    /* Logic: '<S13>/AND4' */
    rtb_AND4 = (rtb_Level2MfileSFunction_j && rtb_DataStoreRead11);

    /* Outputs for Triggered SubSystem: '<S13>/SSTM1_TX' */
    /* Constant: '<S13>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S13>/SSTM1_TX' */

    /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S13>/Constant'
     *  RelationalOperator: '<S13>/Equal'
     */
    rtb_Level2MfileSFunction_j = (slotSelected == ((uint8_T)1U));

    /* Logic: '<S13>/OR1' incorporates:
     *  Constant: '<S13>/Constant11'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S13>/Equal10'
     */
    rtb_OR1 = ((rtDWork.nodeRole == ((uint8_T)1U)) || rtb_OR1);

    /* Logic: '<S13>/AND1' incorporates:
     *  Logic: '<S13>/NOT'
     */
    rtb_AND1_k = (rtb_Level2MfileSFunction_j && (!rtb_OR1));

    /* Outputs for Enabled SubSystem: '<S13>/SYNC1_RX' incorporates:
     *  EnablePort: '<S106>/Enable'
     */
    if (rtb_AND1_k) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S124>/S-Function' incorporates:
       *  Constant: '<S13>/Constant10'
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

      /* Outputs for Enabled SubSystem: '<S124>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_h, rtb_SFunction_o2_ib,
                       rtb_SFunction_o3_g, rtb_SFunction_o4_j,
                       rtb_SFunction_o5_f, rtb_SFunction_o6_gy,
                       rtb_SFunction_o7_k, rtb_SFunction_o8_n,
                       rtb_SFunction_o9_b1, &rtB.EnabledSubsystem_c);

      /* End of Outputs for SubSystem: '<S124>/Enabled Subsystem' */

      /* Outputs for Triggered SubSystem: '<S106>/Subsystem' incorporates:
       *  TriggerPort: '<S125>/Trigger'
       */
      zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                            &rtPrevZCSigState.Subsystem_Trig_ZCE_h,
                            (rtb_SFunction_o1_h));
      if (zcEvent != NO_ZCEVENT) {
        /* DataStoreWrite: '<S125>/Data Store Write' */
        rtDWork.SlotTime = rtB.EnabledSubsystem_c.In1;

        /* DataStoreWrite: '<S125>/Data Store Write1' incorporates:
         *  Constant: '<S125>/Constant'
         */
        rtDWork.Local_Ticks = ((uint8_T)1U);

        /* DataStoreWrite: '<S125>/Data Store Write2' incorporates:
         *  Constant: '<S125>/Constant1'
         */
        rtDWork.slot = ((uint8_T)1U);

        /* DataStoreWrite: '<S125>/Data Store Write3' incorporates:
         *  Constant: '<S125>/Constant2'
         */
        rtDWork.receiveSync = true;
      }

      /* End of Outputs for SubSystem: '<S106>/Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/SYNC1_RX' */

    /* Logic: '<S13>/AND' */
    boolCan = (rtb_Level2MfileSFunction_j && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S13>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S107>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S107>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S107>/Add' incorporates:
       *  Constant: '<S107>/Constant7'
       *  DataStoreWrite: '<S107>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S107>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S127>/S-Function' incorporates:
       *  Constant: '<S107>/Constant'
       *  Constant: '<S107>/Constant1'
       *  Constant: '<S107>/Constant2'
       *  Constant: '<S107>/Constant3'
       *  Constant: '<S107>/Constant4'
       *  Constant: '<S107>/Constant5'
       *  Constant: '<S107>/Constant6'
       *  Constant: '<S13>/Constant10'
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

    /* End of Outputs for SubSystem: '<S13>/SYNC1_TX' */

    /* RelationalOperator: '<S13>/Equal6' incorporates:
     *  Constant: '<S13>/Constant7'
     */
    rtb_OR1 = (slotSelected == 6.0);

    /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S13>/Constant6'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S13>/Equal5'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == 2.0);

    /* Logic: '<S13>/AND9' incorporates:
     *  Logic: '<S13>/NOT4'
     */
    rtb_AND9 = (rtb_OR1 && (!rtb_Level2MfileSFunction_j));

    /* Outputs for Enabled SubSystem: '<S13>/TRCK1_ID2_RX' incorporates:
     *  EnablePort: '<S108>/Enable'
     */
    if (rtb_AND9) {
      rtDWork.TRCK1_ID2_RX_MODE = true;

      /* M-S-Function: '<S130>/S-Function' incorporates:
       *  Constant: '<S13>/Constant5'
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

      /* Outputs for Enabled SubSystem: '<S130>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_p, rtb_SFunction_o2_n,
                       rtb_SFunction_o3_l, rtb_SFunction_o4_m,
                       rtb_SFunction_o5_i, rtb_SFunction_o6_o,
                       rtb_SFunction_o7_j, rtb_SFunction_o8_d,
                       rtb_SFunction_o9_lv, &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S130>/Enabled Subsystem' */

      /* DataTypeConversion: '<S129>/Cast' */
      rtb_Cast_o = rtB.EnabledSubsystem_b.In1;

      /* Outputs for Atomic SubSystem: '<S129>/Bit Shift' */
      BitShift(rtb_Cast_o, &rtB.BitShift_gvk);

      /* End of Outputs for SubSystem: '<S129>/Bit Shift' */

      /* Sum: '<S129>/Add' incorporates:
       *  DataTypeConversion: '<S129>/Cast1'
       */
      pot21 = (uint16_T)((uint32_T)rtB.BitShift_gvk.y +
                         rtB.EnabledSubsystem_b.In2);

      /* DataTypeConversion: '<S128>/Cast' */
      rtb_Cast_j = rtB.EnabledSubsystem_b.In3;

      /* Outputs for Atomic SubSystem: '<S128>/Bit Shift' */
      BitShift(rtb_Cast_j, &rtB.BitShift_gv);

      /* End of Outputs for SubSystem: '<S128>/Bit Shift' */

      /* Sum: '<S128>/Add' incorporates:
       *  DataTypeConversion: '<S128>/Cast1'
       */
      pot22 = (uint16_T)((uint32_T)rtB.BitShift_gv.y +
                         rtB.EnabledSubsystem_b.In4);

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_b.In7, &rtB.BitShift_gy3);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_b.In7, &rtB.BitShift1_g);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_b.In7, &rtB.BitShift2_i);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_b.In7, &rtB.BitShift3_c);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_b.In7, &rtB.BitShift4_e);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_b.In7, &rtB.BitShift5_b);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_b.In7, &rtB.BitShift6_o);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S131>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_b.In7, &rtB.BitShift7);

      /* End of Outputs for SubSystem: '<S131>/Bit Shift7' */
    } else if (rtDWork.TRCK1_ID2_RX_MODE) {
      rtDWork.TRCK1_ID2_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/TRCK1_ID2_RX' */

    /* Logic: '<S13>/AND8' */
    rtb_AND8 = (rtb_OR1 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S13>/TRCK1_ID2_TX' */
    /* Constant: '<S13>/Constant5' */
    TRCK1_ID2_TX(rtb_AND8, TRCK1_ID2, &rtDWork.Local_Ticks, &rtDWork.motorFailed,
                 &rtDWork.potFault, &rtDWork.potentiometer1,
                 &rtDWork.potentiometer2, &rtB.TRCK1_ID2_TX_f,
                 &rtConstB.TRCK1_ID2_TX_f, &rtPrevZCSigState.TRCK1_ID2_TX_f);

    /* End of Outputs for SubSystem: '<S13>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S13>/Equal14' incorporates:
     *  Constant: '<S13>/Constant20'
     */
    rtb_OR1 = (slotSelected == 7.0);

    /* M-S-Function: '<S9>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S13>/Constant19'
     *  DataStoreRead: '<S1>/Data Store Read'
     *  RelationalOperator: '<S13>/Equal7'
     */
    rtb_Level2MfileSFunction_j = (rtDWork.nodeRole == 3.0);

    /* Logic: '<S13>/AND10' */
    rtb_AND10 = (rtb_OR1 && rtb_Level2MfileSFunction_j);

    /* Outputs for Triggered SubSystem: '<S13>/TRCK1_ID3_TX' */
    /* Constant: '<S13>/Constant26' */
    TRCK1_ID2_TX(rtb_AND10, TRCK1_ID3, &rtDWork.Local_Ticks,
                 &rtDWork.motorFailed, &rtDWork.potFault,
                 &rtDWork.potentiometer1, &rtDWork.potentiometer2,
                 &rtB.TRCK1_ID3_TX, &rtConstB.TRCK1_ID3_TX,
                 &rtPrevZCSigState.TRCK1_ID3_TX);

    /* End of Outputs for SubSystem: '<S13>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S13>/Equal13' incorporates:
     *  Constant: '<S13>/Constant17'
     */
    rtb_DataStoreRead11 = (slotSelected == 4.0);

    /* RelationalOperator: '<S13>/Equal3' incorporates:
     *  Constant: '<S13>/Constant16'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Equal17 = (rtDWork.nodeRole == 1.0);

    /* Logic: '<S13>/AND7' incorporates:
     *  Logic: '<S13>/NOT3'
     */
    rtb_AND7 = (rtb_DataStoreRead11 && (!rtb_Equal17));

    /* Outputs for Enabled SubSystem: '<S13>/TRCK1_RX' incorporates:
     *  EnablePort: '<S111>/Enable'
     */
    if (rtb_AND7) {
      rtDWork.TRCK1_RX_MODE = true;

      /* M-S-Function: '<S199>/S-Function' incorporates:
       *  Constant: '<S13>/Constant3'
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

      /* Outputs for Enabled SubSystem: '<S199>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_ns, rtb_SFunction_o2_i,
                       rtb_SFunction_o3_i, rtb_SFunction_o4_n,
                       rtb_SFunction_o5_p, rtb_SFunction_o6_g,
                       rtb_SFunction_o7_fg, rtb_SFunction_o8_i,
                       rtb_SFunction_o9_o, &rtB.EnabledSubsystem_hn);

      /* End of Outputs for SubSystem: '<S199>/Enabled Subsystem' */

      /* DataTypeConversion: '<S198>/Cast' */
      rtb_Cast_d = rtB.EnabledSubsystem_hn.In1;

      /* Outputs for Atomic SubSystem: '<S198>/Bit Shift' */
      BitShift(rtb_Cast_d, &rtB.BitShift_j);

      /* End of Outputs for SubSystem: '<S198>/Bit Shift' */

      /* Sum: '<S198>/Add' incorporates:
       *  DataTypeConversion: '<S198>/Cast1'
       */
      pot11 = (uint16_T)((uint32_T)rtB.BitShift_j.y +
                         rtB.EnabledSubsystem_hn.In2);

      /* DataTypeConversion: '<S197>/Cast' */
      rtb_Cast_lr = rtB.EnabledSubsystem_hn.In3;

      /* Outputs for Atomic SubSystem: '<S197>/Bit Shift' */
      BitShift(rtb_Cast_lr, &rtB.BitShift_k);

      /* End of Outputs for SubSystem: '<S197>/Bit Shift' */

      /* Sum: '<S197>/Add' incorporates:
       *  DataTypeConversion: '<S197>/Cast1'
       */
      pot12 = (uint16_T)((uint32_T)rtB.BitShift_k.y +
                         rtB.EnabledSubsystem_hn.In4);

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift7_e);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift7' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift1_l);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift2_c);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift3_lj);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift4_a);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift5_bs);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S200>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_hn.In7, &rtB.BitShift6_i);

      /* End of Outputs for SubSystem: '<S200>/Bit Shift6' */
    } else if (rtDWork.TRCK1_RX_MODE) {
      rtDWork.TRCK1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/TRCK1_RX' */

    /* Logic: '<S13>/AND6' */
    rtb_Equal17 = (rtb_DataStoreRead11 && rtb_Equal17);

    /* Outputs for Triggered SubSystem: '<S13>/TRCK1_TX' incorporates:
     *  TriggerPort: '<S112>/Trigger'
     */
    if (rtb_Equal17 && (rtPrevZCSigState.TRCK1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S112>/Data Store Read2' */
      rtB.DataStoreRead2_h = rtDWork.Local_Ticks;

      /* DataStoreRead: '<S112>/Data Store Read4' */
      potFaultDetected = rtDWork.potFault;

      /* DataTypeConversion: '<S223>/Cast1' */
      rtb_Cast1_cy = potFaultDetected;

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_cy, &rtB.BitShift1_n);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_f, &rtB.BitShift_gk);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_i, &rtB.BitShift2_b);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_k, &rtB.BitShift3_b);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_b, &rtB.BitShift4_f);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_k, &rtB.BitShift5_i);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S223>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_i, &rtB.BitShift6_e);

      /* End of Outputs for SubSystem: '<S223>/Bit Shift6' */

      /* Sum: '<S223>/Add' incorporates:
       *  DataStoreRead: '<S112>/Data Store Read3'
       *  DataTypeConversion: '<S223>/Cast7'
       */
      rtB.Add_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtDWork.motorFailed + rtB.BitShift1_n.y) + rtB.BitShift_gk.y)
        + rtB.BitShift2_b.y) + rtB.BitShift3_b.y) + rtB.BitShift4_f.y) +
        rtB.BitShift5_i.y) + rtB.BitShift6_e.y);

      /* Outputs for Atomic SubSystem: '<S224>/Bit Shift' */
      /* DataStoreRead: '<S112>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_jy);

      /* End of Outputs for SubSystem: '<S224>/Bit Shift' */

      /* DataTypeConversion: '<S224>/Cast' */
      rtB.Cast_p = (uint8_T)rtB.BitShift_jy.y;

      /* DataTypeConversion: '<S224>/Cast1' incorporates:
       *  DataStoreRead: '<S112>/Data Store Read1'
       */
      rtB.Cast1_b = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S225>/Bit Shift' */
      /* DataStoreRead: '<S112>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_b);

      /* End of Outputs for SubSystem: '<S225>/Bit Shift' */

      /* DataTypeConversion: '<S225>/Cast' */
      rtB.Cast_a = (uint8_T)rtB.BitShift_b.y;

      /* DataTypeConversion: '<S225>/Cast1' incorporates:
       *  DataStoreRead: '<S112>/Data Store Read'
       */
      rtB.Cast1_n = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S222>/S-Function' incorporates:
       *  Constant: '<S112>/Constant'
       *  Constant: '<S112>/Constant1'
       *  Constant: '<S13>/Constant3'
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

    rtPrevZCSigState.TRCK1_TX_Trig_ZCE = rtb_Equal17;

    /* End of Outputs for SubSystem: '<S13>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S13>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S113>/Enable'
     */
    /* Logic: '<S13>/AND11' incorporates:
     *  Logic: '<S13>/NOT5'
     */
    if (rtb_OR1 && (!rtb_Level2MfileSFunction_j)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S246>/S-Function' incorporates:
       *  Constant: '<S13>/Constant26'
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

      /* Outputs for Enabled SubSystem: '<S246>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       rtb_SFunction_o3_a, rtb_SFunction_o4_i,
                       rtb_SFunction_o5_k, rtb_SFunction_o6_c,
                       rtb_SFunction_o7_d, rtb_SFunction_o8_h,
                       rtb_SFunction_o9_b, &rtB.EnabledSubsystem_bj);

      /* End of Outputs for SubSystem: '<S246>/Enabled Subsystem' */

      /* DataTypeConversion: '<S245>/Cast' */
      rtb_Cast_e1 = rtB.EnabledSubsystem_bj.In1;

      /* Outputs for Atomic SubSystem: '<S245>/Bit Shift' */
      BitShift(rtb_Cast_e1, &rtB.BitShift_p);

      /* End of Outputs for SubSystem: '<S245>/Bit Shift' */

      /* Sum: '<S245>/Add' incorporates:
       *  DataTypeConversion: '<S245>/Cast1'
       */
      pot31 = (uint16_T)((uint32_T)rtB.BitShift_p.y +
                         rtB.EnabledSubsystem_bj.In2);

      /* DataTypeConversion: '<S244>/Cast' */
      rtb_Cast_i = rtB.EnabledSubsystem_bj.In3;

      /* Outputs for Atomic SubSystem: '<S244>/Bit Shift' */
      BitShift(rtb_Cast_i, &rtB.BitShift_e);

      /* End of Outputs for SubSystem: '<S244>/Bit Shift' */

      /* Sum: '<S244>/Add' incorporates:
       *  DataTypeConversion: '<S244>/Cast1'
       */
      pot32 = (uint16_T)((uint32_T)rtB.BitShift_e.y +
                         rtB.EnabledSubsystem_bj.In4);

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift_f);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift1_a);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift2_cw);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift3_d);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift4_d);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift5_c);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift6_b);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S247>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_bj.In7, &rtB.BitShift7_j);

      /* End of Outputs for SubSystem: '<S247>/Bit Shift7' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S13>/AND11' */
    /* End of Outputs for SubSystem: '<S13>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S13>/Equal15' incorporates:
     *  Constant: '<S13>/Constant22'
     */
    rtb_Equal17 = (slotSelected == 8.0);

    /* RelationalOperator: '<S13>/Equal8' incorporates:
     *  Constant: '<S13>/Constant21'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_OR1 = (rtDWork.nodeRole == 4.0);

    /* Logic: '<S13>/AND13' incorporates:
     *  Logic: '<S13>/NOT6'
     */
    rtb_AND13 = (rtb_Equal17 && (!rtb_OR1));

    /* Outputs for Enabled SubSystem: '<S13>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S114>/Enable'
     */
    if (rtb_AND13) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S271>/S-Function' incorporates:
       *  Constant: '<S13>/Constant8'
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

      /* Outputs for Enabled SubSystem: '<S271>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k, rtb_SFunction_o2_e,
                       rtb_SFunction_o3_p, rtb_SFunction_o4_c,
                       rtb_SFunction_o5_c, rtb_SFunction_o6_e,
                       rtb_SFunction_o7_l, rtb_SFunction_o8_f,
                       rtb_SFunction_o9_h, &rtB.EnabledSubsystem_g);

      /* End of Outputs for SubSystem: '<S271>/Enabled Subsystem' */

      /* DataTypeConversion: '<S270>/Cast' */
      rtb_Cast_gh = rtB.EnabledSubsystem_g.In1;

      /* Outputs for Atomic SubSystem: '<S270>/Bit Shift' */
      BitShift(rtb_Cast_gh, &rtB.BitShift_n);

      /* End of Outputs for SubSystem: '<S270>/Bit Shift' */

      /* Sum: '<S270>/Add' incorporates:
       *  DataStoreWrite: '<S114>/Data Store Write1'
       *  DataTypeConversion: '<S270>/Cast1'
       */
      rtDWork.pot4_1 = (uint16_T)((uint32_T)rtB.BitShift_n.y +
        rtB.EnabledSubsystem_g.In2);

      /* DataTypeConversion: '<S269>/Cast' */
      rtb_Cast_ow = rtB.EnabledSubsystem_g.In3;

      /* Outputs for Atomic SubSystem: '<S269>/Bit Shift' */
      BitShift(rtb_Cast_ow, &rtB.BitShift_gu);

      /* End of Outputs for SubSystem: '<S269>/Bit Shift' */

      /* Sum: '<S269>/Add' incorporates:
       *  DataStoreWrite: '<S114>/Data Store Write2'
       *  DataTypeConversion: '<S269>/Cast1'
       */
      rtDWork.pot4_2 = (uint16_T)((uint32_T)rtB.BitShift_gu.y +
        rtB.EnabledSubsystem_g.In4);

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_g.In7, &rtB.BitShift_l);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift' */

      /* DataTypeConversion: '<S272>/Cast' incorporates:
       *  DataStoreWrite: '<S114>/Data Store Write4'
       */
      rtDWork.potReadNode4Fail = (rtB.BitShift_l.y != 0);

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_g.In7, &rtB.BitShift1_e);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_g.In7, &rtB.BitShift2_l);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_g.In7, &rtB.BitShift3_f);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_g.In7, &rtB.BitShift4_j);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_g.In7, &rtB.BitShift5_o);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_g.In7, &rtB.BitShift6_o5);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S272>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_g.In7, &rtB.BitShift7_m);

      /* End of Outputs for SubSystem: '<S272>/Bit Shift7' */
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/TRLS_ID4_RX' */

    /* Logic: '<S13>/AND12' */
    rtb_OR1 = (rtb_Equal17 && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S13>/TRLS_ID4_TX' incorporates:
     *  TriggerPort: '<S115>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S115>/Data Store Read2' */
      rtB.DataStoreRead2 = rtDWork.Local_Ticks;

      /* DataTypeConversion: '<S295>/Cast1' incorporates:
       *  DataStoreRead: '<S115>/Data Store Read4'
       */
      rtb_Cast1_m = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_m, &rtB.BitShift1_c);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_j, &rtB.BitShift_eg);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2_o, &rtB.BitShift2_l4);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3_g, &rtB.BitShift3_m);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4_l, &rtB.BitShift4_c);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5_h, &rtB.BitShift5_og);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S295>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6_e, &rtB.BitShift6_k);

      /* End of Outputs for SubSystem: '<S295>/Bit Shift6' */

      /* Sum: '<S295>/Add' */
      rtB.Add_f = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtConstB.Cast7_e + rtB.BitShift1_c.y) + rtB.BitShift_eg.y) +
        rtB.BitShift2_l4.y) + rtB.BitShift3_m.y) + rtB.BitShift4_c.y) +
        rtB.BitShift5_og.y) + rtB.BitShift6_k.y);

      /* Outputs for Atomic SubSystem: '<S296>/Bit Shift' */
      /* DataStoreRead: '<S115>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_h);

      /* End of Outputs for SubSystem: '<S296>/Bit Shift' */

      /* DataTypeConversion: '<S296>/Cast' */
      rtB.Cast_d = (uint8_T)rtB.BitShift_h.y;

      /* DataTypeConversion: '<S296>/Cast1' incorporates:
       *  DataStoreRead: '<S115>/Data Store Read1'
       */
      rtB.Cast1_c = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S297>/Bit Shift' */
      /* DataStoreRead: '<S115>/Data Store Read' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_d);

      /* End of Outputs for SubSystem: '<S297>/Bit Shift' */

      /* DataTypeConversion: '<S297>/Cast' */
      rtB.Cast_n = (uint8_T)rtB.BitShift_d.y;

      /* DataTypeConversion: '<S297>/Cast1' incorporates:
       *  DataStoreRead: '<S115>/Data Store Read'
       */
      rtB.Cast1_i = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S294>/S-Function' incorporates:
       *  Constant: '<S115>/Constant'
       *  Constant: '<S115>/Constant1'
       *  Constant: '<S13>/Constant8'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_n;
        canTxData.uint8_T_info[1] = rtB.Cast1_i;
        canTxData.uint8_T_info[2] = rtB.Cast_d;
        canTxData.uint8_T_info[3] = rtB.Cast1_c;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead2;
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = rtB.Add_f;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRLS1_ID4, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S13>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S13>/Equal17' incorporates:
     *  Constant: '<S13>/Constant25'
     */
    rtb_Equal17 = (slotSelected == 9.0);

    /* RelationalOperator: '<S13>/Equal16' incorporates:
     *  Constant: '<S13>/Constant24'
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_OR1 = (rtDWork.nodeRole == 5.0);

    /* Logic: '<S13>/AND15' incorporates:
     *  Logic: '<S13>/NOT7'
     */
    rtb_AND15 = (rtb_Equal17 && (!rtb_OR1));

    /* Outputs for Enabled SubSystem: '<S13>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S116>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S318>/S-Function' incorporates:
       *  Constant: '<S13>/Constant18'
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

      /* Outputs for Enabled SubSystem: '<S318>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_n, rtb_SFunction_o2_l,
                       rtb_SFunction_o3_m, rtb_SFunction_o4_b,
                       rtb_SFunction_o5_o, rtb_SFunction_o6_i,
                       rtb_SFunction_o7_f, rtb_SFunction_o8_p,
                       rtb_SFunction_o9_l, &rtB.EnabledSubsystem_e);

      /* End of Outputs for SubSystem: '<S318>/Enabled Subsystem' */

      /* DataTypeConversion: '<S317>/Cast' */
      rtb_Cast_g = rtB.EnabledSubsystem_e.In1;

      /* Outputs for Atomic SubSystem: '<S317>/Bit Shift' */
      BitShift(rtb_Cast_g, &rtB.BitShift_jx);

      /* End of Outputs for SubSystem: '<S317>/Bit Shift' */

      /* Sum: '<S317>/Add' incorporates:
       *  DataStoreWrite: '<S116>/Data Store Write1'
       *  DataTypeConversion: '<S317>/Cast1'
       */
      rtDWork.pot5_1 = (uint16_T)((uint32_T)rtB.BitShift_jx.y +
        rtB.EnabledSubsystem_e.In2);

      /* DataTypeConversion: '<S316>/Cast' */
      rtb_Cast_ky = rtB.EnabledSubsystem_e.In3;

      /* Outputs for Atomic SubSystem: '<S316>/Bit Shift' */
      BitShift(rtb_Cast_ky, &rtB.BitShift_a);

      /* End of Outputs for SubSystem: '<S316>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift' */
      BitShift_g(rtB.EnabledSubsystem_e.In7, &rtB.BitShift_dp);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift' */

      /* DataTypeConversion: '<S319>/Cast' incorporates:
       *  DataStoreWrite: '<S116>/Data Store Write5'
       */
      rtDWork.potReadNode5Fail = (rtB.BitShift_dp.y != 0);

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift1' */
      BitShift1(rtB.EnabledSubsystem_e.In7, &rtB.BitShift1_au);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift2' */
      BitShift2(rtB.EnabledSubsystem_e.In7, &rtB.BitShift2_d);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift3' */
      BitShift3(rtB.EnabledSubsystem_e.In7, &rtB.BitShift3_dx);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift4' */
      BitShift4(rtB.EnabledSubsystem_e.In7, &rtB.BitShift4_o);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift5' */
      BitShift5(rtB.EnabledSubsystem_e.In7, &rtB.BitShift5_ni);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift6' */
      BitShift6(rtB.EnabledSubsystem_e.In7, &rtB.BitShift6_a);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift6' */

      /* Outputs for Atomic SubSystem: '<S319>/Bit Shift7' */
      BitShift_g(rtB.EnabledSubsystem_e.In7, &rtB.BitShift7_ms);

      /* End of Outputs for SubSystem: '<S319>/Bit Shift7' */
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S13>/TRLS_ID5_RX' */

    /* Logic: '<S13>/AND14' */
    rtb_OR1 = (rtb_Equal17 && rtb_OR1);

    /* Outputs for Triggered SubSystem: '<S13>/TRLS_ID5_TX' incorporates:
     *  TriggerPort: '<S117>/Trigger'
     */
    if (rtb_OR1 && (rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S117>/Data Store Read3' */
      rtB.DataStoreRead3 = rtDWork.Local_Ticks;

      /* DataTypeConversion: '<S342>/Cast1' incorporates:
       *  DataStoreRead: '<S117>/Data Store Read5'
       */
      rtb_Cast1_j = rtDWork.potFault;

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift1' */
      BitShift1_b(rtb_Cast1_j, &rtB.BitShift1_n4);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift1' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift' */
      BitShift_gy(rtConstB.Cast_h, &rtB.BitShift_a0);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift2' */
      BitShift2_p(rtConstB.Cast2, &rtB.BitShift2_f);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift2' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift3' */
      BitShift3_l(rtConstB.Cast3, &rtB.BitShift3_a);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift4' */
      BitShift4_g(rtConstB.Cast4, &rtB.BitShift4_ew);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift5' */
      BitShift5_n(rtConstB.Cast5, &rtB.BitShift5_nm);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift5' */

      /* Outputs for Atomic SubSystem: '<S342>/Bit Shift6' */
      BitShift6_d(rtConstB.Cast6, &rtB.BitShift6_ab);

      /* End of Outputs for SubSystem: '<S342>/Bit Shift6' */

      /* Sum: '<S342>/Add' */
      rtB.Add = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
        ((uint32_T)rtConstB.Cast7 + rtB.BitShift1_n4.y) + rtB.BitShift_a0.y) +
        rtB.BitShift2_f.y) + rtB.BitShift3_a.y) + rtB.BitShift4_ew.y) +
        rtB.BitShift5_nm.y) + rtB.BitShift6_ab.y);

      /* Outputs for Atomic SubSystem: '<S343>/Bit Shift' */
      /* DataStoreRead: '<S117>/Data Store Read2' */
      BitShift_o(rtDWork.potentiometer2, &rtB.BitShift_g3);

      /* End of Outputs for SubSystem: '<S343>/Bit Shift' */

      /* DataTypeConversion: '<S343>/Cast' */
      rtB.Cast = (uint8_T)rtB.BitShift_g3.y;

      /* DataTypeConversion: '<S343>/Cast1' incorporates:
       *  DataStoreRead: '<S117>/Data Store Read2'
       */
      rtB.Cast1 = (uint8_T)rtDWork.potentiometer2;

      /* Outputs for Atomic SubSystem: '<S344>/Bit Shift' */
      /* DataStoreRead: '<S117>/Data Store Read1' */
      BitShift_o(rtDWork.potentiometer1, &rtB.BitShift_gul);

      /* End of Outputs for SubSystem: '<S344>/Bit Shift' */

      /* DataTypeConversion: '<S344>/Cast' */
      rtB.Cast_f = (uint8_T)rtB.BitShift_gul.y;

      /* DataTypeConversion: '<S344>/Cast1' incorporates:
       *  DataStoreRead: '<S117>/Data Store Read1'
       */
      rtB.Cast1_m = (uint8_T)rtDWork.potentiometer1;

      /* Update for M-S-Function: '<S341>/S-Function' incorporates:
       *  Constant: '<S117>/Constant'
       *  Constant: '<S117>/Constant1'
       *  Constant: '<S13>/Constant18'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast_f;
        canTxData.uint8_T_info[1] = rtB.Cast1_m;
        canTxData.uint8_T_info[2] = rtB.Cast;
        canTxData.uint8_T_info[3] = rtB.Cast1;
        canTxData.uint8_T_info[4] = rtB.DataStoreRead3;
        canTxData.uint8_T_info[5] = ((uint8_T)0U);
        canTxData.uint8_T_info[6] = rtB.Add;
        canTxData.uint8_T_info[7] = ((uint8_T)0U);

        /* send the data */
        CanTransmit(0, TRLS1_ID5, 8, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = rtb_OR1;

    /* End of Outputs for SubSystem: '<S13>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S13>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_MODE) {
      rtDWork.MMBS1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S13>/MMBS1_TX' */
    /* Constant: '<S13>/Constant12' */
    /* Disable for Enabled SubSystem: '<S13>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX_MODE) {
      rtDWork.SSTM1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S13>/SSTM1_TX' */
    /* Constant: '<S13>/Constant14' */
    /* Disable for Enabled SubSystem: '<S13>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S13>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX_MODE) {
      rtDWork.TRCK1_ID2_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/TRCK1_ID2_RX' */

    /* Disable for Triggered SubSystem: '<S13>/TRCK1_ID2_TX' */
    /* Constant: '<S13>/Constant5' */
    /* Disable for Triggered SubSystem: '<S13>/TRCK1_ID3_TX' */
    /* Constant: '<S13>/Constant26' */
    /* Disable for Enabled SubSystem: '<S13>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX_MODE) {
      rtDWork.TRCK1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/TRCK1_RX' */
    /* Disable for Enabled SubSystem: '<S13>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S13>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/TRLS_ID4_RX' */
    /* Disable for Enabled SubSystem: '<S13>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S13>/TRLS_ID5_RX' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S15>/Subsystem' incorporates:
   *  TriggerPort: '<S363>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S363>/Data Store Write1' incorporates:
     *  Constant: '<S363>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint8_T)0U);

    /* DataStoreWrite: '<S363>/Data Store Write' incorporates:
     *  Constant: '<S363>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S15>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S15>/Subsystem2' incorporates:
   *  EnablePort: '<S364>/Enable'
   */
  /* Logic: '<S15>/AND1' incorporates:
   *  Constant: '<S15>/Constant1'
   *  DataStoreRead: '<S15>/Data Store Read'
   *  DataStoreRead: '<S15>/Data Store Read1'
   *  Logic: '<S15>/NOT'
   *  RelationalOperator: '<S15>/GreaterThan'
   */
  if ((rtDWork.nodeRole > ((uint8_T)1U)) && (!rtDWork.slaveClockOn)) {
    rtDWork.Subsystem2_MODE = true;

    /* M-S-Function: '<S365>/S-Function' incorporates:
     *  Constant: '<S364>/Constant10'
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

    /* Outputs for Enabled SubSystem: '<S365>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_i);

    /* End of Outputs for SubSystem: '<S365>/Enabled Subsystem' */

    /* Outputs for Triggered SubSystem: '<S364>/Subsystem1' incorporates:
     *  TriggerPort: '<S366>/Trigger'
     */
    zcEvent = rt_I32ZCFcn(RISING_ZERO_CROSSING,
                          &rtPrevZCSigState.Subsystem1_Trig_ZCE,
                          (rtb_SFunction_o1));
    if (zcEvent != NO_ZCEVENT) {
      /* DataStoreWrite: '<S366>/Data Store Write' */
      rtDWork.SlotTime = rtB.EnabledSubsystem_i.In1;

      /* DataStoreWrite: '<S366>/Data Store Write1' incorporates:
       *  Constant: '<S366>/Constant'
       */
      rtDWork.Local_Ticks = ((uint8_T)0U);

      /* DataStoreWrite: '<S366>/Data Store Write2' incorporates:
       *  Constant: '<S366>/Constant1'
       */
      rtDWork.slaveClockOn = true;

      /* DataStoreWrite: '<S366>/Data Store Write3' incorporates:
       *  Constant: '<S366>/Constant2'
       */
      rtDWork.slot = ((uint8_T)1U);
    }

    /* End of Outputs for SubSystem: '<S364>/Subsystem1' */
  } else if (rtDWork.Subsystem2_MODE) {
    rtDWork.Subsystem2_MODE = false;
  }

  /* End of Logic: '<S15>/AND1' */
  /* End of Outputs for SubSystem: '<S15>/Subsystem2' */

  /* M-S-Function: '<S7>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN12);

  /* Gain: '<S1>/Multiply' */
  rtb_Multiply = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 7) : 0);

  /* M-S-Function: '<S8>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTG_PIN15);

  /* Gain: '<S1>/Multiply1' */
  rtb_Multiply1 = (uint8_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)
    ((uint8_T)128U) >> 6) : 0);

  /* M-S-Function: '<S9>/Level-2 M-file S-Function' */
  /* read from digital input */
  rtb_Level2MfileSFunction_j = DiginGet(DIGIN_PORTA_PIN4);

  /* Sum: '<S1>/Add' incorporates:
   *  DataStoreWrite: '<S1>/Data Store Write'
   *  Gain: '<S1>/Multiply2'
   */
  rtDWork.nodeRole = (uint8_T)(((uint32_T)rtb_Multiply + rtb_Multiply1) +
    (uint32_T)(rtb_Level2MfileSFunction_j ? (int32_T)((uint32_T)((uint8_T)128U) >>
    5) : 0));

  /* M-S-Function: '<S368>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S369>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S370>/Level-2 M-file S-Function' */
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

      /* register the callback handler */
      TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
        TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

      /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

      /* Start for Triggered SubSystem: '<S1>/IO execution' */
      /* Start for MATLABSystem: '<S80>/Moving Average' */
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
      /* Start for Enabled SubSystem: '<S13>/MMBS1_RX' */
      /* Start for M-S-Function: '<S118>/S-Function' incorporates:
       *  Constant: '<S13>/Constant12'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, MMBS1_ID);

      /* End of Start for SubSystem: '<S13>/MMBS1_RX' */

      /* Start for Enabled SubSystem: '<S13>/SSTM1_RX' */
      /* Start for M-S-Function: '<S121>/S-Function' incorporates:
       *  Constant: '<S13>/Constant14'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SSTM1_ID);

      /* End of Start for SubSystem: '<S13>/SSTM1_RX' */

      /* Start for Enabled SubSystem: '<S13>/SYNC1_RX' */
      /* Start for M-S-Function: '<S124>/S-Function' incorporates:
       *  Constant: '<S13>/Constant10'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S13>/SYNC1_RX' */

      /* Start for Enabled SubSystem: '<S13>/TRCK1_ID2_RX' */
      /* Start for M-S-Function: '<S130>/S-Function' incorporates:
       *  Constant: '<S13>/Constant5'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID2);

      /* End of Start for SubSystem: '<S13>/TRCK1_ID2_RX' */

      /* Start for Enabled SubSystem: '<S13>/TRCK1_RX' */
      /* Start for M-S-Function: '<S199>/S-Function' incorporates:
       *  Constant: '<S13>/Constant3'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID1);

      /* End of Start for SubSystem: '<S13>/TRCK1_RX' */

      /* Start for Enabled SubSystem: '<S13>/TRCK_ID3_RX' */
      /* Start for M-S-Function: '<S246>/S-Function' incorporates:
       *  Constant: '<S13>/Constant26'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

      /* End of Start for SubSystem: '<S13>/TRCK_ID3_RX' */

      /* Start for Enabled SubSystem: '<S13>/TRLS_ID4_RX' */
      /* Start for M-S-Function: '<S271>/S-Function' incorporates:
       *  Constant: '<S13>/Constant8'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

      /* End of Start for SubSystem: '<S13>/TRLS_ID4_RX' */

      /* Start for Enabled SubSystem: '<S13>/TRLS_ID5_RX' */
      /* Start for M-S-Function: '<S318>/S-Function' incorporates:
       *  Constant: '<S13>/Constant18'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

      /* End of Start for SubSystem: '<S13>/TRLS_ID5_RX' */
      /* End of Start for SubSystem: '<S1>/Message selector' */

      /* Start for Enabled SubSystem: '<S15>/Subsystem2' */
      /* Start for M-S-Function: '<S365>/S-Function' incorporates:
       *  Constant: '<S364>/Constant10'
       */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

      /* End of Start for SubSystem: '<S15>/Subsystem2' */

      /* Start for M-S-Function: '<S7>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN12, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S8>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTG_PIN15, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S9>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN4, DIGIN_CFG_PULLDOWN);

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

      /* Start for S-Function (sfcn_timeout_init): '<S14>/S-Function' */

      /* register the free running counter overflow callback handler */
      TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
        TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

      /* Start for M-S-Function: '<S18>/Level-2 M-file S-Function' */

      /* initialize the measurement and calibration interface */
      MacUsbComInit();
      MacInit();
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Controlexecution_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.IOexecution_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
    rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRLS_ID5_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.Subsystem1_Trig_ZCE = UNINITIALIZED_ZCSIG;
    rtPrevZCSigState.TRCK1_ID3_TX.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.TRCK1_ID2_TX_f.TRCK1_ID2_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
    rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;

    /* ConstCode for Triggered SubSystem: '<S1>/IO execution' */
    /* ConstCode for Constant: '<S78>/Constant' */
    ioInit = true;

    /* End of ConstCode for SubSystem: '<S1>/IO execution' */

    /* SystemInitialize for Triggered SubSystem: '<S1>/IO execution' */
    rtDWork.IOexecution_PREV_T[0] = rtM->Timing.clockTick0;
    rtDWork.IOexecution_PREV_T[1] = rtM->Timing.clockTickH0;

    /* InitializeConditions for MATLABSystem: '<S80>/Moving Average' */
    obj = rtDWork.obj.pStatistic;
    if (obj->isInitialized == 1) {
      obj->pCumSum = 0.0F;
      for (i = 0; i < 9; i++) {
        obj->pCumSumRev[i] = 0.0F;
      }

      obj->pCumRevIndex = 1.0F;
      obj->pModValueRev = 0.0F;
    }

    /* End of InitializeConditions for MATLABSystem: '<S80>/Moving Average' */
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
