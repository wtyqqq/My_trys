#include <stdio.h>

double max(double *ptr, int size) {
    double output = 0;
    for (int i = 0; i < size - 1; ++i)

        if (output < *(ptr + i))
            output = *(ptr + i);

    return output;
}


int main(void) {
    double arr[10] = {1.4, 4, 1, 5, 6, 1321, 5423, 754, 9, 10};
    double out=max(arr,10);
    printf("%lf",out);
    return 0;
}
