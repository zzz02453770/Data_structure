#include <stdio.h>
#include <math.h>

int count1[2], count2[2];

int main() {
    scanf("%d %d %d %d", &count1[0], &count1[1], &count2[0], &count2[1]);
    printf("%.2f\n",sqrt(pow((count2[0] - count1[0]), 2) + pow((count2[1] - count1[1]), 2)));
    return 0;
}
