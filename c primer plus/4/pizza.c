#include<stdio.h>
#pragma warning(disable:4996)
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	printf("What is radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("cricumference = %1.2f, area = %1.2f\n", circum, area);
	return 0;
}