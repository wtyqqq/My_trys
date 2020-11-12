#include<stdio.h>
int main(void)
{
	int i,q_i;
	printf("enter a number\n");
	scanf_s("%d",&i);
	q_i = i + 10;
	printf("It is: \n%d \n", i);
	while (i++ < q_i)
	{
		printf("%d \n", i);
	}
	return 0;
}