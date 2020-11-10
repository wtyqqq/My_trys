#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define PRAISE "what a super marvelous name!"
int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s. %s\n",name,PRAISE);
	printf("Your name of %d letters occpies %d memory cells.\n",
			strlen(name),sizeof name);
	printf("The phrase of letters",
		strlen(PRAISE));
	printf("and occupies %d memory cells.\n",sizeof PRAISE);
	return 0;
}