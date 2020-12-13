#include<stdio.h>

int main(void) {
    char ch;
    char arr[100];
    int i = 0;
    int count = 0;
    printf("Please  enter your words:\n");
    while ((ch = getchar()) != '#') {
        arr[i] = ch;
        if (arr[i] == 'i' && arr[i - 1] == 'e') {
            count++;
        }
        i++;
    }
    printf("There are %d 'ei'.", count);
    return 0;
}
