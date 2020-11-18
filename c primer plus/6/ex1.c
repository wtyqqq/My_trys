#include<stdio.h>
double power(double n, int p);
int main(void)
{
	char ch;
	ch = 'a';
	int i;
	for (i = 0;i < 26; i++)
	{
		printf("%c",ch);
		ch++;
	}
	return 0;
}