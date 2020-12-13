#include<stdio.h>

int main(void) {
    char ch;
    char arr[10000];
    int i = 0;
    int count = 0;
    printf("Please enter some words:\n");
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                arr[i] = '!';
                i++;
                count++;
                break;
            case '!':
                arr[i] = '!';
                i++;
                arr[i] = '!';
                i++;
                count++;
                break;
            default:
                arr[i] = ch;
                i++;
                break;
        }
    }
    printf("There are %d times exchange\n", count);
    for (int j = 0; j < i; ++j) {
        printf("%c", arr[j]);
    }
    printf("\n");
    return 0;
}