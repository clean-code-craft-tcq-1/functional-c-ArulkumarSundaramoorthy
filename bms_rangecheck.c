/* *************************************************************************
* File Name   :	bms_rangecheck.c
* Description : Battery Management System(BMS)
* Functions	  :
* ************************************************************************* */

/* ***************************** Header Files ***************************** */
#include "stdio.h"
#include "assert.h"
#include "bms_rangecheck.h"

/* *************************************************************************
* Function Name : rangeCheckTemp
* Description   : To check the temperature range
* Arguments	    : Temperature value
* Returns		: (0,1) Within range or not
* ************************************************************************* */
int rangeCheckTemp(float temperature) {
	
	if(TEMP_UNIT == TEMP_FAHRENHEIT)
	{
		temperature = (temperature - 32) * (5/9);
	}
	else
	{
	}
	
    if(temperature < MIN_TEMP)
	{
		printf("\nTemperature is Out of Range(Minimum)");
		return 1;
	}
	else if (temperature > MAX_TEMP)
	{
		printf("\nTemperature is Out of Range(Maximum)");
		return 1;
	}
	else
	{
		printf("\nTempertaure is in valid Range");
		return 0;
	}
}	

/* *************************************************************************
* Function Name : rangeCheckSoC
* Description   : To check the SoC range
* Arguments	    : SoC value
* Returns		: (0,1) Within range or not
* ************************************************************************* */
int rangeCheckSoC(float soc) {
	
    if(soc < MIN_SOC)
	{
		printf("\nSoC is Out of Range(Minimum)");
		return 1;
	}
	else if(soc > MAX_SOC)
	{
		printf("\nSoC is Out of Range(Maximum)");
		return 1;
	}
	else
	{
		printf("\nSoC is in valid range");
		return 0;
	}

}

/* *************************************************************************
* Function Name : RangeCheckChargeRate
* Description   : To check the Charge rate range
* Arguments	    : Charge Rate Range value
* Returns		: (0,1) Within range or not
* ************************************************************************* */
int RangeCheckChargeRate(float chargeRate) {
	
	if(chargeRate > 0.8) 
	{
		printf("\nCharge Rate out of range");
		return 1;
	}
	else 
	{
		printf("\nCharge Rate is in valid range");
		return 0;
	}
}

/* *************************************************************************
* Function Name : batteryIsOk
* Description   : To check the Temperature, SoC & Charge rate range
* Arguments	    : Temperature, SoC, Charge Rate Range value
* Returns		: (0,1) Battery is good or not
* ************************************************************************* */
int batteryIsOk(float temperature, float soc, float chargeRate) {
	
	int retval =0;
	
	/* check Battery temperature */
    retval = rangeCheckTemp(temperature);
	/* check Battery SoC */
    retval += rangeCheckSoC(soc);
	/* check Battery Charge Rate */
    retval += RangeCheckChargeRate(chargeRate);
	
	if(retval == 0)
	{
		printf("\n Battery is Good \n");
	}
	else
	{
		printf("\n Battery is not Good \n");
	}
	
    return !retval;
}
