#include<stdio.h>
void tri();
int main()
{
	double input;
	printf("please enter your number:\n");
	scanf_s("%lf",&input);
	tri(input);
	return 0;
}
void tri(double n)
{
	double output1;
	output1 = n * n * n;
	printf("the 3 of %lf is %lf",n,output1 );
}