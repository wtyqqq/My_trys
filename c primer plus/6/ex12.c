#include<stdio.h>

int main() {
    int times;
    printf("Enter the number:\n");
    scanf("%d", &times);
    double sum = 0;
    double ch;
    for (double i = 1; i < times + 1; ++i) {
        if ((int) i % 2)
            ch = 1;
        else
            ch = -1;
        sum += ((1 / i) * ch);
        printf("%f\n", i);
        printf("sum is %lf\n", sum);
    }
    printf("%f", sum);
    return 0;
}