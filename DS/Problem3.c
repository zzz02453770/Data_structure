#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber;
    scanf("%d", &Nnumber);
    double square[Nnumber];
    double area[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
        scanf("%lf", &square[i]); 
        area[i] = square[i] * square[i]; 
        area[i] = round(area[i] * 10) / 10;
    }
    for (int i = 0; i < Nnumber; i++) {
        printf("%.1f\n", area[i]);
    }
    return 0;
}
