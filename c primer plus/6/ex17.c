#include<stdio.h>
#include <string.h>

int main() {
    double balance = 100;
    int i = 0;
    while (balance >= 0) {
        i++;
        printf("%d years\n", i);
        balance -= 10;
        balance *= 1.08;
        printf("%f\n", balance);
    }
    printf("%d", balance);
    return 0;
}