#include<stdio.h>

void fun(char ch, int i, int j);

int main(void) {
    char ch;
    int i, j;
    printf("Char:\n");
    scanf("%c", &ch);
    printf("i:\n");
    scanf("%d", &i);
    printf("j:\n");
    scanf("%d", &j);
    fun(ch, i, j);
    return 0;
}

void fun(char ch, int i, int j) {
    for (int k = 0; k < j; ++k) {
        for (int l = 0; l < i; ++l) {
            printf("%c", ch);
        }
        printf("\n");
    }
}