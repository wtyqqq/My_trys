#include<stdio.h>

#define FIRST 300
#define SECOND 450
#define FUN 1000
#define F_HOUR 40

int main(void) {
    double sum;
    double hours;
    double sum_a_s;
    scanf("%lf", &hours);
    if (hours < 40) {
        printf("your hours are too low!\n");
    } else {
        sum = FUN * 40 + (hours - F_HOUR) * 1.5 * 1000;
        sum_a_s = sum - (FIRST * 0.15 + 150 * 0.2 + (sum - SECOND) * 0.25);
        printf("The income is %f", sum_a_s);
    }
    return 0;
}