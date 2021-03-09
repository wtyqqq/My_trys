#include <stdio.h>

double max(double *ptr, int size) {
    double max = 0;
    int maxindex = 0;
    double min = 0;
    int minindex =0;
    for (int i = 0; i < size - 1; ++i) {
        if (max < *(ptr + i)) {
            max = *(ptr + i);
            maxindex = i;
        }
        if (min > *(ptr + i)) {
            min = *(ptr + i);
            minindex=i;
        }
    }
    return max - min;
}


int main(void) {
    double arr[10] = {1.4, 4, 1, 5, 6, 1321, 5423, 754, 9, 10};
    double out = max(arr, 10);
    printf("%lf", out);
    return 0;
}

