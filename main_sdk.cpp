/*
 * adderTest.cpp
 *
 *  Created on: 4 Mar 2022
 *      Author: Nour Mustafa
 */
#include "xadder.h"
#include <stdio.h>
#include <unistd.h>
int main()
{

	XAdder xa;
	XAdder_Initialize(&xa,0);
	XAdder_Start(&xa);

	XAdder_Set_b(&xa,5);
	XAdder_Set_a(&xa,3);
	while(!XAdder_IsReady(&xa));
	int returnSum = XAdder_Get_return(&xa);
	//printf("SUM IS %d",returnSum);
	return 0;
}

