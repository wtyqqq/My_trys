#include<stdio.h>

void sort(double *a, double *b, double *c);

int main(void) {
    double a, b, c;

    printf("Please enter the value of a:\n");
    scanf("%lf", &a);
    printf("Please enter the value of b:\n");
    scanf("%lf", &b);
    printf("Please enter the value of c:\n");
    scanf("%lf", &c);
    printf("Now a and b are %lf %lf and %lf.\n", a, b, c);
    sort(&a, &b, &c);
    printf("Now a and b are %lf %lf and %lf.\n", a, b, c);
    return 0;
}

void sort(double *a, double *b, double *c) {
    double temp;
    if (*a > *b && *b > *c) {//3 2 1
        temp = *a;
        *a = *c;
        *c = temp;
    } else if (*a > *b && *b < *c && *a < *c) {//2 1 3
        temp = *a;
        *a = *b;
        *b = temp;
    } else if (*a < *b && *b > *c && *a > *c) {// 2 3 1
        temp = *c;
        *c = *a;
        *a = temp;//1 3 2
        temp = *b;
        *b = *c;
        *c = temp;//1 2 3
    } else if (*a < *b && *b > *c && *a < *c) {// 1 3 2
        temp = *c;
        *c = *b;
        *b = temp;//1 2 3
    } else if (*a > *b && *b < *c && *a > *c) {//3 1 2
        temp = *c;
        *c = *b;
        *b = temp;//3 2 1
        temp = *a;
        *a = *c;
        *c = temp;//1 2 3
    }

}