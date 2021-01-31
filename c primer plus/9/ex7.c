#include<stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Please enter some text:\n");
    while ((ch = getchar()) != '&') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            printf("%d", ch - 96);
        } else if (ch == '\n')
            continue;
        else
            printf("-1");
    }
    return 0;
}
