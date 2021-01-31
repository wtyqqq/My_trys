#include<stdio.h>

double fun(double i, double j);

int main(void) {
    double b, a, result;
    printf("Please enter the value of a:\n");
    scanf("%lf", &a);
    printf("Please enter the value of b:\n");
    scanf("%lf", &b);
    result = fun(a, b);
    printf("The result is %lf", result);
    return 0;
}

double fun(double i, double j) {
    double result;
    result = 1 / ((1 / i) + (1 / j));
    return result;
}