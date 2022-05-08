#include "gravity_test.h"
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Testing gravity for masses 10,20\n");
	float errorAcc=0;
	for(int i=0;i<10;i++)
	{
		float force = gravity(10,20,i);
		float error = abs(force-ref[i]);
		errorAcc += error;
		if(errorAcc > 1)
		{
			printf("Error is too big\n");
			return 1;
		}
	}
	printf("NO ERRORS OCCURED. AVG ERROR: %f\n",errorAcc/10.0f);
	return 0;
}
