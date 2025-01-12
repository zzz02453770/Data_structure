#include <stdio.h>
#include <math.h>

int main() {
    int arry[3], max=0 , ans;
    scanf("%d %d %d", &arry[0], &arry[1], &arry[2]);
    for(int i =0 ; i < 3 ; i++){
        if (arry[i]>max){
            max=arry[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
