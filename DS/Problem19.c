#include <stdio.h>

int M,N;

int main() {
    scanf("%d %d",&M,&N);
    while (N!=0) {
    int temp = N;
    N = M%N;
    M = temp;
    }
    printf("%d\n",M);
}
