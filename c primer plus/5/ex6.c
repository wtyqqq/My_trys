#include <stdio.h>
int main(void)
{
	int count, sum, square;
	
	count = 0;
	sum = 0;
	while (count++ < 20)
	{
		square = count * count;
		sum += square;
	}
		printf("sum = %d\n", sum);
	return 0;
}