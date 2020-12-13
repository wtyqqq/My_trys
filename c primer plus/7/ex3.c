#include<stdio.h>

int main(void) {
    int input, on, sn;
    on = sn = 0;
    float s_sum, s_ave, o_sum, o_ave;
    printf("Please enter some numbers:\n");
    scanf("%d", &input);
    while (input != 0) {
        if ((input % 2)) {
            sn++;
            s_sum += input;
        } else {
            on++;
            o_sum += input;
        }
        scanf("%d", &input);
    }
    s_ave = s_sum / sn;
    o_ave = o_sum / sn;
    printf("the on is %d.\n", on);
    printf("the sn is %d.\n", sn);
    printf("And the ave of the sn is %f.\n", s_ave);
    printf("And the ave of the on is %f", o_ave);
    return 0;
}