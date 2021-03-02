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

/* ***************************** Prototypes ***************************** */
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif