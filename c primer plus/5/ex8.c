#include<stdio.h>
int main(void)
{
	int input1,input2,mo;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf_s("%d",&input1);
	printf("\nNow enter the first operand:");
	scanf_s("%d",&input2);
	while (input2 > 0)
	{
		mo = input2 % input1;
		printf("%d %% %d is %d\n", input2, input1, mo);
		printf("Enter next number for first operand(<=0 to quit)");
		scanf_s("%d",&input2);
	}
	printf("Done.");
	return 0;
}