/* *************************************************************************
* File Name   :	main.h
* Description : Telecommunication Cable Color Test
* Functions	  :
* ************************************************************************* */
#ifndef BMS_RANGECHECK_H
#define BMS_RANGECHECK_H

/* ******************************* Defines ******************************* */
#define MIN_TEMP 		0
#define MAX_TEMP		45
#define MIN_SOC  		20
#define MAX_SOC  		80
#define MAX_CHARGERATE 	0.8
#define TEMP_UNIT       0
#define TEMP_DEGREE     0
#define TEMP_FAHRENHEIT 1  
#define LANGUAGE_SELECTION 0
#define LANGUAGE_ENGLISH   0
#define LANGUAGE_GERMAN    1

/* ***************************** Prototypes ***************************** */
int batteryIsOk(float temperature, float soc, float chargeRate);
int rangeCheckTemp(float temperature);
int rangeCheckSoC(float soc);
int RangeCheckChargeRate(float chargeRate);

#endif
