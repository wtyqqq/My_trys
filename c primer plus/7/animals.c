#include<stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#') {
        if (ch == '/n')
            continue;
        if (islower(ch))
            switch (ch) {
                case 'a':
                    printf("argali, awild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa\n");
                    break;
                case 'c':
                    printf("coati\n");
                    break;
                case 'd':
                    printf("desman\n");
                    break;
                case 'e':
                    printf("echidna\n");
                    break;
                case 'f':
                    printf("fisher\n");
                    break;
                default:
                    printf("That's a stumper!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");

        while ((getchar() != '\n'))
            continue;
        printf("Please type another letter or a # to quit.\n");
    }
    printf("Bye!\n");

    return 0;
}