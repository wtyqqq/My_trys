#include <stdio.h>
int show(x1,x2);
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
		show(n1, n2);
		printf("Please enter the first number(enter a letter to quit):\n");
		ju = scanf_s("%f", &n1);
	}
	return 0;
}
int show(x1,x2) 
{
	printf("%f",(float)(x1 * x2));
	printf("%f",(float)(x1 - x2));
}