#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber;
    scanf("%d", &Nnumber);
    int count1[Nnumber],count2[Nnumber],sum[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
            sum[i] = 0;
    }
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d %d", &count1[i],&count2[i]); 
        if(count2[i]>count1[i]){
            for (int j =count1[i] ; j <= count2[i]; j++){
                sum[i] += count1[i];
                count1[i] +=1;
            }
            printf("%d\n",sum[i]);
        }else{
            for(int j =count2[i] ; j <= count1[i]; j++){
                sum[i] += count2[i];
                count2[i] +=1;
            }
            printf("%d\n",sum[i]); 
        }
    }
    return 0;
}






// #include <stdio.h>

// int main() {
//     int Nnumber;
//     scanf("%d", &Nnumber); 
//     int count1[Nnumber], count2[Nnumber], sum[Nnumber];
//     for (int i = 0; i < Nnumber; i++) {
//         sum[i] = 0;
//     }
//     for (int i = 0; i < Nnumber; i++) {
//         scanf("%d %d", &count1[i], &count2[i]);
//         int start = count1[i] < count2[i] ? count1[i] : count2[i];
//         int end = count1[i] > count2[i] ? count1[i] : count2[i]; 
//         for (int j = start; j <= end; j++) {
//             sum[i] += j; 
//         }
//         printf("%d\n", sum[i]);
//     }

//     return 0;
// }
