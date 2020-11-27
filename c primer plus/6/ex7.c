#include<stdio.h>
#include<string.h>
int main(void)
{
	char letters[100];
	int i;

	printf("Please enter a word:\n");
	while (scanf_s("%s",&letters ) == 1)
	{
		for (; i >= 0; i--) 
		{
			printf("%c", letters[i]);
		}
		printf("\n");
	}

	return 0;
}
