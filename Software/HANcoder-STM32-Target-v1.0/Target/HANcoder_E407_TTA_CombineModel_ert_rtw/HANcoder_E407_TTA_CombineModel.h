/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel.h
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

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_
#ifndef HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#define HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "canio.h"
#include "can.h"
#include "anin.h"
#include "quadencoder.h"
#include "pwmout.h"
#include "digout.h"
#include "timein.h"
#include "digin.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif                     /* HANcoder_E407_TTA_CombineModel_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_types.h"
#include "rt_i32zcfcn.h"
#include "zero_crossing_types.h"

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Block signals for system '<S38>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S39>/In1' */
  uint8_T In2;                         /* '<S39>/In2' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S11>/MMBS1_RX' */
typedef struct {
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S38>/Enabled Subsystem' */
} rtB_MMBS1_RX;

/* Block states (default storage) for system '<S11>/MMBS1_RX' */
typedef struct {
  boolean_T MMBS1_RX_MODE;             /* '<S11>/MMBS1_RX' */
} rtDW_MMBS1_RX;

/* Zero-crossing (trigger) state for system '<S11>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S11>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S48>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S48>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S48>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S48>/Moving Average' */
  boolean_T objisempty;                /* '<S48>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S120>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S122>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S11>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S29>/Data Store Read2' */
  uint8_T Cast;                        /* '<S120>/Cast' */
  uint8_T Cast1;                       /* '<S120>/Cast1' */
  uint8_T Cast_k;                      /* '<S121>/Cast' */
  uint8_T Cast1_i;                     /* '<S121>/Cast1' */
  rtB_BitShift BitShift_h;             /* '<S121>/Bit Shift' */
  rtB_BitShift BitShift_o;             /* '<S120>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S11>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S11>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals for system '<S144>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S146>/bit_shift' */
} rtB_BitShift_i;

/* Block signals (default storage) */
typedef struct {
  uint16_T DataStoreRead;              /* '<S26>/Data Store Read' */
  uint16_T Sum;                        /* '<S10>/Sum' */
  uint8_T DataStoreRead3;              /* '<S37>/Data Store Read3' */
  uint8_T Cast;                        /* '<S162>/Cast' */
  uint8_T Cast1;                       /* '<S162>/Cast1' */
  uint8_T Cast_f;                      /* '<S163>/Cast' */
  uint8_T Cast1_m;                     /* '<S163>/Cast1' */
  uint8_T DataStoreRead_n;             /* '<S25>/Data Store Read' */
  boolean_T OR;                        /* '<S13>/OR' */
  boolean_T DataTypeConversion;        /* '<S50>/Data Type Conversion' */
  boolean_T DataStoreRead1;            /* '<S26>/Data Store Read1' */
  boolean_T DataStoreRead3_n;          /* '<S26>/Data Store Read3' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S170>/Enabled Subsystem' */
  rtB_BitShift BitShift_gu;            /* '<S163>/Bit Shift' */
  rtB_BitShift BitShift_g;             /* '<S162>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S157>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_c;           /* '<S156>/Bit Shift' */
  rtB_TRCK1_ID2_TX TRLS_ID4_TX;        /* '<S11>/TRLS_ID4_TX' */
  rtB_EnabledSubsystem EnabledSubsystem_g;/* '<S145>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_jm;          /* '<S144>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S142>/Enabled Subsystem' */
  rtB_TRCK1_ID2_TX TRCK1_TX;           /* '<S11>/TRCK1_TX' */
  rtB_MMBS1_RX TRCK1_RX;               /* '<S11>/TRCK1_RX' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S11>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S11>/TRCK1_ID2_TX' */
  rtB_MMBS1_RX TRCK1_ID2_RX;           /* '<S11>/TRCK1_ID2_RX' */
  rtB_MovingAverage MovingAverage1;    /* '<S48>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S48>/Moving Average' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S44>/Enabled Subsystem' */
  rtB_MMBS1_RX SSTM1_RX;               /* '<S11>/SSTM1_RX' */
  rtB_MMBS1_RX MMBS1_RX_j;             /* '<S11>/MMBS1_RX' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S94>/Integrator' */
  real_T DelayInput1_DSTATE;           /* '<S53>/Delay Input1' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T amountOfTrailers;             /* '<S1>/Data Store Memory5' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S25>/Data Store Memory' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T nodeRole;                    /* '<S1>/Data Store Memory10' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  boolean_T slaveClockOn;              /* '<S13>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T Subsystem2_MODE;           /* '<S13>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S11>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S11>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S11>/TRCK_ID3_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S11>/SYNC1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MMBS1_RX TRCK1_RX;              /* '<S11>/TRCK1_RX' */
  rtDW_MMBS1_RX TRCK1_ID2_RX;          /* '<S11>/TRCK1_ID2_RX' */
  rtDW_MovingAverage MovingAverage1;   /* '<S48>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S48>/Moving Average' */
  rtDW_MMBS1_RX SSTM1_RX;              /* '<S11>/SSTM1_RX' */
  rtDW_MMBS1_RX MMBS1_RX_j;            /* '<S11>/MMBS1_RX' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S169>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S13>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S11>/TRLS_ID5_TX' */
  rtZCE_TRCK1_ID2_TX TRLS_ID4_TX;      /* '<S11>/TRLS_ID4_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_TX;         /* '<S11>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S11>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S11>/TRCK1_ID2_TX' */
  ZCSigState Subsystem_Trig_ZCE_g;     /* '<S11>/Subsystem' */
  ZCSigState Slot5execution_Trig_ZCE;  /* '<S11>/Slot 5 execution' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S11>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S24>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S11>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S11>/MMBS1_TX' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S10>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S112>/Sign' */
  const real_T signL0b;                /* '<S112>/Sign1' */
  const real_T Abs;                    /* '<S113>/Abs' */
  const real_T signL0b_o;              /* '<S116>/Sign1' */
} ConstBlockIO;

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates rtPrevZCSigState;
extern const ConstBlockIO rtConstB;    /* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T reqAngle;                /* '<S27>/Data Store Read' */
extern real_T Gamma1;                  /* '<S59>/Sum1' */
extern real_T steering;                /* '<S58>/Gain2' */
extern real_T position;                /* '<S58>/Gain1' */
extern real_T control;                 /* '<S58>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S174>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S175>/Level-2 M-file S-Function' */
extern real32_T delta12K;              /* '<S114>/tan 1' */
extern uint16_T t2Angle;               /* '<S27>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S27>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S59>/Sum2' */
extern uint16_T mospeed;               /* '<S58>/Add' */
extern uint16_T analogPot1;            /* '<S51>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S48>/Cast1' */
extern uint16_T analogPot2;            /* '<S52>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S48>/Cast2' */
extern uint16_T testCounter;           /* '<S25>/Data Store Read1' */
extern uint8_T SI_CPUload;             /* '<S173>/Level-2 M-file S-Function' */
extern uint8_T local_ticks_interrupt;  /* '<S10>/Switch' */
extern uint8_T setSlotTime;            /* '<S10>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S17>/Switch' */
extern boolean_T boolCan;              /* '<S11>/AND' */
extern boolean_T cw;                   /* '<S58>/Cast1' */
extern boolean_T ccw;                  /* '<S58>/NOT' */
extern boolean_T canActive;            /* '<S10>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S13>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S58>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S48>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S91>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S17>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S99>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S11>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S11>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S11>/Constant10'
                                        *   '<S169>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S11>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S11>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S11>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S11>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S11>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S168>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HANcoder_E407_TTA_CombineModel'
 * '<S1>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input1'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Digital Input2'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer1 Angle'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer2 Angle'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output1'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Duty Cycle'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Init'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer local velocity'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer yew rate'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Steer angle at steer axle'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor local velocity'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor yaw rate'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                        /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
