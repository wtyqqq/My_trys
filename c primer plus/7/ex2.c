#include<stdio.h>

int main(void) {
    char ch;
    char arr[50];
    int j = 0;
    int i = 0;
    printf("Enter some letters:\n");
    while ((ch = getchar()) != '#') {
        if (i == 8 || (i - 8) % 9 == 0) {
            arr[i] = '\n';
            i++;
            arr[i] = ch;
        } else
            arr[i] = ch;
        i++;
    }
    while (j < i) {
        if (j == 8 || (j - 8) % 9 == 0)
            printf("%c", arr[j]);
        else
            printf("%c-%d ", arr[j], arr[j]);
        j++;
    }

    return 0;
}