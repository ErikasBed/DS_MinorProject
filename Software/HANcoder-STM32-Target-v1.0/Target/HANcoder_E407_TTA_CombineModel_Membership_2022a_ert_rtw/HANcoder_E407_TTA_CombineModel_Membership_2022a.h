/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_CombineModel_Membership_2022a.h
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_CombineModel_Membership_2022a'.
 *
 * Model version                  : 16.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Jun  6 15:53:51 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_TTA_CombineModel_Membership_2022a_h_
#define RTW_HEADER_HANcoder_E407_TTA_CombineModel_Membership_2022a_h_
#ifndef HANcoder_E407_TTA_CombineModel_Membership_2022a_COMMON_INCLUDES_
#define HANcoder_E407_TTA_CombineModel_Membership_2022a_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "timeout.h"
#include "digin.h"
#include "canio.h"
#include "can.h"
#include "anin.h"
#include "quadencoder.h"
#include "pwmout.h"
#include "digout.h"
#include "timein.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "mac.h"
#endif    /* HANcoder_E407_TTA_CombineModel_Membership_2022a_COMMON_INCLUDES_ */

#include "HANcoder_E407_TTA_CombineModel_Membership_2022a_types.h"
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

/* Block signals for system '<S40>/Enabled Subsystem' */
typedef struct {
  uint8_T In1;                         /* '<S41>/In1' */
  uint8_T In2;                         /* '<S41>/In2' */
  uint8_T In6;                         /* '<S41>/In6' */
} rtB_EnabledSubsystem;

/* Block signals for system '<S8>/MMBS1_RX' */
typedef struct {
  rtB_EnabledSubsystem EnabledSubsystem_k;/* '<S40>/Enabled Subsystem' */
} rtB_MMBS1_RX;

/* Block states (default storage) for system '<S8>/MMBS1_RX' */
typedef struct {
  boolean_T MMBS1_RX_MODE;             /* '<S8>/MMBS1_RX' */
} rtDW_MMBS1_RX;

/* Zero-crossing (trigger) state for system '<S8>/MMBS1_TX' */
typedef struct {
  ZCSigState MMBS1_TX_Trig_ZCE;        /* '<S8>/MMBS1_TX' */
} rtZCE_MMBS1_TX;

/* Block signals for system '<S50>/Moving Average' */
typedef struct {
  real32_T MovingAverage_n;            /* '<S50>/Moving Average' */
} rtB_MovingAverage;

/* Block states (default storage) for system '<S50>/Moving Average' */
typedef struct {
  dsp_simulink_MovingAverage obj;      /* '<S50>/Moving Average' */
  boolean_T objisempty;                /* '<S50>/Moving Average' */
} rtDW_MovingAverage;

/* Block signals for system '<S124>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S126>/bit_shift' */
} rtB_BitShift;

/* Block signals for system '<S8>/TRCK1_ID2_TX' */
typedef struct {
  uint8_T DataStoreRead2;              /* '<S31>/Data Store Read2' */
  uint8_T Cast;                        /* '<S124>/Cast' */
  uint8_T Cast1;                       /* '<S124>/Cast1' */
  uint8_T Cast_k;                      /* '<S125>/Cast' */
  uint8_T Cast1_i;                     /* '<S125>/Cast1' */
  rtB_BitShift BitShift_h;             /* '<S125>/Bit Shift' */
  rtB_BitShift BitShift_o;             /* '<S124>/Bit Shift' */
} rtB_TRCK1_ID2_TX;

/* Zero-crossing (trigger) state for system '<S8>/TRCK1_ID2_TX' */
typedef struct {
  ZCSigState TRCK1_ID2_TX_Trig_ZCE;    /* '<S8>/TRCK1_ID2_TX' */
} rtZCE_TRCK1_ID2_TX;

/* Block signals for system '<S148>/Bit Shift' */
typedef struct {
  uint16_T y;                          /* '<S150>/bit_shift' */
} rtB_BitShift_i;

/* Block signals (default storage) */
typedef struct {
  real_T Constant;                     /* '<S14>/Constant' */
  real_T Constant_a;                   /* '<S13>/Constant' */
  real_T Constant_i;                   /* '<S12>/Constant' */
  real_T Add;                          /* '<S11>/Add' */
  uint16_T DataStoreRead;              /* '<S28>/Data Store Read' */
  uint16_T Sum;                        /* '<S7>/Sum' */
  uint8_T DataStoreRead3;              /* '<S39>/Data Store Read3' */
  uint8_T DataStoreRead4;              /* '<S39>/Data Store Read4' */
  uint8_T Cast;                        /* '<S166>/Cast' */
  uint8_T Cast1;                       /* '<S166>/Cast1' */
  uint8_T Cast_f;                      /* '<S167>/Cast' */
  uint8_T Cast1_m;                     /* '<S167>/Cast1' */
  uint8_T DataStoreRead2;              /* '<S37>/Data Store Read2' */
  uint8_T DataStoreRead3_h;            /* '<S37>/Data Store Read3' */
  uint8_T Cast_d;                      /* '<S154>/Cast' */
  uint8_T Cast1_c;                     /* '<S154>/Cast1' */
  uint8_T Cast_n;                      /* '<S155>/Cast' */
  uint8_T Cast1_i;                     /* '<S155>/Cast1' */
  uint8_T DataStoreRead_n;             /* '<S27>/Data Store Read' */
  boolean_T OR;                        /* '<S10>/OR' */
  boolean_T DataTypeConversion;        /* '<S53>/Data Type Conversion' */
  boolean_T Equal;                     /* '<S51>/Equal' */
  boolean_T DataStoreRead1;            /* '<S28>/Data Store Read1' */
  boolean_T DataStoreRead3_n;          /* '<S28>/Data Store Read3' */
  rtB_EnabledSubsystem EnabledSubsystem_i;/* '<S174>/Enabled Subsystem' */
  rtB_BitShift BitShift_gu;            /* '<S167>/Bit Shift' */
  rtB_BitShift BitShift_g;             /* '<S166>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_e;/* '<S161>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_c;           /* '<S160>/Bit Shift' */
  rtB_BitShift BitShift_d;             /* '<S155>/Bit Shift' */
  rtB_BitShift BitShift_h;             /* '<S154>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_g;/* '<S149>/Enabled Subsystem' */
  rtB_BitShift_i BitShift_jm;          /* '<S148>/Bit Shift' */
  rtB_EnabledSubsystem EnabledSubsystem_b;/* '<S146>/Enabled Subsystem' */
  rtB_TRCK1_ID2_TX TRCK1_TX;           /* '<S8>/TRCK1_TX' */
  rtB_MMBS1_RX TRCK1_RX;               /* '<S8>/TRCK1_RX' */
  rtB_TRCK1_ID2_TX TRCK1_ID3_TX;       /* '<S8>/TRCK1_ID3_TX' */
  rtB_TRCK1_ID2_TX TRCK1_ID2_TX_f;     /* '<S8>/TRCK1_ID2_TX' */
  rtB_MMBS1_RX TRCK1_ID2_RX;           /* '<S8>/TRCK1_ID2_RX' */
  rtB_MovingAverage MovingAverage1;    /* '<S50>/Moving Average' */
  rtB_MovingAverage MovingAverage_p;   /* '<S50>/Moving Average' */
  rtB_EnabledSubsystem EnabledSubsystem_c;/* '<S46>/Enabled Subsystem' */
  rtB_MMBS1_RX SSTM1_RX;               /* '<S8>/SSTM1_RX' */
  rtB_MMBS1_RX MMBS1_RX_j;             /* '<S8>/MMBS1_RX' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S98>/Integrator' */
  real_T DelayInput1_DSTATE;           /* '<S56>/Delay Input1' */
  real_T setAngle;                     /* '<S1>/Data Store Memory2' */
  real_T Board11_Error;                /* '<S1>/Data Store Memory23' */
  real_T Board12_Error;                /* '<S1>/Data Store Memory24' */
  real_T trailer2buttonPress;          /* '<S1>/Data Store Memory26' */
  real_T amountOfTrailers;             /* '<S1>/Data Store Memory5' */
  real_T systemState;                  /* '<S1>/Data Store Memory6' */
  real_T init_clock;                   /* '<S1>/Data Store Memory18' */
  real_T Board_ID;                     /* '<S1>/Data Store Memory17' */
  real_T requestedAngle;               /* '<S1>/Data Store Memory7' */
  int32_T encoderPosition;             /* '<S1>/Data Store Memory16' */
  uint16_T potentiometer1;             /* '<S1>/Data Store Memory1' */
  uint16_T pwmMotor;                   /* '<S1>/Data Store Memory12' */
  uint16_T potentiometer2;             /* '<S1>/Data Store Memory4' */
  uint16_T trailerOneAngle;            /* '<S1>/Data Store Memory8' */
  uint16_T trailerTwoAngle;            /* '<S1>/Data Store Memory9' */
  uint16_T testCount;                  /* '<S27>/Data Store Memory' */
  int8_T If1_ActiveSubsystem;          /* '<S1>/If1' */
  uint8_T nodeRole;                    /* '<S1>/Data Store Memory10' */
  uint8_T velocity;                    /* '<S1>/Data Store Memory11' */
  uint8_T Local_Ticks;                 /* '<S1>/Data Store Memory' */
  uint8_T slot;                        /* '<S1>/Data Store Memory15' */
  uint8_T Master_ID;                   /* '<S1>/Data Store Memory19' */
  uint8_T buttonPress;                 /* '<S1>/Data Store Memory25' */
  uint8_T SlotTime;                    /* '<S1>/Data Store Memory3' */
  boolean_T slaveClockOn;              /* '<S10>/Data Store Memory' */
  boolean_T cwMotor;                   /* '<S1>/Data Store Memory13' */
  boolean_T ccwMotor;                  /* '<S1>/Data Store Memory14' */
  boolean_T Board1_Error;              /* '<S1>/Data Store Memory20' */
  boolean_T Board2_Error;              /* '<S1>/Data Store Memory21' */
  boolean_T Board3_Error;              /* '<S1>/Data Store Memory22' */
  boolean_T Subsystem2_MODE;           /* '<S10>/Subsystem2' */
  boolean_T Messageselector_MODE;      /* '<S1>/Message selector' */
  boolean_T TRLS_ID5_RX_MODE;          /* '<S8>/TRLS_ID5_RX' */
  boolean_T TRLS_ID4_RX_MODE;          /* '<S8>/TRLS_ID4_RX' */
  boolean_T TRCK_ID3_RX_MODE;          /* '<S8>/TRCK_ID3_RX' */
  boolean_T SYNC1_RX_MODE;             /* '<S8>/SYNC1_RX' */
  boolean_T InitializeClockSchedule_MODE;/* '<S1>/Initialize Clock Schedule' */
  rtDW_MMBS1_RX TRCK1_RX;              /* '<S8>/TRCK1_RX' */
  rtDW_MMBS1_RX TRCK1_ID2_RX;          /* '<S8>/TRCK1_ID2_RX' */
  rtDW_MovingAverage MovingAverage1;   /* '<S50>/Moving Average' */
  rtDW_MovingAverage MovingAverage_p;  /* '<S50>/Moving Average' */
  rtDW_MMBS1_RX SSTM1_RX;              /* '<S8>/SSTM1_RX' */
  rtDW_MMBS1_RX MMBS1_RX_j;            /* '<S8>/MMBS1_RX' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem2_Trig_ZCE;      /* '<S1>/Subsystem2' */
  ZCSigState Subsystem1_Trig_ZCE;      /* '<S1>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE;       /* '<S1>/Subsystem' */
  ZCSigState Subsystem1_Trig_ZCE_l;    /* '<S173>/Subsystem1' */
  ZCSigState Subsystem_Trig_ZCE_a;     /* '<S10>/Subsystem' */
  ZCSigState TRLS_ID5_TX_Trig_ZCE;     /* '<S8>/TRLS_ID5_TX' */
  ZCSigState TRLS_ID4_TX_Trig_ZCE;     /* '<S8>/TRLS_ID4_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_TX;         /* '<S8>/TRCK1_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID3_TX;     /* '<S8>/TRCK1_ID3_TX' */
  rtZCE_TRCK1_ID2_TX TRCK1_ID2_TX_f;   /* '<S8>/TRCK1_ID2_TX' */
  ZCSigState Subsystem_Trig_ZCE_g;     /* '<S8>/Subsystem' */
  ZCSigState Slot5execution_Trig_ZCE;  /* '<S8>/Slot 5 execution' */
  ZCSigState SYNC1_TX_Trig_ZCE;        /* '<S8>/SYNC1_TX' */
  ZCSigState Subsystem_Trig_ZCE_h;     /* '<S26>/Subsystem' */
  rtZCE_MMBS1_TX SSTM1_TX;             /* '<S8>/SSTM1_TX' */
  rtZCE_MMBS1_TX MMBS1_TX_a;           /* '<S8>/MMBS1_TX' */
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S7>/Enabled Subsystem' */
} PrevZCSigStates;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T signV2;                 /* '<S116>/Sign' */
  const real_T signL0b;                /* '<S116>/Sign1' */
  const real_T Abs;                    /* '<S117>/Abs' */
  const real_T signL0b_o;              /* '<S120>/Sign1' */
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
extern real_T reqAngle;                /* '<S29>/Data Store Read' */
extern real_T Gamma1;                  /* '<S63>/Sum1' */
extern real_T steering;                /* '<S62>/Gain2' */
extern real_T position;                /* '<S62>/Gain1' */
extern real_T control;                 /* '<S62>/Sum' */
extern uint32_T SI_FreeHeap;           /* '<S181>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S182>/Level-2 M-file S-Function' */
extern real32_T delta12K;              /* '<S118>/tan 1' */
extern uint16_T t2Angle;               /* '<S29>/Data Store Read2' */
extern uint16_T t1Angle;               /* '<S29>/Data Store Read1' */
extern uint16_T Gamma2;                /* '<S63>/Sum2' */
extern uint16_T mospeed;               /* '<S62>/Add' */
extern uint16_T analogPot1;            /* '<S54>/Level-2 M-file S-Function' */
extern uint16_T pot1;                  /* '<S50>/Cast1' */
extern uint16_T analogPot2;            /* '<S55>/Level-2 M-file S-Function' */
extern uint16_T pot2;                  /* '<S50>/Cast2' */
extern uint16_T testCounter;           /* '<S27>/Data Store Read1' */
extern uint8_T SI_CPUload;             /* '<S180>/Level-2 M-file S-Function' */
extern uint8_T local_ticks_interrupt;  /* '<S7>/Switch' */
extern uint8_T setSlotTime;            /* '<S7>/Data Store Read3' */
extern uint8_T slotSelected;           /* '<S19>/Switch' */
extern boolean_T boolCan;              /* '<S8>/AND' */
extern boolean_T cw;                   /* '<S62>/Cast1' */
extern boolean_T ccw;                  /* '<S62>/NOT' */
extern boolean_T canActive;            /* '<S7>/Clock_State' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T ClockOn;                 /* Variable: ClockOn
                                        * Referenced by: '<S10>/Constant'
                                        */
extern real_T controlWidth;            /* Variable: controlWidth
                                        * Referenced by: '<S62>/Constant'
                                        */
extern real_T desiredAngle;            /* Variable: desiredAngle
                                        * Referenced by: '<S50>/Constant2'
                                        */
extern real_T intVal;                  /* Variable: intVal
                                        * Referenced by: '<S95>/Integral Gain'
                                        */
extern real_T matrixRows;              /* Variable: matrixRows
                                        * Referenced by: '<S19>/Constant1'
                                        */
extern real_T propVal;                 /* Variable: propVal
                                        * Referenced by: '<S103>/Proportional Gain'
                                        */
extern uint32_T MMBS1_ID;              /* Variable: MMBS1_ID
                                        * Referenced by: '<S8>/Constant12'
                                        */
extern uint32_T SSTM1_ID;              /* Variable: SSTM1_ID
                                        * Referenced by: '<S8>/Constant14'
                                        */
extern uint32_T SYNC1_ID;              /* Variable: SYNC1_ID
                                        * Referenced by:
                                        *   '<S8>/Constant10'
                                        *   '<S173>/Constant10'
                                        */
extern uint32_T TRCK1_ID1;             /* Variable: TRCK1_ID1
                                        * Referenced by: '<S8>/Constant3'
                                        */
extern uint32_T TRCK1_ID2;             /* Variable: TRCK1_ID2
                                        * Referenced by: '<S8>/Constant5'
                                        */
extern uint32_T TRCK1_ID3;             /* Variable: TRCK1_ID3
                                        * Referenced by: '<S8>/Constant26'
                                        */
extern uint32_T TRLS1_ID4;             /* Variable: TRLS1_ID4
                                        * Referenced by: '<S8>/Constant8'
                                        */
extern uint32_T TRLS1_ID5;             /* Variable: TRLS1_ID5
                                        * Referenced by: '<S8>/Constant18'
                                        */
extern uint8_T slotTime;               /* Variable: slotTime
                                        * Referenced by: '<S172>/Constant3'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_TTA_CombineModel_Membership_2022a_initialize(void);
extern void HANcoder_E407_TTA_CombineModel_Membership_2022a_step(void);

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
 * '<Root>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a'
 * '<S1>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S3>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S4>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Compare Event IRQ'
 * '<S5>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule'
 * '<S7>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation'
 * '<S8>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector'
 * '<S9>'   : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Output Compare Init'
 * '<S10>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment'
 * '<S11>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID'
 * '<S12>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem'
 * '<S13>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem1'
 * '<S14>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem2'
 * '<S15>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Subsystem3'
 * '<S16>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S17>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S18>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Initialize Clock Schedule/Schedule Compare Event'
 * '<S19>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Enabled Subsystem'
 * '<S20>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Get Last Event Counter'
 * '<S21>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Local Time generation/Schedule Compare Event1'
 * '<S22>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX'
 * '<S23>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX'
 * '<S24>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX'
 * '<S25>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX'
 * '<S26>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX'
 * '<S27>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX'
 * '<S28>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution'
 * '<S29>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem'
 * '<S30>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX'
 * '<S31>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX'
 * '<S32>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX'
 * '<S33>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX'
 * '<S34>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX'
 * '<S35>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX'
 * '<S36>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX'
 * '<S37>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX'
 * '<S38>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX'
 * '<S39>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX'
 * '<S40>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1'
 * '<S41>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_RX/CAN receive1/Enabled Subsystem'
 * '<S42>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/MMBS1_TX/CAN send1'
 * '<S43>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1'
 * '<S44>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_RX/CAN receive1/Enabled Subsystem'
 * '<S45>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SSTM1_TX/CAN send1'
 * '<S46>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1'
 * '<S47>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/Subsystem'
 * '<S48>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_RX/CAN receive1/Enabled Subsystem'
 * '<S49>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/SYNC1_TX/CAN send1'
 * '<S50>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs'
 * '<S51>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs'
 * '<S52>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Digital Input'
 * '<S53>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get'
 * '<S54>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer1 Angle'
 * '<S55>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Trailer2 Angle'
 * '<S56>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Inputs/Quadrature Encoder Get/Detect Increase'
 * '<S57>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output'
 * '<S58>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output1'
 * '<S59>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/Digital Output2'
 * '<S60>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Duty Cycle'
 * '<S61>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Slot 5 execution/Outputs/PWM Init'
 * '<S62>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm'
 * '<S63>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm'
 * '<S64>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1'
 * '<S65>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup'
 * '<S66>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain'
 * '<S67>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter'
 * '<S68>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs'
 * '<S69>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain'
 * '<S70>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain'
 * '<S71>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S72>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator'
 * '<S73>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs'
 * '<S74>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy'
 * '<S75>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain'
 * '<S76>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy'
 * '<S77>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain'
 * '<S78>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal'
 * '<S79>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation'
 * '<S80>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk'
 * '<S81>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum'
 * '<S82>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk'
 * '<S83>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode'
 * '<S84>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum'
 * '<S85>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral'
 * '<S86>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain'
 * '<S87>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal'
 * '<S88>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal'
 * '<S89>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S90>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S91>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S92>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/D Gain/Disabled'
 * '<S93>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter/Disabled'
 * '<S94>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S95>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S96>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S97>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S98>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator/Discrete'
 * '<S99>'  : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S100>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S101>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/N Gain/Disabled'
 * '<S102>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/P Copy/Disabled'
 * '<S103>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S104>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S105>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation/Enabled'
 * '<S106>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S107>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum/Sum_PI'
 * '<S108>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S109>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S110>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S111>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S112>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S113>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S114>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Control Algorithm/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S115>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer local velocity'
 * '<S116>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/1st trailer yew rate'
 * '<S117>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/2nd Trailer yaw rate'
 * '<S118>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Steer angle at steer axle'
 * '<S119>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor local velocity'
 * '<S120>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/Subsystem/Kinematic Algorithm/Tractor yaw rate'
 * '<S121>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1'
 * '<S122>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_RX/CAN receive1/Enabled Subsystem'
 * '<S123>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/CAN send1'
 * '<S124>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1'
 * '<S125>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8'
 * '<S126>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift'
 * '<S127>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S128>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift'
 * '<S129>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID2_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S130>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/CAN send1'
 * '<S131>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1'
 * '<S132>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8'
 * '<S133>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift'
 * '<S134>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S135>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift'
 * '<S136>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_ID3_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S137>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1'
 * '<S138>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_RX/CAN receive1/Enabled Subsystem'
 * '<S139>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/CAN send1'
 * '<S140>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1'
 * '<S141>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8'
 * '<S142>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift'
 * '<S143>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S144>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift'
 * '<S145>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK1_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S146>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1'
 * '<S147>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRCK_ID3_RX/CAN receive1/Enabled Subsystem'
 * '<S148>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16'
 * '<S149>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1'
 * '<S150>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift'
 * '<S151>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S152>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_RX/CAN receive1/Enabled Subsystem'
 * '<S153>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/CAN send1'
 * '<S154>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1'
 * '<S155>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8'
 * '<S156>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift'
 * '<S157>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S158>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift'
 * '<S159>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID4_TX/uint16to2uint8/Bit Shift/bit_shift'
 * '<S160>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16'
 * '<S161>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1'
 * '<S162>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift'
 * '<S163>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/2bytes2uint16/Bit Shift/bit_shift'
 * '<S164>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_RX/CAN receive1/Enabled Subsystem'
 * '<S165>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/CAN send1'
 * '<S166>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1'
 * '<S167>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2'
 * '<S168>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift'
 * '<S169>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint1/Bit Shift/bit_shift'
 * '<S170>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift'
 * '<S171>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Message selector/TRLS_ID5_TX/uint16to2uint2/Bit Shift/bit_shift'
 * '<S172>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem'
 * '<S173>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2'
 * '<S174>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1'
 * '<S175>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/Subsystem1'
 * '<S176>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Role assignment/Subsystem2/CAN receive1/Enabled Subsystem'
 * '<S177>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input'
 * '<S178>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input1'
 * '<S179>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/Setting ID/Digital Input2'
 * '<S180>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S181>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S182>' : 'HANcoder_E407_TTA_CombineModel_Membership_2022a/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif       /* RTW_HEADER_HANcoder_E407_TTA_CombineModel_Membership_2022a_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
