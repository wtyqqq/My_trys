#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0;
	int status;

	printf("Please enter an integer to be summmed ");
	printf("(q to quit):");
	status = scanf_s("%ld", &num);
	while (status = 1)//这个程序是错的
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf_s("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}