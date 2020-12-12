#include<stdio.h>

int main() {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        int ele = 1;
        for (int j = 0; j < i + 1; ++j) {
            ele *= 2;
        }
        arr[i] = ele;
    }
    int pt = 0;
    do {
        printf("%d\n", arr[pt]);
    } while (++pt < 8);
    return 0;
}