#include<stdio.h>

int main() {
    int arr[8];
    int tmp;
    for (int i = 0; i < 8; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 8; ++j) {
        tmp = 7 - j;
        printf("%d\n", arr[tmp]);
    }
    return 0;
}