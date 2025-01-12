#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber;
    scanf("%d", &Nnumber);
    int count1[Nnumber];
    // int count2[Nnumber];
    int sum[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d", &count1[i]); 
        printf("%d %d %d\n",count1[i],count1[i]*count1[i],count1[i]*count1[i]*count1[i]);
    }
    return 0;
}
