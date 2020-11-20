#include<stdio.h>
int main(void)
{
	const int A = 65;
	char ch;
	char tmp;
	printf("Please enter a letter:");
	scanf_s("%c",&ch);
	int i = (int)ch - A + 1;
	int sp;
	for (int n = 0; n < i; n++)
	{
		sp = i - 1 - n;
		while (sp-- > 0)
		{
			printf(" ");
		}
		tmp = 'A';
		for (int count1 = 0; count1 < n + 1; count1++)
		{
			printf("%c", tmp);
			tmp++;
		}
		tmp--;
		for (int count2 = 0; count2 < n; count2++)
		{
			tmp--;
			printf("%c", tmp);
			
		}
		printf("\n");
	}
	
	return 0;
}