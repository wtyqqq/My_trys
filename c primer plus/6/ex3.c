#include<stdio.h>
int main(void)
{
	char ch = 'F';
	for (int i = 0; i < 6; i++) 
	{
		int n = -1;
		ch = 'F';
		while (n++ < i)
		{
			printf("%c",ch);
			ch -= 1;
		}
		printf("\n");
	}
	return 0;
}