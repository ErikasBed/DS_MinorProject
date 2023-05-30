/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel'.
 *
 * Model version                  : 17.14
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue May 30 15:28:56 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_CombineModel.h"
#include "rtwtypes.h"
#include "HANcoder_E407_TTA_CombineModel_private.h"
#include <math.h>
#include "zero_crossing_types.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void PwmoutIRQ_PWMOUT_MODULE_TIM14(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T Gamma2;                         /* '<S9>/Sum2' */
real_T Gamma1;                         /* '<S9>/Sum1' */
real_T steering;                       /* '<S5>/Gain2' */
real_T position;                       /* '<S5>/Gain1' */
real_T control;                        /* '<S5>/Sum' */
uint32_T SI_FreeHeap;                  /* '<S144>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S145>/Level-2 M-file S-Function' */
uint16_T mospeed;                      /* '<S5>/Add' */
uint16_T testCounter;                  /* '<S87>/Data Store Read1' */
uint16_T local_ticks_interrupt;        /* '<S10>/Switch' */
uint8_T SI_CPUload;                    /* '<S143>/Level-2 M-file S-Function' */
uint8_T dataArx;                       /* '<S107>/In1' */
uint8_T setSlotTime;                   /* '<S10>/Data Store Read3' */
uint8_T slotSelected;                  /* '<S79>/Switch' */
boolean_T cw;                          /* '<S5>/Cast1' */
boolean_T ccw;                         /* '<S5>/NOT' */
boolean_T boolCan;                     /* '<S11>/AND' */
boolean_T canActive;                   /* '<S10>/Clock_State' */

/* Exported block parameters */
real_T ClockOn = 0.0;                  /* Variable: ClockOn
                                        * Referenced by: '<S14>/Constant'
                                        */
real_T desiredAngle = 0.0;             /* Variable: desiredAngle
                                        * Referenced by: '<S8>/Constant2'
                                        */
real_T intVal = 0.0;                   /* Variable: intVal
                                        * Referenced by: '<S47>/Integral Gain'
                                        */
real_T matrixRows = 10.0;              /* Variable: matrixRows
                                        * Referenced by: '<S79>/Constant1'
                                        */
real_T propVal = 0.0;                  /* Variable: propVal
                                        * Referenced by: '<S55>/Proportional Gain'
                                        */
uint32_T MMBS1_ID = 12U;               /* Variable: MMBS1_ID
                                        * Referenced by: '<S11>/Constant12'
                                        */
uint32_T SSTM1_ID = 13U;               /* Variable: SSTM1_ID
                                        * Referenced by: '<S11>/Constant14'
                                        */
uint32_T SYNC1_ID = 11U;               /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S11>/Constant10'
                                        *   '<S138>/Constant1'
                                        */
uint32_T TRCK1_ID1 = 14U;              /* Variable: TRCK1_ID1
                                        * Referenced by: '<S11>/Constant3'
                                        */
uint32_T TRCK1_ID2 = 26U;              /* Variable: TRCK1_ID2
                                        * Referenced by: '<S11>/Constant5'
                                        */
uint32_T TRCK1_ID3 = 37U;              /* Variable: TRCK1_ID3
                                        * Referenced by: '<S11>/Constant26'
                                        */
uint32_T TRLS1_ID4 = 48U;              /* Variable: TRLS1_ID4
                                        * Referenced by: '<S11>/Constant8'
                                        */
uint32_T TRLS1_ID5 = 59U;              /* Variable: TRLS1_ID5
                                        * Referenced by: '<S11>/Constant18'
                                        */
uint16_T trailer1Slider = 0U;          /* Variable: trailer1Slider
                                        * Referenced by: '<S8>/Constant3'
                                        */
uint8_T nodeRole = 1U;                 /* Variable: nodeRole
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/Constant1'
                                        *   '<S14>/Constant1'
                                        *   '<S14>/Constant3'
                                        */
uint8_T slotTime = 50U;                /* Variable: slotTime
                                        * Referenced by: '<S137>/Constant3'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;
static tCanDataTypes canRxData_0_rtu_In1;
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_SYNC1_ID;
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

    /* SignalConversion generated from: '<S10>/Clock_State' */
    canActive = rtB.OR;

    /* Switch: '<S10>/Switch' */
    if (canActive) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant2'
       *  DataStoreRead: '<S10>/Data Store Read'
       *  Sum: '<S10>/Sum1'
       */
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  DataStoreRead: '<S10>/Data Store Read1'
       */
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S10>/Switch' */

    /* DataStoreWrite: '<S10>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* DataStoreRead: '<S10>/Data Store Read3' */
    setSlotTime = rtDWork.SlotTime;

    /* RelationalOperator: '<S10>/Equal' incorporates:
     *  DataStoreRead: '<S10>/Data Store Read2'
     *  Gain: '<S10>/Gain'
     */
    rtb_Equal = (rtDWork.Local_Ticks >= (int32_T)(((uint32_T)((uint8_T)160U) *
      setSlotTime) >> 4));

    /* Outputs for Triggered SubSystem: '<S10>/Enabled Subsystem' incorporates:
     *  TriggerPort: '<S79>/Trigger'
     */
    if (rtb_Equal && (rtPrevZCSigState.EnabledSubsystem_Trig_ZCE != POS_ZCSIG))
    {
      /* Switch: '<S79>/Switch' incorporates:
       *  Constant: '<S79>/Constant1'
       *  DataStoreRead: '<S79>/Data Store Read1'
       *  DataTypeConversion: '<S79>/Cast'
       *  RelationalOperator: '<S79>/Equal'
       */
      if (rtDWork.slot < (uint8_T)matrixRows) {
        /* Switch: '<S79>/Switch' incorporates:
         *  Constant: '<S79>/Constant'
         *  DataStoreRead: '<S79>/Data Store Read'
         *  Sum: '<S79>/Plus'
         */
        slotSelected = (uint8_T)((uint32_T)rtDWork.slot + ((uint8_T)1U));
      } else {
        /* Switch: '<S79>/Switch' incorporates:
         *  Constant: '<S79>/Constant2'
         */
        slotSelected = (uint8_T)1.0;
      }

      /* End of Switch: '<S79>/Switch' */

      /* DataStoreWrite: '<S79>/Data Store Write' */
      rtDWork.slot = slotSelected;

      /* DataStoreWrite: '<S79>/Data Store Write1' incorporates:
       *  Constant: '<S79>/Constant3'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = rtb_Equal;

    /* End of Outputs for SubSystem: '<S10>/Enabled Subsystem' */
    /* M-S-Function: '<S80>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S10>/Sum' incorporates:
     *  Constant: '<S10>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)1000U));

    /* Update for M-S-Function: '<S81>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S10>/Constant1'
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

/*
 * Output and update for enable system:
 *    '<S100>/Enabled Subsystem'
 *    '<S103>/Enabled Subsystem'
 *    '<S109>/Enabled Subsystem'
 *    '<S113>/Enabled Subsystem'
 *    '<S116>/Enabled Subsystem'
 *    '<S119>/Enabled Subsystem'
 *    '<S128>/Enabled Subsystem'
 *    '<S139>/Enabled Subsystem'
 */
void EnabledSubsystem(int8_T rtu_Enable, uint8_T rtu_In1, uint8_T rtu_In2,
                      uint8_T rtu_In3, uint8_T rtu_In4, uint8_T rtu_In5, uint8_T
                      rtu_In6, uint8_T rtu_In7, uint8_T rtu_In8,
                      rtB_EnabledSubsystem *localB)
{
  uint8_T rtb_In3_f;
  uint8_T rtb_In4_c;
  uint8_T rtb_In5_a;
  uint8_T rtb_In6_j;
  uint8_T rtb_In7_h;
  uint8_T rtb_In8_m;

  /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  if (rtu_Enable > 0) {
    /* SignalConversion generated from: '<S101>/In1' */
    localB->In1 = rtu_In1;

    /* SignalConversion generated from: '<S101>/In2' */
    localB->In2 = rtu_In2;

    /* SignalConversion generated from: '<S101>/In3' */
    rtb_In3_f = rtu_In3;

    /* SignalConversion generated from: '<S101>/In4' */
    rtb_In4_c = rtu_In4;

    /* SignalConversion generated from: '<S101>/In5' */
    rtb_In5_a = rtu_In5;

    /* SignalConversion generated from: '<S101>/In6' */
    rtb_In6_j = rtu_In6;

    /* SignalConversion generated from: '<S101>/In7' */
    rtb_In7_h = rtu_In7;

    /* SignalConversion generated from: '<S101>/In8' */
    rtb_In8_m = rtu_In8;
  }

  /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */
}

/*
 * Disable for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Disable(rtDW_MMBS1_RX *localDW)
{
  localDW->MMBS1_RX_MODE = false;
}

/*
 * Start for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX_Start(uint32_T rtu_In1)
{
  /* Start for M-S-Function: '<S100>/S-Function' */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, rtu_In1);
}

/*
 * Outputs for enable system:
 *    '<S11>/MMBS1_RX'
 *    '<S11>/SSTM1_RX'
 *    '<S11>/TRCK1_ID2_RX'
 *    '<S11>/TRCK1_RX'
 */
void MMBS1_RX(boolean_T rtu_Enable, uint32_T rtu_In1, rtB_MMBS1_RX *localB,
              rtDW_MMBS1_RX *localDW)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_n;
  uint8_T rtb_SFunction_o3_b;
  uint8_T rtb_SFunction_o4_l;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_dj;
  uint8_T rtb_SFunction_o8_n1;
  uint8_T rtb_SFunction_o9_o;
  int8_T rtb_SFunction_o1_g;

  /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' incorporates:
   *  EnablePort: '<S82>/Enable'
   */
  if (rtu_Enable) {
    localDW->MMBS1_RX_MODE = true;

    /* M-S-Function: '<S100>/S-Function' */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1_g = CanIoGetMessage(0, rtu_In1, NULL,
      &canRxData_0_rtu_In1.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1_g > 0) {
      /* read the data */
      rtb_SFunction_o2_n = canRxData_0_rtu_In1.uint8_T_info[0];
      rtb_SFunction_o3_b = canRxData_0_rtu_In1.uint8_T_info[1];
      rtb_SFunction_o4_l = canRxData_0_rtu_In1.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_0_rtu_In1.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_0_rtu_In1.uint8_T_info[4];
      rtb_SFunction_o7_dj = canRxData_0_rtu_In1.uint8_T_info[5];
      rtb_SFunction_o8_n1 = canRxData_0_rtu_In1.uint8_T_info[6];
      rtb_SFunction_o9_o = canRxData_0_rtu_In1.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1_g, rtb_SFunction_o2_n, rtb_SFunction_o3_b,
                     rtb_SFunction_o4_l, rtb_SFunction_o5_e, rtb_SFunction_o6_k,
                     rtb_SFunction_o7_dj, rtb_SFunction_o8_n1,
                     rtb_SFunction_o9_o, &localB->EnabledSubsystem_k);

    /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */
  } else if (localDW->MMBS1_RX_MODE) {
    MMBS1_RX_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */
}

/*
 * Output and update for trigger system:
 *    '<S11>/MMBS1_TX'
 *    '<S11>/SSTM1_TX'
 *    '<S11>/TRCK1_ID2_TX'
 *    '<S11>/TRCK1_ID3_TX'
 *    '<S11>/TRCK1_TX'
 *    '<S11>/TRLS_ID5_TX'
 */
void MMBS1_TX(boolean_T rtu_Trigger, uint32_T rtu_In1, rtZCE_MMBS1_TX *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' incorporates:
   *  TriggerPort: '<S83>/Trigger'
   */
  if (rtu_Trigger && (localZCE->MMBS1_TX_Trig_ZCE != POS_ZCSIG)) {
    /* Update for M-S-Function: '<S102>/S-Function' */
    {
      /* prepare the data */
      canTxData.uint8_T_info[0] = 0U;

      /* send the data */
      CanTransmit(0, rtu_In1, 1, &canTxData.uint8_T_info[0]);
    }
  }

  localZCE->MMBS1_TX_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */
}

/*
 * Output and update for atomic system:
 *    '<S118>/Bit Shift'
 *    '<S127>/Bit Shift'
 */
void BitShift(uint16_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S120>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S121>:1' */
  /* '<S121>:1:6' */
  localB->y = (uint16_T)(rtu_u << 8);
}

/* Model step function */
void HANcoder_E407_TTA_CombineModel_step(void)
{
  /* local block i/o variables */
  int32_T rtb_Level2MfileSFunction_k;
  uint16_T rtb_Level2MfileSFunction_d;
  uint16_T rtb_Switch1;
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
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_k;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_b1;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_n;
  int8_T rtb_SFunction_o1_k;
  int8_T rtb_SFunction_o1_k1;
  int8_T rtb_SFunction_o1_h;
  real_T rtb_Integrator;
  real_T rtb_Sum;
  real_T rtb_Uk1;
  real_T rtb_Uk1_tmp;
  real_T rtb_Uk1_tmp_0;
  int32_T rowIdx;
  uint16_T rtb_Cast_b;
  uint16_T rtb_Cast_e;
  boolean_T AND3;
  boolean_T AND5;
  boolean_T AND7;
  boolean_T AND9;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND10;
  boolean_T rtb_AND13;
  boolean_T rtb_AND14;
  boolean_T rtb_AND15;
  boolean_T rtb_AND2;
  boolean_T rtb_AND4;
  boolean_T rtb_AND6;
  boolean_T rtb_AND8;
  boolean_T rtb_Equal14;
  boolean_T rtb_Equal16;
  boolean_T rtb_Equal17;
  boolean_T rtb_GreaterThan_p;

  /* Outputs for Enabled SubSystem: '<S1>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  /* Logic: '<S1>/NOT' incorporates:
   *  DataStoreRead: '<S1>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    rtDWork.InitializeClockSchedule_MODE = true;

    /* DataStoreWrite: '<S7>/Data Store Write' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S68>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else if (rtDWork.InitializeClockSchedule_MODE) {
    rtDWork.InitializeClockSchedule_MODE = false;
  }

  /* End of Logic: '<S1>/NOT' */
  /* End of Outputs for SubSystem: '<S1>/Initialize Clock Schedule' */

  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  RelationalOperator: '<S14>/Less Than'
   */
  rtb_AND = ((ClockOn != 0.0) && (nodeRole < ((uint8_T)4U)));

  /* Outputs for Enabled SubSystem: '<S14>/Subsystem1' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  /* RelationalOperator: '<S14>/GreaterThan' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  DataTypeConversion: '<S138>/Cast'
   */
  if (nodeRole > ((uint8_T)3U)) {
    rtDWork.Subsystem1_MODE = true;

    /* M-S-Function: '<S139>/S-Function' incorporates:
     *  Constant: '<S138>/Constant1'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1 = CanIoGetMessage(0, SYNC1_ID, NULL,
      &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_SYNC1_ID.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_SYNC1_ID.uint8_T_info[1];
    }

    /* Outputs for Enabled SubSystem: '<S139>/Enabled Subsystem' */
    EnabledSubsystem(rtb_SFunction_o1, rtb_SFunction_o2, rtb_SFunction_o3,
                     rtb_SFunction_o4, rtb_SFunction_o5, rtb_SFunction_o6,
                     rtb_SFunction_o7, rtb_SFunction_o8, rtb_SFunction_o9,
                     &rtB.EnabledSubsystem_ef);

    /* End of Outputs for SubSystem: '<S139>/Enabled Subsystem' */

    /* DataStoreWrite: '<S138>/Data Store Write' */
    rtDWork.SlotTime = rtB.EnabledSubsystem_ef.In1;

    /* Outputs for Triggered SubSystem: '<S138>/Triggered Subsystem' incorporates:
     *  TriggerPort: '<S141>/Trigger'
     */
    if ((rtb_SFunction_o1 != 0) && (rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE
         != POS_ZCSIG)) {
      /* DataStoreWrite: '<S141>/Data Store Write' incorporates:
       *  Constant: '<S141>/Constant'
       */
      rtDWork.Local_Ticks = ((uint16_T)0U);
    }

    rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = (ZCSigState)(rtb_SFunction_o1
      != 0);

    /* End of Outputs for SubSystem: '<S138>/Triggered Subsystem' */

    /* CombinatorialLogic: '<S140>/Logic' incorporates:
     *  DataTypeConversion: '<S138>/Cast'
     *  Memory: '<S140>/Memory'
     */
    rowIdx = (int32_T)(((((uint32_T)(rtb_SFunction_o1 != 0) << 1) + false) << 1)
                       + rtDWork.Memory_PreviousInput);
    rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
    rtB.Logic[1U] = rtConstP.Logic_table[(uint32_T)rowIdx + 8U];

    /* Update for Memory: '<S140>/Memory' */
    rtDWork.Memory_PreviousInput = rtB.Logic[0];
  } else if (rtDWork.Subsystem1_MODE) {
    rtDWork.Subsystem1_MODE = false;
  }

  /* End of RelationalOperator: '<S14>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S14>/Subsystem1' */

  /* Logic: '<S14>/OR' */
  rtB.OR = (rtb_AND || rtB.Logic[0]);

  /* End of Outputs for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

  /* Outputs for Enabled SubSystem: '<S1>/Message selector' incorporates:
   *  EnablePort: '<S11>/Enable'
   *
   * Block description for '<S1>/Message selector':
   *  Truck 1
   */
  if (canActive) {
    rtDWork.Messageselector_MODE = true;

    /* RelationalOperator: '<S11>/Equal1' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    rtb_GreaterThan_p = (slotSelected == 2.0);

    /* RelationalOperator: '<S11>/Equal11' incorporates:
     *  Constant: '<S11>/Constant13'
     *  Constant: '<S1>/Constant'
     */
    rtb_Equal14 = (nodeRole == 1.0);

    /* Logic: '<S11>/AND3' incorporates:
     *  Logic: '<S11>/NOT1'
     */
    AND3 = (rtb_GreaterThan_p && (!rtb_Equal14));

    /* Outputs for Enabled SubSystem: '<S11>/MMBS1_RX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_RX(AND3, MMBS1_ID, &rtB.MMBS1_RX_j, &rtDWork.MMBS1_RX_j);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_RX' */

    /* Logic: '<S11>/AND2' */
    rtb_AND2 = (rtb_GreaterThan_p && rtb_Equal14);

    /* Outputs for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_TX(rtb_AND2, MMBS1_ID, &rtPrevZCSigState.MMBS1_TX_a);

    /* End of Outputs for SubSystem: '<S11>/MMBS1_TX' */

    /* RelationalOperator: '<S11>/Equal2' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    rtb_Equal14 = (slotSelected == 3.0);

    /* RelationalOperator: '<S11>/Equal12' incorporates:
     *  Constant: '<S11>/Constant15'
     *  Constant: '<S1>/Constant'
     */
    rtb_GreaterThan_p = (nodeRole == 1.0);

    /* Logic: '<S11>/AND5' incorporates:
     *  Logic: '<S11>/NOT2'
     */
    AND5 = (rtb_Equal14 && (!rtb_GreaterThan_p));

    /* Outputs for Enabled SubSystem: '<S11>/SSTM1_RX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_RX(AND5, SSTM1_ID, &rtB.SSTM1_RX, &rtDWork.SSTM1_RX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_RX' */

    /* Logic: '<S11>/AND4' */
    rtb_AND4 = (rtb_Equal14 && rtb_GreaterThan_p);

    /* Outputs for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_TX(rtb_AND4, SSTM1_ID, &rtPrevZCSigState.SSTM1_TX);

    /* End of Outputs for SubSystem: '<S11>/SSTM1_TX' */

    /* RelationalOperator: '<S11>/Equal' incorporates:
     *  Constant: '<S11>/Constant'
     */
    rtb_Equal14 = (slotSelected == ((uint8_T)1U));

    /* RelationalOperator: '<S11>/Equal10' incorporates:
     *  Constant: '<S11>/Constant11'
     *  Constant: '<S1>/Constant'
     */
    rtb_GreaterThan_p = (nodeRole == ((uint8_T)1U));

    /* Logic: '<S11>/AND1' incorporates:
     *  Logic: '<S11>/NOT'
     */
    rtb_AND1 = (rtb_Equal14 && (!rtb_GreaterThan_p));

    /* Outputs for Enabled SubSystem: '<S11>/SYNC1_RX' incorporates:
     *  EnablePort: '<S86>/Enable'
     */
    if (rtb_AND1) {
      rtDWork.SYNC1_RX_MODE = true;

      /* M-S-Function: '<S106>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       */

      /* read the message data and store the new parameter */
      rtb_SFunction_o1_h = CanIoGetMessage(0, SYNC1_ID, NULL,
        &canRxData_0_SYNC1_ID.uint8_T_info[0], NULL);

      /* process the message data */
      if (rtb_SFunction_o1_h > 0) {
        /* read the data */
        rtb_SFunction_o2_i = canRxData_0_SYNC1_ID.uint8_T_info[0];
        rtb_SFunction_o3_g = canRxData_0_SYNC1_ID.uint8_T_info[1];
        rtb_SFunction_o4_j = canRxData_0_SYNC1_ID.uint8_T_info[2];
        rtb_SFunction_o5_f = canRxData_0_SYNC1_ID.uint8_T_info[3];
        rtb_SFunction_o6_g = canRxData_0_SYNC1_ID.uint8_T_info[4];
        rtb_SFunction_o7_k = canRxData_0_SYNC1_ID.uint8_T_info[5];
        rtb_SFunction_o8_n = canRxData_0_SYNC1_ID.uint8_T_info[6];
        rtb_SFunction_o9_b1 = canRxData_0_SYNC1_ID.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S106>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S107>/Enable'
       */
      if (rtb_SFunction_o1_h > 0) {
        /* SignalConversion generated from: '<S107>/In1' */
        dataArx = rtb_SFunction_o2_i;
      }

      /* End of Outputs for SubSystem: '<S106>/Enabled Subsystem' */
    } else if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/SYNC1_RX' */

    /* Logic: '<S11>/AND' */
    boolCan = (rtb_Equal14 && rtb_GreaterThan_p);

    /* Outputs for Triggered SubSystem: '<S11>/SYNC1_TX' incorporates:
     *  TriggerPort: '<S87>/Trigger'
     */
    if (boolCan && (rtPrevZCSigState.SYNC1_TX_Trig_ZCE != POS_ZCSIG)) {
      /* DataStoreRead: '<S87>/Data Store Read1' */
      testCounter = rtDWork.testCount;

      /* Sum: '<S87>/Add' incorporates:
       *  Constant: '<S87>/Constant7'
       *  DataStoreWrite: '<S87>/Data Store Write'
       */
      rtDWork.testCount = (uint16_T)((uint32_T)testCounter + ((uint16_T)1U));

      /* DataStoreRead: '<S87>/Data Store Read' */
      rtB.DataStoreRead = rtDWork.SlotTime;

      /* Update for M-S-Function: '<S108>/S-Function' incorporates:
       *  Constant: '<S11>/Constant10'
       *  Constant: '<S87>/Constant'
       *  Constant: '<S87>/Constant1'
       *  Constant: '<S87>/Constant2'
       *  Constant: '<S87>/Constant3'
       *  Constant: '<S87>/Constant4'
       *  Constant: '<S87>/Constant5'
       *  Constant: '<S87>/Constant6'
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

    /* End of Outputs for SubSystem: '<S11>/SYNC1_TX' */

    /* RelationalOperator: '<S11>/Equal6' incorporates:
     *  Constant: '<S11>/Constant7'
     */
    rtb_Equal14 = (slotSelected == 6.0);

    /* RelationalOperator: '<S11>/Equal5' incorporates:
     *  Constant: '<S11>/Constant6'
     *  Constant: '<S1>/Constant'
     */
    rtb_GreaterThan_p = (nodeRole == 2.0);

    /* Logic: '<S11>/AND9' incorporates:
     *  Logic: '<S11>/NOT4'
     */
    AND9 = (rtb_Equal14 && (!rtb_GreaterThan_p));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_RX(AND9, TRCK1_ID2, &rtB.TRCK1_ID2_RX, &rtDWork.TRCK1_ID2_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Logic: '<S11>/AND8' */
    rtb_AND8 = (rtb_Equal14 && rtb_GreaterThan_p);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_TX(rtb_AND8, TRCK1_ID2, &rtPrevZCSigState.TRCK1_ID2_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID2_TX' */

    /* RelationalOperator: '<S11>/Equal14' incorporates:
     *  Constant: '<S11>/Constant20'
     */
    rtb_Equal14 = (slotSelected == 7.0);

    /* RelationalOperator: '<S11>/Equal7' incorporates:
     *  Constant: '<S11>/Constant19'
     *  Constant: '<S1>/Constant'
     */
    rtb_GreaterThan_p = (nodeRole == 3.0);

    /* Logic: '<S11>/AND10' */
    rtb_AND10 = (rtb_Equal14 && rtb_GreaterThan_p);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    MMBS1_TX(rtb_AND10, TRCK1_ID3, &rtPrevZCSigState.TRCK1_ID3_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_ID3_TX' */

    /* RelationalOperator: '<S11>/Equal13' incorporates:
     *  Constant: '<S11>/Constant17'
     */
    rtb_Equal16 = (slotSelected == 4.0);

    /* RelationalOperator: '<S11>/Equal3' incorporates:
     *  Constant: '<S11>/Constant16'
     *  Constant: '<S1>/Constant'
     */
    rtb_Equal17 = (nodeRole == 1.0);

    /* Logic: '<S11>/AND7' incorporates:
     *  Logic: '<S11>/NOT3'
     */
    AND7 = (rtb_Equal16 && (!rtb_Equal17));

    /* Outputs for Enabled SubSystem: '<S11>/TRCK1_RX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_RX(AND7, TRCK1_ID1, &rtB.TRCK1_RX, &rtDWork.TRCK1_RX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_RX' */

    /* Logic: '<S11>/AND6' */
    rtb_AND6 = (rtb_Equal16 && rtb_Equal17);

    /* Outputs for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_TX(rtb_AND6, TRCK1_ID1, &rtPrevZCSigState.TRCK1_TX);

    /* End of Outputs for SubSystem: '<S11>/TRCK1_TX' */

    /* Outputs for Enabled SubSystem: '<S11>/TRCK_ID3_RX' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    /* Logic: '<S11>/AND11' incorporates:
     *  Logic: '<S11>/NOT5'
     */
    if (rtb_Equal14 && (!rtb_GreaterThan_p)) {
      rtDWork.TRCK_ID3_RX_MODE = true;

      /* M-S-Function: '<S116>/S-Function' incorporates:
       *  Constant: '<S11>/Constant26'
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

      /* Outputs for Enabled SubSystem: '<S116>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k1, rtb_SFunction_o2_j,
                       rtb_SFunction_o3_a, rtb_SFunction_o4_i,
                       rtb_SFunction_o5_k, rtb_SFunction_o6_c,
                       rtb_SFunction_o7_d, rtb_SFunction_o8_h,
                       rtb_SFunction_o9_b, &rtB.EnabledSubsystem_b);

      /* End of Outputs for SubSystem: '<S116>/Enabled Subsystem' */
    } else if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Logic: '<S11>/AND11' */
    /* End of Outputs for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* RelationalOperator: '<S11>/Equal15' incorporates:
     *  Constant: '<S11>/Constant22'
     */
    rtb_Equal17 = (slotSelected == 8.0);

    /* RelationalOperator: '<S11>/Equal8' incorporates:
     *  Constant: '<S11>/Constant21'
     *  Constant: '<S1>/Constant'
     */
    rtb_Equal16 = (nodeRole == 4.0);

    /* Logic: '<S11>/AND13' incorporates:
     *  Logic: '<S11>/NOT6'
     */
    rtb_AND13 = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID4_RX' incorporates:
     *  EnablePort: '<S96>/Enable'
     */
    if (rtb_AND13) {
      rtDWork.TRLS_ID4_RX_MODE = true;

      /* M-S-Function: '<S119>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
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

      /* Outputs for Enabled SubSystem: '<S119>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_k, rtb_SFunction_o2_e,
                       rtb_SFunction_o3_p, rtb_SFunction_o4_c,
                       rtb_SFunction_o5_c, rtb_SFunction_o6_e,
                       rtb_SFunction_o7_l, rtb_SFunction_o8_f,
                       rtb_SFunction_o9_h, &rtB.EnabledSubsystem_g);

      /* End of Outputs for SubSystem: '<S119>/Enabled Subsystem' */

      /* DataTypeConversion: '<S118>/Cast' */
      rtb_Cast_e = rtB.EnabledSubsystem_g.In1;

      /* Outputs for Atomic SubSystem: '<S118>/Bit Shift' */
      BitShift(rtb_Cast_e, &rtB.BitShift_j);

      /* End of Outputs for SubSystem: '<S118>/Bit Shift' */

      /* Switch: '<S8>/Switch1' incorporates:
       *  DataTypeConversion: '<S118>/Cast1'
       */
      rtb_Switch1 = rtB.EnabledSubsystem_g.In2;

      /* Sum: '<S118>/Add' incorporates:
       *  DataStoreWrite: '<S96>/Data Store Write'
       */
      rtDWork.trailerOneAngle = (uint16_T)((uint32_T)rtB.BitShift_j.y +
        rtb_Switch1);
    } else if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Logic: '<S11>/AND12' */
    rtb_GreaterThan_p = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID4_TX' incorporates:
     *  TriggerPort: '<S97>/Trigger'
     */
    if (rtb_GreaterThan_p && (rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE != POS_ZCSIG))
    {
      /* Outputs for Atomic SubSystem: '<S124>/Bit Shift' */
      /* DataTypeConversion: '<S124>/Cast' incorporates:
       *  DataStoreRead: '<S97>/Data Store Read'
       *  MATLAB Function: '<S125>/bit_shift'
       */
      /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S126>:1' */
      /* '<S126>:1:8' */
      rtB.Cast = (uint8_T)((uint32_T)rtDWork.trailerOneAngle >> 8);

      /* End of Outputs for SubSystem: '<S124>/Bit Shift' */

      /* DataTypeConversion: '<S124>/Cast1' incorporates:
       *  DataStoreRead: '<S97>/Data Store Read'
       */
      rtB.Cast1 = (uint8_T)rtDWork.trailerOneAngle;

      /* Update for M-S-Function: '<S123>/S-Function' incorporates:
       *  Constant: '<S11>/Constant8'
       */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = rtB.Cast;
        canTxData.uint8_T_info[1] = rtB.Cast1;

        /* send the data */
        CanTransmit(0, TRLS1_ID4, 2, &canTxData.uint8_T_info[0]);
      }
    }

    rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = rtb_GreaterThan_p;

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID4_TX' */

    /* RelationalOperator: '<S11>/Equal17' incorporates:
     *  Constant: '<S11>/Constant25'
     */
    rtb_Equal17 = (slotSelected == 9.0);

    /* RelationalOperator: '<S11>/Equal16' incorporates:
     *  Constant: '<S11>/Constant24'
     *  Constant: '<S1>/Constant'
     */
    rtb_Equal16 = (nodeRole == 5.0);

    /* Logic: '<S11>/AND15' incorporates:
     *  Logic: '<S11>/NOT7'
     */
    rtb_AND15 = (rtb_Equal17 && (!rtb_Equal16));

    /* Outputs for Enabled SubSystem: '<S11>/TRLS_ID5_RX' incorporates:
     *  EnablePort: '<S98>/Enable'
     */
    if (rtb_AND15) {
      rtDWork.TRLS_ID5_RX_MODE = true;

      /* M-S-Function: '<S128>/S-Function' incorporates:
       *  Constant: '<S11>/Constant18'
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

      /* Outputs for Enabled SubSystem: '<S128>/Enabled Subsystem' */
      EnabledSubsystem(rtb_SFunction_o1_n, rtb_SFunction_o2_l,
                       rtb_SFunction_o3_m, rtb_SFunction_o4_b,
                       rtb_SFunction_o5_o, rtb_SFunction_o6_i,
                       rtb_SFunction_o7_f, rtb_SFunction_o8_p,
                       rtb_SFunction_o9_l, &rtB.EnabledSubsystem_e);

      /* End of Outputs for SubSystem: '<S128>/Enabled Subsystem' */

      /* DataTypeConversion: '<S127>/Cast' */
      rtb_Cast_b = rtB.EnabledSubsystem_e.In1;

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift' */
      BitShift(rtb_Cast_b, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift' */

      /* Switch: '<S8>/Switch1' incorporates:
       *  DataTypeConversion: '<S127>/Cast1'
       */
      rtb_Switch1 = rtB.EnabledSubsystem_e.In2;

      /* Sum: '<S127>/Add' incorporates:
       *  DataStoreWrite: '<S98>/Data Store Write1'
       */
      rtDWork.trailerTwoAngle = (uint16_T)((uint32_T)rtB.BitShift_c.y +
        rtb_Switch1);
    } else if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_RX' */

    /* Logic: '<S11>/AND14' */
    rtb_AND14 = (rtb_Equal17 && rtb_Equal16);

    /* Outputs for Triggered SubSystem: '<S11>/TRLS_ID5_TX' */
    /* Constant: '<S11>/Constant18' */
    MMBS1_TX(rtb_AND14, TRLS1_ID5, &rtPrevZCSigState.TRLS_ID5_TX);

    /* End of Outputs for SubSystem: '<S11>/TRLS_ID5_TX' */
  } else if (rtDWork.Messageselector_MODE) {
    /* Disable for Enabled SubSystem: '<S11>/MMBS1_RX' */
    if (rtDWork.MMBS1_RX_j.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant12' */
      MMBS1_RX_Disable(&rtDWork.MMBS1_RX_j);
    }

    /* End of Disable for SubSystem: '<S11>/MMBS1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/MMBS1_TX' */
    /* Constant: '<S11>/Constant12' */
    /* Disable for Enabled SubSystem: '<S11>/SSTM1_RX' */
    if (rtDWork.SSTM1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant14' */
      MMBS1_RX_Disable(&rtDWork.SSTM1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/SSTM1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/SSTM1_TX' */
    /* Constant: '<S11>/Constant14' */
    /* Disable for Enabled SubSystem: '<S11>/SYNC1_RX' */
    if (rtDWork.SYNC1_RX_MODE) {
      rtDWork.SYNC1_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/SYNC1_RX' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    if (rtDWork.TRCK1_ID2_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant5' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_ID2_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID2_TX' */
    /* Constant: '<S11>/Constant5' */
    /* Disable for Triggered SubSystem: '<S11>/TRCK1_ID3_TX' */
    /* Constant: '<S11>/Constant26' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK1_RX' */
    if (rtDWork.TRCK1_RX.MMBS1_RX_MODE) {
      /* Constant: '<S11>/Constant3' */
      MMBS1_RX_Disable(&rtDWork.TRCK1_RX);
    }

    /* End of Disable for SubSystem: '<S11>/TRCK1_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRCK1_TX' */
    /* Constant: '<S11>/Constant3' */
    /* Disable for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
    if (rtDWork.TRCK_ID3_RX_MODE) {
      rtDWork.TRCK_ID3_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
    if (rtDWork.TRLS_ID4_RX_MODE) {
      rtDWork.TRLS_ID4_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID4_RX' */
    /* Disable for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
    if (rtDWork.TRLS_ID5_RX_MODE) {
      rtDWork.TRLS_ID5_RX_MODE = false;
    }

    /* End of Disable for SubSystem: '<S11>/TRLS_ID5_RX' */

    /* Disable for Triggered SubSystem: '<S11>/TRLS_ID5_TX' */
    /* Constant: '<S11>/Constant18' */
    rtDWork.Messageselector_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Message selector' */

  /* Outputs for Triggered SubSystem: '<S14>/Subsystem' incorporates:
   *  TriggerPort: '<S137>/Trigger'
   */
  if (rtb_AND && (rtPrevZCSigState.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* DataStoreWrite: '<S137>/Data Store Write1' incorporates:
     *  Constant: '<S137>/Constant1'
     */
    rtDWork.Local_Ticks = ((uint16_T)0U);

    /* DataStoreWrite: '<S137>/Data Store Write' incorporates:
     *  Constant: '<S137>/Constant3'
     */
    rtDWork.SlotTime = slotTime;
  }

  rtPrevZCSigState.Subsystem_Trig_ZCE = rtb_AND;

  /* End of Outputs for SubSystem: '<S14>/Subsystem' */
  /* Product: '<S75>/Product' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S9>/TrailUnitWheelbase'
   *  Gain: '<S8>/Gain'
   *  Trigonometry: '<S75>/tan '
   */
  rtb_Sum = tan(0.015001500150015003 * desiredAngle) * rtConstB.Abs / 4.0;

  /* RelationalOperator: '<S8>/Equal' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S8>/Constant'
   */
  rtb_AND = (nodeRole == ((uint8_T)4U));

  /* Switch: '<S8>/Switch' */
  if (rtb_AND) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    rtb_Switch1 = trailer1Slider;
  } else {
    /* Switch: '<S8>/Switch1' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read'
     */
    rtb_Switch1 = rtDWork.trailerOneAngle;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Gain: '<S8>/Gain2' */
  rtb_Integrator = (real_T)((uint16_T)62921U) * 2.384185791015625E-7 * (real_T)
    rtb_Switch1;

  /* Sum: '<S9>/Sum2' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  Gamma2 = rtb_Integrator - 0.0;

  /* Trigonometry: '<S73>/tan 1' incorporates:
   *  Trigonometry: '<S74>/tan '
   */
  rtb_Uk1_tmp = sin(Gamma2);

  /* Trigonometry: '<S73>/tan 2' incorporates:
   *  Trigonometry: '<S74>/tan 1'
   */
  rtb_Uk1_tmp_0 = cos(Gamma2);

  /* Sum: '<S73>/Add' incorporates:
   *  Constant: '<S8>/Velocity on exale'
   *  Constant: '<S9>/TrailUnitWheelbase'
   *  Product: '<S73>/Product1'
   *  Product: '<S73>/Product2'
   *  Trigonometry: '<S73>/tan 1'
   *  Trigonometry: '<S73>/tan 2'
   */
  rtb_Uk1 = rtb_Sum * 4.0 * rtb_Uk1_tmp + rtb_Uk1_tmp_0 * 1.3889;

  /* Sum: '<S9>/Sum1' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  Gamma1 = 0.0 - rtb_Integrator;

  /* Product: '<S74>/Product' incorporates:
   *  Constant: '<S8>/Velocity on exale'
   *  Constant: '<S9>/RearAxleToHitch'
   *  Constant: '<S9>/TrailUnitWheelbase'
   *  Gain: '<S74>/Gain'
   *  Product: '<S74>/Product1'
   *  Product: '<S74>/Product3'
   *  Sum: '<S74>/Add'
   */
  rtb_Integrator = (1.3889 / 1.0 * rtb_Uk1_tmp * (-1.0) + rtb_Uk1_tmp_0 / 1.0 *
                    4.0 * rtb_Sum) * (rtConstB.signV2 * rtConstB.signL0b);

  /* Trigonometry: '<S78>/tan ' incorporates:
   *  Trigonometry: '<S77>/tan 1'
   */
  rtb_Sum = sin(Gamma1);

  /* Trigonometry: '<S78>/tan 1' incorporates:
   *  Trigonometry: '<S77>/tan 2'
   */
  rtb_Uk1_tmp = cos(Gamma1);

  /* Signum: '<S78>/Sign' */
  if (rtb_Uk1 < 0.0) {
    rtb_Uk1_tmp_0 = -1.0;
  } else {
    rtb_Uk1_tmp_0 = (rtb_Uk1 > 0.0);
  }

  /* Gain: '<S5>/Gain2' incorporates:
   *  Constant: '<S9>/RearAxleToHitch'
   *  Constant: '<S9>/TractorWheelbase'
   *  Constant: '<S9>/TrailUnitWheelbase'
   *  Gain: '<S78>/Gain'
   *  Product: '<S76>/Product1'
   *  Product: '<S77>/Product1'
   *  Product: '<S77>/Product2'
   *  Product: '<S78>/Product'
   *  Product: '<S78>/Product1'
   *  Product: '<S78>/Product3'
   *  Signum: '<S78>/Sign'
   *  Sum: '<S77>/Add'
   *  Sum: '<S78>/Add'
   *  Trigonometry: '<S76>/tan 1'
   *  Trigonometry: '<S78>/tan '
   *  Trigonometry: '<S78>/tan 1'
   */
  steering = atan((rtb_Uk1 / 1.0 * rtb_Sum * (-1.0) + rtb_Uk1_tmp / 1.0 * 4.0 *
                   rtb_Integrator) * (rtb_Uk1_tmp_0 * rtConstB.signL0b_o) * 3.0 /
                  (rtb_Integrator * 4.0 * rtb_Sum + rtb_Uk1_tmp * rtb_Uk1)) *
    45.6;

  /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
  /* determine if the counter needs a reset  */
  if (rtB.DataTypeConversion > 0) {
    QuadEncResetCounter(QUADENC_TIM3_PA6_PB5);
  }

  /* read counter from the quadrature encoder module */
  rtb_Level2MfileSFunction_k = QuadEncGetCounter(QUADENC_TIM3_PA6_PB5);

  /* Gain: '<S5>/Gain1' */
  position = (real_T)1474666883 * 1.4551915228366852E-11 * (real_T)
    rtb_Level2MfileSFunction_k;

  /* Sum: '<S5>/Sum' */
  control = steering - position;

  /* Abs: '<S5>/Abs' */
  rtb_Uk1 = fabs(control);

  /* Switch: '<S8>/Switch1' incorporates:
   *  DataTypeConversion: '<S5>/Cast'
   *  DiscreteIntegrator: '<S50>/Integrator'
   *  Gain: '<S55>/Proportional Gain'
   *  Sum: '<S59>/Sum'
   */
  rtb_Switch1 = (uint16_T)(propVal * rtb_Uk1 + rtDWork.Integrator_DSTATE);

  /* Sum: '<S5>/Add' incorporates:
   *  Constant: '<S5>/Motor dead zone'
   */
  mospeed = (uint16_T)((uint32_T)((uint16_T)300U) + rtb_Switch1);

  /* DataTypeConversion: '<S5>/Cast1' incorporates:
   *  Constant: '<S5>/Constant1'
   *  RelationalOperator: '<S5>/GreaterThan'
   */
  cw = (control > 0.0);

  /* Gain: '<S47>/Integral Gain' */
  rtb_Integrator = intVal * rtb_Uk1;

  /* Logic: '<S5>/NOT' */
  ccw = !cw;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S67>/FixPt Relational Operator'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtB.DataTypeConversion = (rtDWork.DelayInput1_DSTATE < 0.0);

  /* M-S-Function: '<S71>/Level-2 M-file S-Function' */
  /* read from analog input for filtered inputs*/
  rtb_Switch1 = AninGet(ANIN_PORTF_PIN10,0);

  /* M-S-Function: '<S72>/Level-2 M-file S-Function' */
  /* read from analog input for filtered inputs*/
  rtb_Level2MfileSFunction_d = AninGet(ANIN_PORTF_PIN8,0);

  /* Outputs for Enabled SubSystem: '<S8>/Subsystem' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S8>/Constant1'
   *  RelationalOperator: '<S8>/Equal1'
   */
  if (nodeRole == ((uint8_T)5U)) {
    /* DataStoreWrite: '<S69>/Data Store Write' */
    rtDWork.trailerTwoAngle = rtb_Level2MfileSFunction_d;

    /* Switch: '<S8>/Switch1' */
    rtb_Switch1 = rtb_Level2MfileSFunction_d;
  } else {
    /* Switch: '<S8>/Switch1' incorporates:
     *  DataStoreRead: '<S1>/Data Store Read1'
     */
    rtb_Switch1 = rtDWork.trailerTwoAngle;
  }

  /* End of Switch: '<S8>/Switch1' */
  /* End of Outputs for SubSystem: '<S8>/Subsystem' */

  /* Outputs for Enabled SubSystem: '<S8>/Subsystem1' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  if (rtb_AND) {
    /* DataStoreWrite: '<S70>/Data Store Write' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    rtDWork.trailerOneAngle = trailer1Slider;
  }

  /* End of Outputs for SubSystem: '<S8>/Subsystem1' */
  /* M-S-Function: '<S143>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S144>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S145>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for M-S-Function: '<S135>/Level-2 M-file S-Function' */
  /* set the new duty cycle */
  PwmoutSet(PWMOUT_TIM14_PIN_PF9, mospeed);

  /* Update for M-S-Function: '<S133>/Level-2 M-file S-Function' */
  /* update digital output */
  if (cw == 0) {
    DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN5, DIGOUT_HIGH);
  }

  /* Update for M-S-Function: '<S134>/Level-2 M-file S-Function' */
  /* update digital output */
  if (ccw == 0) {
    DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTE_PIN6, DIGOUT_HIGH);
  }

  /* Update for DiscreteIntegrator: '<S50>/Integrator' */
  rtDWork.Integrator_DSTATE += 0.01 * rtb_Integrator;

  /* Update for UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtDWork.DelayInput1_DSTATE = 0.0;
}

/* Model initialize function */
void HANcoder_E407_TTA_CombineModel_initialize(void)
{
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

    /* Start for Enabled SubSystem: '<S14>/Subsystem1' */
    /* Start for M-S-Function: '<S139>/S-Function' incorporates:
     *  Constant: '<S138>/Constant1'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S14>/Subsystem1' */

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S4>/S-Function' */

    /* Start for Enabled SubSystem: '<S1>/Message selector'
     *
     * Block description for '<S1>/Message selector':
     *  Truck 1
     */
    /* Start for Enabled SubSystem: '<S11>/MMBS1_RX' */
    /* Constant: '<S11>/Constant12' */
    MMBS1_RX_Start(MMBS1_ID);

    /* End of Start for SubSystem: '<S11>/MMBS1_RX' */

    /* Start for Enabled SubSystem: '<S11>/SSTM1_RX' */
    /* Constant: '<S11>/Constant14' */
    MMBS1_RX_Start(SSTM1_ID);

    /* End of Start for SubSystem: '<S11>/SSTM1_RX' */

    /* Start for Enabled SubSystem: '<S11>/SYNC1_RX' */
    /* Start for M-S-Function: '<S106>/S-Function' incorporates:
     *  Constant: '<S11>/Constant10'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, SYNC1_ID);

    /* End of Start for SubSystem: '<S11>/SYNC1_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRCK1_ID2_RX' */
    /* Constant: '<S11>/Constant5' */
    MMBS1_RX_Start(TRCK1_ID2);

    /* End of Start for SubSystem: '<S11>/TRCK1_ID2_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRCK1_RX' */
    /* Constant: '<S11>/Constant3' */
    MMBS1_RX_Start(TRCK1_ID1);

    /* End of Start for SubSystem: '<S11>/TRCK1_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRCK_ID3_RX' */
    /* Start for M-S-Function: '<S116>/S-Function' incorporates:
     *  Constant: '<S11>/Constant26'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRCK1_ID3);

    /* End of Start for SubSystem: '<S11>/TRCK_ID3_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRLS_ID4_RX' */
    /* Start for M-S-Function: '<S119>/S-Function' incorporates:
     *  Constant: '<S11>/Constant8'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID4);

    /* End of Start for SubSystem: '<S11>/TRLS_ID4_RX' */

    /* Start for Enabled SubSystem: '<S11>/TRLS_ID5_RX' */
    /* Start for M-S-Function: '<S128>/S-Function' incorporates:
     *  Constant: '<S11>/Constant18'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, TRLS1_ID5);

    /* End of Start for SubSystem: '<S11>/TRLS_ID5_RX' */
    /* End of Start for SubSystem: '<S1>/Message selector' */
    /* Start for M-S-Function: '<S133>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN5, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S134>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTE_PIN6, DIGOUT_CFG_PUSHPULL);

    /* Start for S-Function (sfcn_pwmout_init): '<S136>/S-Function' */

    /* initialize the PWM module and register the callback handler */
    PwmoutInit(PWMOUT_MODULE_TIM14, 10253, PWMOUT_EDGE_ALIGNMENT);
    PwmoutRegisterPeriodCompleteCallback(PWMOUT_MODULE_TIM14,
      PwmoutIRQ_PWMOUT_MODULE_TIM14);

    /* configures channel 1 */
    PwmoutConfigure(PWMOUT_TIM14_PIN_PF9, PWMOUT_ACTIVE_HIGH,
                    PWMOUT_INVERTED_OUTPUT_OFF);

    /* Start for M-S-Function: '<S18>/Level-2 M-file S-Function' */

    /* configure the quadrature encoder module */
    QuadEncConfigure(QUADENC_TIM3_PA6_PB5, QUADENC_CFG_FLOATING);

    /* Start for M-S-Function: '<S71>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN10,0);

    /* Start for M-S-Function: '<S72>/Level-2 M-file S-Function' */

    /* configure the analog input for filtered inputs */
    AninConfigure(ANIN_PORTF_PIN8,0);

    /* Start for M-S-Function: '<S2>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 250000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* Start for S-Function (sfcn_timeout_init): '<S12>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for M-S-Function: '<S16>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.EnabledSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SYNC1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRLS_ID4_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.Subsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRLS_ID5_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID3_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.TRCK1_ID2_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.SSTM1_TX.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
  rtPrevZCSigState.MMBS1_TX_a.MMBS1_TX_Trig_ZCE = POS_ZCSIG;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
