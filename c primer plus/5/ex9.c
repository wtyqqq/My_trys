#include<stdio.h>
const double ktc = 273.16;
const double ctk1 = 5.0;
const double ctk2 = 9.0;
const double ctk3 = 32.0;
int temperatures(double n);
int main()
{
	int ret;
	double ftem;
	printf("Enter a F temperature:");
	ret = scanf_s("%lf",&ftem);
	while (ret == 1)
	{
		temperatures(ftem);
		printf("Enter the next temperature:");
		ret = scanf_s("%lf",&ftem);
	}
	return 0;
}
int temperatures(double n)
{
		double ktem, ctem;
		ctem = ctk1 / ctk2 * (n - ctk3);
		ktem = ctem + ktc;
		printf("The ctem is %.2lf, the ktem is %.2lf, the ftem is %.2f.\n",
				ctem,ktem,n);
}