#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_enterde;

	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number");
	scanf_s("%d",&code_enterde);
	while (code_enterde != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please tnter the secret code number");
		scanf_s("%d",&code_enterde);
	}
	printf("Congratulations! you are cured!\n");
	return 0;
}