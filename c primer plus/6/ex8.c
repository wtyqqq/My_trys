#include <stdio.h>
int main(void)
{
	float n1, n2, mu, sub;
	int ju;
	printf("Please enter the first number:\n");
	ju = scanf_s("%f", &n1);
	
	while (ju >= 1)
	{
		printf("Please enter the second number:\n");
	scanf_s("%f", &n2);
		sub = n1 - n2;
		mu = n1 * n2;
		printf("the mutiply is %f.\n", mu);
		printf("the sub is %f.\n", sub);
		printf("Please enter the first number(enter a letter to quit):\n");
		ju = scanf_s("%f", &n1);
	}
	return 0;
}
