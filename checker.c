/* *************************************************************************
* File Name   :	checker.c
* Description : Battery Management System(BMS)
* Functions	  :
* ************************************************************************* */

/* ***************************** Header Files ***************************** */
#include "stdio.h"
#include "assert.h"
#include "bms_rangecheck.h"

/* *************************************************************************
* Function Name : main
* Description   : To monitor the Battery
* Arguments	    : -
* Returns		: -
* ************************************************************************* */
int main() {

	/* Battery Range Check */
	assert(batteryIsOk(25, 70, 0.7));
	assert(!batteryIsOk(50, 85, 0.9));	
	assert(!batteryIsOk(50, 70, 0.7));
	assert(!batteryIsOk(25, 85, 0.7));
	//assert(!batteryIsOk(25, 71, 0.1));

    return 0;
}
