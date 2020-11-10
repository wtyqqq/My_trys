#include <stdio.h>
#define SQUARES 64
#define CORP 1E15
int main(void)
{
	double current, total;
	int count = 1;
	printf("square grains total  ");
	printf("fraction of \n");
	printf("    added     grain      ");
	printf("US total\n");
	total = current = 1.0;
	printf("%4 %13.2e %12.2e %12.2e\n", count, current ,
		total,total/CORP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n",
			count,current,total,total/CORP);
	}
	printf("That's all.\n");

	return 0;
}