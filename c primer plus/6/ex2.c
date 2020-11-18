#include<stdio.h>
double power(double n, int p);
int main(void)
{
	int n = 0;
	int i = 0;
	while (i++ < 5)
	{
		for (n = 0; n < i; n++)
		{
			printf("&");
		}
		printf("\n");
	}
	return 0;
}