#include<stdio.h>
#include <string.h>

int main() {
    double orig = 100;
    double sol1, sol2;
    int i = 0;
    sol2 = sol1 = orig;
    while (sol1 >= sol2) {
        i++;
        sol1 += 10;
        sol2 *= 1.05;
    }
    printf("In the %d year,>\n", i);
    printf("And deaphe's is %f\n", sol1);
    printf("And the Deirdre's is %f\n", sol2);
    return 0;
}