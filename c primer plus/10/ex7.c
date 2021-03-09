#include <stdio.h>

void copy_ptr(double *ptr1, double *ptr2, int size) {
    for (int i = 0; i < size; ++i) {
        *(ptr1 + i) = *(ptr2 + i);
    }
}

int main(void) {
    double arr[2][2] = {
            {11, 12},
            {21, 22}
    };
    double arr2[2][2];
    copy_ptr(arr2[0], arr[0], 2);
    copy_ptr(arr2[1], arr[1], 2);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%lf ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
