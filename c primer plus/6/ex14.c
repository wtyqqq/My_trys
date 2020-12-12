#include<stdio.h>

int main() {
    double arr1[8];
    double arr2[8];
    double sum;
    for (int i = 0; i < 8; ++i) {
        printf("Please enter %d number:\n", i + 1);
        scanf("%lf", &arr1[i]);
    }
    arr2[0] = arr1[0];
    for (int j = 1; j < 8; ++j) {
        arr2[j] = arr2[j - 1];
        arr2[j] += arr1[j];
    }
    printf("\n");
    for (int n1 = 0; n1 < 8; ++n1) {
        printf("%f ", arr1[n1]);
    }
    printf("\n");
    for (int n2 = 0; n2 < 8; ++n2) {
        printf("%f ", arr2[n2]);
    }
    return 0;
}