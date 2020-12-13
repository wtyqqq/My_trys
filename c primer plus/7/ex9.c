#include<stdio.h>

int main(void) {
    int input;
    int i, j;
    printf("please entre a number:\n");
    scanf("%d", &input);
    for (i = 2; i <= input; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0 && j != i)
                break;
            else if (i % j == 0 && j == i) {
                printf("%d ", i);
                break;
            } else
                continue;
        }
    }
    return 0;
}