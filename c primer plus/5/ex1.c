#include <stdio.h>
const int EX = 60;
int main(void)
{
	int min, oph, opm;
	printf("enter the minutes.\n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		oph = min / EX;
		opm = min % EX;
		printf("%d hours, %d minutes",oph,opm);
		printf("enter the minutes.\n");
		scanf_s("%d",&min);
	}
	return 0;
}