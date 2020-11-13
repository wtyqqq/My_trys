#include <stdio.h>
int main(void)
{
	int count;
	float sum = 0.0;
	float earn;
	count = 0;
	while (count++ < 20)
	{
		printf("enter %d day you earned:\n", count);
		scanf_s("%f", &earn);
		sum += earn;
		printf("sum = %f\n", sum);
	}
		return 0;
	}