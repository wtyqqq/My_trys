#include<stdio.h>

double min(double x, double y);

int main(void) {
    double x, y, result;
    printf("Please enter the value of x:\n");
    scanf("%lf", &x);
    printf("Please enter the value of y:\n");
    scanf("%lf", &y);
    printf("Now they are %lf %lf\n", x, y);
    result = min(x, y);
    printf("Result: %lf\n", result);
    return 0;
}

double min(double x, double y) {
    if (x < y)
        x = y;
    return x;
}