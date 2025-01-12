#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber;
    scanf("%d", &Nnumber);
    int count1[Nnumber];
    int count2[Nnumber];
    int sum[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d %d", &count1[i],&count2[i]); 
        sum[i] = count1[i] + count2[i]; 
        printf("%d\n", sum[i]*sum[i]);
    }
    return 0;
}
