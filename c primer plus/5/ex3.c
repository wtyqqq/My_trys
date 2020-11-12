#include<stdio.h>
int main(void)
{
	const int WEEKDAYS = 7;
	int days,opdays,opweeks;
	printf("enter your days\n");
	scanf_s("%d",&days);
	while  (days > 0)
	{
		opdays = days % WEEKDAYS ;
		opweeks = days / WEEKDAYS ;
		printf("%d days = %d weeks and %d days\n",days,opweeks,opdays);
		printf("enter your days\n");
		scanf_s("%d", &days);
	}
	return 0;
}