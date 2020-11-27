#include <stdio.h>
int main(void)
{
	int top, min, i;
	int sum = 0;
	printf("Please enter the top:\n");
	scanf_s("%d", &top);
	printf("Please enter the min:\n");
	scanf_s("%d", &min);
	i = min;
	do {
		sum += i * i;
	} 
	while (i++ < top);
	printf("%d", sum);
	return 0;
}