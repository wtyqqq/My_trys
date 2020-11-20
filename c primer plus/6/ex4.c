#include<stdio.h>
int main(void)
{
	char ch = 'A';
	int i = 0;
	int n;
	while (i++<6)
	{
		n = 0;
		while (n++<i) 
		{
			printf("%c",ch);
			ch += 1;
		}
		printf("\n");
	}
	return 0;
}