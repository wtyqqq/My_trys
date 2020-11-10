#include <stdio.h>
#define PAGE 336
#define WORDS 65618
int main(void)
{
	int num = PAGE;
	int mnum = -PAGE;
	printf("num as short and undisgned short: %hd %hu\n",num,num);
	printf("-num as short and undisgned short: %hd %hu\n",mnum,mnum);
	printf("num as int and char:%d %c",num,num);
	printf("WORDS as int,short,and char :%d %hd %c\n",WORDS,WORDS,WORDS);
	return 0;
}