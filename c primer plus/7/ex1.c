#include<stdio.h>

int main(void) {
    char ch;
    int s_count, l_count, ch_count;
    l_count = ch_count = s_count = 0;
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case ' ':
                s_count++;
                break;
            case '\n':
                l_count++;
                break;
            default:
                ch_count++;
                break;
        }
    }
    printf("l s ch\n");
    printf("%d %d %d", l_count, s_count, ch_count);
    return 0;
}