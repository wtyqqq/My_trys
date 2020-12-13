#include<stdio.h>

#define FIRST 300
#define SECOND 450
#define F_HOUR 40

int main(void) {
    double sum;
    double hours;
    double sum_a_s;
    double rate;
    int choice;
    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr    2) $9.33/hr\n");
    printf("3) $10.00/hr    4) $11.20/hr\n");
    printf("5) quit\n");
    printf("******************************************************************\n");
    while ((scanf("%d", &choice)) == 1) {
        switch (choice) {
            case 1:
                rate = 8.75;
                printf("You chose $8.75/hr.\n");
                break;
            case 2:
                rate = 9.33;
                printf("You chose $9.33/hr.\n");
                break;
            case 3:
                rate = 10.00;
                printf("You chose $810.00/hr.\n");
                break;
            case 4:
                rate = 11.20;
                printf("You chose $11.20/hr.\n");
                break;
            case 5:
                return 0;
        }
        printf("Please enter your work time:\n");
        scanf("%lf", &hours);
        if (hours < 40) {
            printf("your hours are too low!\n");
        } else {
            sum = rate * 40 + (hours - F_HOUR) * 1.5 * rate;
            sum_a_s = sum - (FIRST * 0.15 + 150 * 0.2 + (sum - SECOND) * 0.25);
            printf("The income is %f.\n", sum_a_s);
            printf("******************************************************************\n");
            printf("Enter the number corresponding to the desired pay rate or action:\n");
            printf("1) $8.75/hr    2) $9.33/hr\n");
            printf("3) $10.00/hr    4) $11.20/hr\n");
            printf("5) quit\n");
            printf("******************************************************************\n");

        }
    }
}