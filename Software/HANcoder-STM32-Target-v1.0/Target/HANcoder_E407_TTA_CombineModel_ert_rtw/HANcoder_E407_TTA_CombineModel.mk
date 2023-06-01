#|***************************************************************************************
#|  Description: Makefile Template for Codesourcery Lite for ARM and the STM32-E407
#|    File Name: STM32_E407_gcc.tmf
#|
#|---------------------------------------------------------------------------------------
#|                          C O P Y R I G H T
#|---------------------------------------------------------------------------------------
#|   Copyright 2014 (c) by HAN Automotive     http://www.han.nl     All rights reserved
#|
#|---------------------------------------------------------------------------------------
#|                            L I C E N S E
#|---------------------------------------------------------------------------------------
#| This file is part of the HANcoder Target Matlab/Simulink Blockset environment. For the
#| licensing terms, please contact HAN Automotive.
#|
#| This software has been carefully tested, but is not guaranteed for any particular
#| purpose. HAN Automotive does not offer any warranties and does not guarantee the 
#| accuracy, adequacy, or completeness of the software and is not responsible for any 
#| errors or omissions or the results obtained from use of the software.
#| 
#|***************************************************************************************


#|---------------------------------------------------------------------------------------
#| Macros read by make_rtw          
#|---------------------------------------------------------------------------------------
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.
MAKECMD         = "%MATLAB%\bin\win64\gmake"
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any
COMPILER_TOOL_CHAIN = default


#|---------------------------------------------------------------------------------------
#| Tokens expanded by make_rtw
#|---------------------------------------------------------------------------------------
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to were MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of additional S-function modules.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
MODEL                = HANcoder_E407_TTA_CombineModel
MODULES              = HANcoder_E407_TTA_CombineModel_data.c rt_i32zcfcn.c
MAKEFILE             = HANcoder_E407_TTA_CombineModel.mk
MATLAB_ROOT          = C:\Program Files\MATLAB\R2022b
ALT_MATLAB_ROOT      = C:\PROGRA~1\MATLAB\R2022b
MATLAB_BIN           = C:\Program Files\MATLAB\R2022b\bin
ALT_MATLAB_BIN       = C:\PROGRA~1\MATLAB\R2022b\bin
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
NUMST                = 1
NCSTATES             = 0
BUILDARGS            = SHELL= HANcoder_PORTABLE=1 HANcoder_BOOTLOADER=1 GENERATE_ASAP2=1 OPTS="-DTID01EQ=0"
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 0
ONESTEPFCN           = 1
TERMFCN              = 0
B_ERTSFCN            = 0
MEXEXT               = mexw64
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000
MULTI_INSTANCE_CODE  = 0
MODELREFS               = 
SHARED_SRC              = 
SHARED_SRC_DIR          = 
SHARED_BIN_DIR          = 
SHARED_LIB              = 
GEN_SAMPLE_MAIN         = 0
TARGET_LANG_EXT         = c
MEX_OPT_FILE            = 


#|---------------------------------------------------------------------------------------
#| Model and reference models
#|---------------------------------------------------------------------------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE


#|---------------------------------------------------------------------------------------
#| Environment Specifications
#|---------------------------------------------------------------------------------------
# In the case when directory name contains space
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

# Set the base path for the blockset.
ifeq ($(HANcoder_PORTABLE),1)
HANcoder_TARGET_BASE_PATH = $(RELATIVE_PATH_TO_ANCHOR)/blockset
else
HANcoder_TARGET_BASE_PATH = $(MATLAB_ROOT)
endif

# Adjust the model name for the specific Bosch Rexroth controller
MODEL_NAME = $(MODEL)

# Set some commonly used paths
RTW_PATH     = $(HANcoder_TARGET_BASE_PATH)/rtw/STM32
TOOLBOX_PATH = $(HANcoder_TARGET_BASE_PATH)/toolbox/STM32
BIN_PATH     = $(RELATIVE_PATH_TO_ANCHOR)
CFG_PATH     = $(RTW_PATH)/cfg
CMD_PATH     = $(RTW_PATH)/cmd
INC_PATH     = $(RTW_PATH)/inc
SRC_PATH     = $(RTW_PATH)/src
LIB_PATH     = $(RTW_PATH)/lib


#|---------------------------------------------------------------------------------------|
#| Compiler binaries                                                                     |
#|---------------------------------------------------------------------------------------|
CC = arm-none-eabi-gcc
AS = arm-none-eabi-as
AR = arm-none-eabi-ar
LD = arm-none-eabi-gcc
OC = arm-none-eabi-objcopy
OD = arm-none-eabi-objdump
SZ = arm-none-eabi-size
RM = cs-rm


#|---------------------------------------------------------------------------------------
#| Tool Specifications
#|---------------------------------------------------------------------------------------



#|---------------------------------------------------------------------------------------
#| Include Path
#|---------------------------------------------------------------------------------------
MATLAB_INCLUDES = \
	-I"$(MATLAB_ROOT)\simulink\include" \
	-I"$(MATLAB_ROOT)\extern\include" \
	-I"$(MATLAB_ROOT)\rtw\c\src"

COMPILER_INCLUDES =

# HANcoder Target includes
HANcoder_INCLUDES = \
	-I$(INC_PATH) \
	-I$(INC_PATH)/third_party/fatfs \
	-I$(INC_PATH)/third_party/canopennode \
	-I$(INC_PATH)/STM32_E407 \
	-I$(INC_PATH)/STM32_E407/lwip \
	-I$(INC_PATH)/STM32_E407/lwip/OS \
	-I$(INC_PATH)/third_party/lwip/src/include/ipv4 \
	-I$(INC_PATH)/third_party/lwip/src/include/lwip \
	-I$(INC_PATH)/third_party/lwip/src/include \
	-I$(SRC_PATH)/.. \
	-I$(SRC_PATH) \
	-I$(SRC_PATH)/STM32_E407 \
	-I$(SRC_PATH)/third_party/canopennode \
	-I$(SRC_PATH)/third_party/fatfs \
	-I$(SRC_PATH)/third_party/fatfs/option \
	-I$(SRC_PATH)/STM32_E407/lwip/OS \
	-I$(SRC_PATH)/third_party/lwip/src/api \
	-I$(SRC_PATH)/third_party/lwip/src/core \
	-I$(SRC_PATH)/third_party/lwip/src/core/ipv4 \
	-I$(SRC_PATH)/third_party/lwip/src/core/snmp \
	-I$(SRC_PATH)/third_party/lwip/src/netif
  

# Additional includes
ADD_INCLUDES = \
	-I"C:\Temp\LOCAL\Studie\DS\ProjectRepo\DS_MinorProject\Software\HANcoder-STM32-Target-v1.0\Target" \
	-I"C:\Temp\LOCAL\Studie\DS\ProjectRepo\DS_MinorProject\Software\HANcoder-STM32-Target-v1.0\Target\HANcoder_E407_TTA_CombineModel_ert_rtw" \
	-I"$(MATLAB_ROOT)\extern\include" \
	-I"$(MATLAB_ROOT)\simulink\include" \
	-I"$(MATLAB_ROOT)\rtw\c\src" \
	-I"$(MATLAB_ROOT)\rtw\c\src\ext_mode\common" \
	-I"$(MATLAB_ROOT)\rtw\c\ert" \


# see MATLAB_INCLUDES
SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR)
endif

CC_INCLUDES += -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) $(ADD_INCLUDES) \
	$(COMPILER_INCLUDES) $(USER_INCLUDES) $(MODELREF_INC_PATH) \
	$(SHARED_INCLUDES) $(HANcoder_INCLUDES)

CC_INCLUDES += -I"$(MATLAB_ROOT)\rtw\c\ert"

AC_INCLUDES =

# Set the linker command file for either JTAG or Bootloader memory layout
ifeq ($(HANcoder_BOOTLOADER),1)
LINKER_LNK   = -T "$(CFG_PATH)\stm32_e407_boot.x"
else
LINKER_LNK   = -T "$(CFG_PATH)\stm32_e407_jtag_ccram.x"
endif


#|---------------------------------------------------------------------------------------
#| Tool flags
#|---------------------------------------------------------------------------------------
# MATLAB settings flags
CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMT=$(MULTITASKING) -DMODEL_INITIALIZE=$(MODEL)_initialize \
		  -DMODEL_TERMINATE=$(MODEL)_terminate -DMODEL_STEP=$(MODEL)_step \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE)
# additional compiler flags
CC_FLAGS        += $(OPTS) $(CPP_REQ_DEFINES)
CC_FLAGS        += -DALIGN_STRUCT_END=__attribute\(\(aligned\(4\)\)\) -DUSE_USB_OTG_FS
CC_FLAGS        += -DSTM32F4XX -DUSE_STDPERIPH_DRIVER -DGCC_ARMCM3 -DHSE_VALUE=12000000 -DFALSE=0 -DTRUE=1 
CC_FLAGS        += -O2 -ffunction-sections -fdata-sections -Wall -Wa,-adhlns="$@.lst" -Wno-main -c -fmessage-length=0 -fno-zero-initialized-in-bss
CC_FLAGS        += -fsingle-precision-constant -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -g
CC_FLAGS        += -Wno-maybe-uninitialized -Wno-unused-but-set-variable -Wno-format -Wno-address -Wno-array-bounds
CC_FLAGS        += -Wno-strict-aliasing
ifeq ($(HANcoder_BOOTLOADER),1)
CC_FLAGS        += -DHANcoder_BOOTLOADER=1
endif
# additional assembler flags
AS_FLAGS        +=
# additional librarian flags
AR_FLAGS        += -cr
# additional linker flags
LINKER_FLAGS     = $(LINKER_LNK) -nostartfiles -Xlinker --gc-sections -Wl,-Map,$(BIN_PATH)/$(MODEL_NAME).dump 
LINKER_FLAGS    += -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -g -lm
# additional object copy flags
OC_FLAGS         = -O srec
OC_FLAGS_BIN     = -O binary
# additional object dump flags
OD_FLAGS         = -D -t -z


#|---------------------------------------------------------------------------------------
#| Additional libraries
#|---------------------------------------------------------------------------------------
# HANcoder target specific libraries
LIBS += $(LIB_PATH)/HANcoder_STM32_E407_RTL.a

# Other libraries (specified from Simulink)




LIBS += $(EXT_LIB) $(S_FUNCTIONS_LIB)


#|---------------------------------------------------------------------------------------
#| Source files
#|---------------------------------------------------------------------------------------
HANcoder_LIB_SRCS = \
  anin.c anout.c app.c croutine.c errorHandling.c eeprom.c eeprom_sim.c  \
  filelogger.c ftp_server.c heap_4.c list.c os.c queue.c rtc.c tasks.c \
  timers.c xcpBasic.c xcp_par.c can.c canio.c mac.c cstart.c errorcodes.c misc.c port.c \
  stm32f4xx_adc.c stm32f4xx_can.c stm32f4xx_crc.c stm32f4xx_cryp.c stm32f4xx_cryp_aes.c \
  stm32f4xx_cryp_des.c stm32f4xx_cryp_tdes.c stm32f4xx_dac.c stm32f4xx_dbgmcu.c \
  stm32f4xx_dcmi.c stm32f4xx_dma.c stm32f4xx_exti.c stm32f4xx_flash.c stm32f4xx_fsmc.c \
  stm32f4xx_gpio.c stm32f4xx_hash.c stm32f4xx_hash_md5.c stm32f4xx_hash_sha1.c \
  stm32f4xx_i2c.c stm32f4xx_iwdg.c stm32f4xx_pwr.c stm32f4xx_rcc.c stm32f4xx_rng.c \
  stm32f4xx_rtc.c stm32f4xx_sdio.c stm32f4xx_spi.c stm32f4xx_syscfg.c stm32f4xx_tim.c \
  stm32f4xx_usart.c stm32f4xx_wwdg.c system_stm32f4xx.c quadencoder.c vectors.c \
  stm32f4x7_eth.c api_lib.c api_msg.c err.c netbuf.c netdb.c netifapi.c sockets.c tcpip.c \
  def.c dhcp.c dns.c init.c mem.c memp.c netif.c pbuf.c raw.c stats.c sys.c tcp.c tcp_in.c \
  tcp_out.c timers_lwip.c udp.c autoip.c icmp.c igmp.c inet.c inet_chksum.c ip.c ip_addr.c \
  ip_frag.c asn1_dec.c asn1_enc.c mib2.c mib_structs.c msg_in.c msg_out.c etharp.c \
  ethernetif.c stm32f4x7_eth_bsp.c sys_arch.c enet.c reset.c pwmout.c digin.c digout.c \
  ff.c unicode.c timein.c uart.c spi_master.c  mmc.c ftoa.c usbd_cdc_core.c \
  usbd_core.c usbd_ioreq.c usbd_req.c usb_core.c usb_dcd.c usb_dcd_int.c usbcom.c \
  usbd_cdc_vcp.c usbd_desc.c usbd_usr.c usb_bsp.c timeout.c tp.c diag.c CANopen.c \
  CO_Emergency.c CO_HBconsumer.c CO_NMT_Heartbeat.c CO_OD.c CO_PDO.c CO_SDO.c \
  CO_SDOmaster.c CO_SYNC.c CO_driver.c CO_eeprom.c co_node.c crc16-ccitt.c udp_client.c \
  udp_server.c stackOverflowHook.c 
 
ADD_SRCS = model.c

SRCS  = $(MODULES) $(ADD_SRCS) $(S_FUNCTIONS)
SRC_DEP =
PRODUCT = $(BIN_PATH)/$(MODEL_NAME).srec
BUILD_PRODUCT_TYPE = Motorola S-record file
SRCS += $(MODEL).$(TARGET_LANG_EXT) $(EXT_SRC)
ifeq ($(GEN_SAMPLE_MAIN),1)
  SRCS += ert_main.c
endif

USER_SRCS =

USER_OBJS = $(subst \,/, $(USER_SRCS:.c=.obj))
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS_OBJS = $(addsuffix .obj, $(basename $(SRCS)))
OBJS      = $(SRCS_OBJS) $(USER_OBJS)
LINK_OBJS = $(SRCS_OBJS) $(LOCAL_USER_OBJS)

# only build the library if it is not already there
ifeq ($(wildcard $(LIB_PATH)/HANcoder_STM32_E407_RTL.a), )
HANcoder_LIB_SRCS_OBJS = $(addsuffix .obj, $(basename $(HANcoder_LIB_SRCS)))
else
HANcoder_LIB_SRCS_OBJS =
endif


SHARED_OBJS := $(addsuffix .obj, $(basename $(wildcard $(SHARED_SRC))))
FMT_SHARED_OBJS = $(subst /,\,$(SHARED_OBJS))


#|---------------------------------------------------------------------------------------
#| Build rules
#|---------------------------------------------------------------------------------------
$(PRODUCT): $(BIN_PATH)/$(MODEL_NAME).elf
	@$(OD) $(OD_FLAGS) $< > $(BIN_PATH)/$(MODEL_NAME).map
	@echo ### Created Map file: $(MODEL_NAME).map
	@$(OC) $(OC_FLAGS_BIN) $< $(BIN_PATH)/$(MODEL_NAME).bin
	@echo ### Created Binary file: $(MODEL_NAME).bin
	@$(OC) $(OC_FLAGS) $< $@
	@echo ### Created $(BUILD_PRODUCT_TYPE): $(notdir $@)
	@echo ### Displaying program size info
	@$(SZ) --format=berkeley $<

$(LIB_PATH)/HANcoder_STM32_E407_RTL.a: $(HANcoder_LIB_SRCS_OBJS)
	@$(AR) $(AR_FLAGS) $@ $^
	@echo ### Created $(notdir $@) run-time library
  
$(BIN_PATH)/$(MODEL_NAME).elf:  $(OBJS) $(LIBS) $(SHARED_LIB) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	@echo ### Linking $(notdir $@)
	@$(LD) -Wl,--start-group $(LINK_OBJS) $(MODELREF_LINK_LIBS) $(SHARED_LIB) $(LIBS) -Wl,--end-group \
        -o $@ $(LINKER_FLAGS)

%.obj : %.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(LIB_PATH)/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/../%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/STM32_E407/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/third_party/canopennode/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/third_party/fatfs/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

%.obj : $(SRC_PATH)/third_party/fatfs/option/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/third_party/lwip/src/api/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/third_party/lwip/src/core/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/third_party/lwip/src/core/ipv4/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/third_party/lwip/src/core/snmp/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/third_party/lwip/src/netif/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(SRC_PATH)/STM32_E407/lwip/OS/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
  
%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

ifeq ($(GEN_SAMPLE_MAIN),0)
%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
endif


%.obj : $(MATLAB_ROOT)\rtw\c\src\%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
%.obj : $(MATLAB_ROOT)\simulink\src\%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)



#|---------------------------------------------------------------------------------------
#| Dependencies
#|---------------------------------------------------------------------------------------
$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_OBJS) : $(SHARED_BIN_DIR)/%.obj : $(SHARED_SRC_DIR)/%.c
	@echo ### Compiling $(notdir $<) -o $(notdir $@)
	@$(CC) -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)

$(SHARED_LIB) : $(SHARED_OBJS)
	@echo ### Creating $(notdir $@)
	@if exist $@ del $@
	$(LIBCMD) /out:$@ $(FMT_SHARED_OBJS)
	@echo ### $(notdir $@) Created


#|---------------------------------------------------------------------------------------
#| Project cleanup
#|---------------------------------------------------------------------------------------
cleans :
	@echo ### Cleaning the objects and $(notdir $(PRODUCT))



#|----------------------------- end of STM32_E407_gcc.tmf -------------------------------
