#include<stdio.h>
const double ktc,ctk1,ctk2,ctk3;
ktc = 273.16;
ctk1 = 5;
ctk2 = 9;
ctk3 = 32;
void Temperatures(double n);
int main(void)
{
	int ret;
	double ftem;
	printf("Enter a F temperature:");
	ret = scanf_s("%lf",&ftem);
	while (ret = 1)
	{
		Temperatures(ftem);
		printf("Enter the next temperature:");
		ret = scanf_s("%lf",&ftem);
	}
	return 0;
}
void Tmperatures(double n)
{
	double ktem, ctem;
		ctem = ctk1 / (ctk2 * (n - ctk3));
		ktem = ctem + ktc;
		printf("The ctem is %.2lf, the ktem is %.2lf, the ftem is %.2f.\n",
				ctem,ktem,n);
}