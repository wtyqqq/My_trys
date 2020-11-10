#include<stdio.h>
#pragma warning(disable:4996)
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("some number limit for this sysytem:\n");
	printf("Biggest int: %d \n",INT_MAX);
	printf("Smallest undesigned long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n",CHAR_BIT);
	printf("Largest double: %e\n",DBL_MAX);
	printf("Smallest undesigned float: %e\n",FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("epsilon = %e \n",FLT_EPSILON);

	return 0;
}