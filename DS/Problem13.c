#include <stdio.h>
#include <stdlib.h>
int high,weight;
double BMI;

int main() {
    scanf("%d %d",&weight,&high);
    BMI=(double)weight/(high*high)*10000;
    printf("%0.2f\n",BMI);
	return 0;
}