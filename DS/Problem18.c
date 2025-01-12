#include <stdio.h>

int input, days, hours, minutes, seconds;

int main() {
    scanf("%d", &input);
    days = input / (60 * 60 * 24);
    hours = (input % (60 * 60 * 24)) / (60 * 60);
    minutes = (input % (60 * 60)) / 60;
    seconds = input % 60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,minutes,seconds);
    return 0;
}
