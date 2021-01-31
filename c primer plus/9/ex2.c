#include<stdio.h>

void chline(char ch, int i, int j);

int main(void) {
    char ch;
    int i, j;
    printf("Char:\n");
    scanf("%c", &ch);
    printf("i:\n");
    scanf("%d", &i);
    printf("j:\n");
    scanf("%d", &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j) {
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            printf("%c", ch);
        }
        printf("\n");
    }
}