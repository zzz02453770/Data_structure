#include <stdio.h>

int S_hour, S_min, D_hour, D_min, time, moeny;

int main() {
    scanf("%d %d %d %d", &S_hour, &S_min, &D_hour, &D_min);
    time = (D_hour - S_hour) * 60 + (D_min - S_min);
    if (time <= 120) {
        moeny = (time / 30) * 30;
    } else if (time > 120 && time <= 240) {
        time -= 120;
        moeny = 120 + (time / 30) * 40;
    } else if (time > 240) {
        time -= 240;
        moeny = 120 + 160 + (time / 30) * 60;
    }
    printf("%d\n", moeny);
    return 0;
}
