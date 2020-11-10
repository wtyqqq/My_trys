#include <stdio.h>
#define PRAISE "what a super marelous name!"
#pragma warning(disable:4996)
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello.%s. %s\n", name, PRAISE);

	
	return 0;
}