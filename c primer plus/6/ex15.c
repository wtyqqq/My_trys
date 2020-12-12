#include<stdio.h>
#include <string.h>

int main() {
    int length;
    char string[256];
    scanf("%s", &string);
    printf("%s\n", string);
    length = strlen(string) - 1;
    char antistr[256];
    for (int i = 0; i <= length; ++i) {
        antistr[i] = string[length - i];
    }
    printf("%s\n", string);
    printf("%s", antistr);
    return 0;
}