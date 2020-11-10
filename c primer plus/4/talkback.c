#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#pragma warning(disable:4996)
int main()
{
	float weight,volume;
	int size, letters;
	char name[40];
	printf("please enter your name.\n");
	scanf("%s",name);
	printf("please enter your weight in pounds.\n");
	scanf("%f",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",
		name, volume);
	printf("Also,you first name has %d letters.\n",
			strlen(name));
	printf("and we have %d bytes to store it in .\n",size);


	return 0;
}