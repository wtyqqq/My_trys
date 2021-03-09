#include <stdio.h>

void copy_arr(double arr1[], double arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        arr1[i] = arr2[i];
    }
}

void copy_ptr(double *ptr1, double *ptr2, int size) {
    for (int i = 0; i < size; ++i) {
        *(ptr1 + i) = *(ptr2 + i);
    }
}

void copy_ptrs(double * ar3, double * ar, double * end)
{
    int i;
    for (i = 0; ar < end; i++)
        *(ar3++) = *(ar++);
}
int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptrs(target3,source,source+5);
    copy_ptr(target2, source, 5);
    for (int i = 0; i < 5; ++i) {
        printf("%d times,%lf %lf %lf\n", i,target1[i],target2[i],target3[i]);
    }
    return 0;
}
