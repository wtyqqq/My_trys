#include<stdio.h>

void larger_of(double *i, double *j);

int main(void) {
    double a, b;

    printf("Please enter the value of a:\n");
    scanf("%lf", &a);
    printf("Please enter the value of b:\n");
    scanf("%lf", &b);
    printf("Now a and b are %lf and %lf.\n", a, b);
    larger_of(&a, &b);
    printf("Now a and b are %lf and %lf.\n", a, b);
    return 0;
}

void larger_of(double *i, double *j) {
    if (*i < *j)
        *i = *j;
    else
        *j = *i;
}