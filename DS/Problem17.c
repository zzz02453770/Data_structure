#include <stdio.h>

int hour, pay;
double moeny;

int main() {
    scanf("%d %d", &hour, &pay);
    if (hour <= 60) {
        moeny = hour*pay;
    } else if (hour > 61 && hour <= 120) {
        hour-=60;
        moeny = 60*pay+hour*pay*1.33;
    } else if (hour > 120) {
        hour-=120;
        moeny =60*pay+60*pay*1.33+ hour*pay*1.66;

    }
    printf("%0.1f\n", moeny);
    return 0;
}
