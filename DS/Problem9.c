#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber;
    scanf("%d", &Nnumber);
    int count1[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d", &count1[i]); 
        if(count1[i]>31){
        printf("Value of more than 31\n");
        }
        else{
        printf("%d\n",1<<count1[i]);
        }
    }
    return 0;
}
