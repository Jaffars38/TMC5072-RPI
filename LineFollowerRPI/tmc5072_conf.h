#ifndef TMC5072_CONF_H
#define TMC5072_CONF_H

//MOTOR1 registers
#define TMC5072_CONFIG_A_1				5000
#define TMC5072_CONFIG_MAX_A_1		200
#define TMC5072_CONFIG_V_1				30000
#define TMC5072_CONFIG_MAX_V_1		300000
#define TMC5072_CONFIG_D_1				1400
#define TMC5072_CONFIG_MAX_D_1		700
#define TMC5072_CONFIG_VSTOP_1		10

#define TMC5072_CONFIG_CHOPCONF_1   0x000100C5
#define TMC5072_CONFIG_IHOLD_IRUN_1 0x00011F15
#define TMC5072_CONFIG_PWMCONF_1    0x000501C8
#define TMC5072_CONFIG_VHIGH_1      0x00061A80
#define TMC5072_CONFIG_VCOOLTHRS_1     200000
#define TMC5072_CONFIG_TZEROWAIT_1  0x0000000F

//MOTOR2 registers
#define TMC5072_CONFIG_A_2				5000
#define TMC5072_CONFIG_MAX_A_2		500
#define TMC5072_CONFIG_V_2				50000
#define TMC5072_CONFIG_MAX_V_2		200000
#define TMC5072_CONFIG_D_2				1400
#define TMC5072_CONFIG_MAX_D_2		700
#define TMC5072_CONFIG_VSTOP_2		10
#define TMC5072_CONFIG_CHOPCONF_2 0x000100C5

#define TMC5072_CONFIG_CHOPCONF_2   0x000100C5
#define TMC5072_CONFIG_IHOLD_IRUN_2 0x00011F15
#define TMC5072_CONFIG_PWMCONF_2    0x000501C8
#define TMC5072_CONFIG_VHIGH_2      0x00061A80
#define TMC5072_CONFIG_VCOOLTHRS_2     200000
#define TMC5072_CONFIG_TZEROWAIT_2  0x0000000F

//General registers
#define TMC5072_CONFIG_GCONF      0x08

#endif

