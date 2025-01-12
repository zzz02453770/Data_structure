#include <stdio.h>
#include <stdlib.h>
int min;
double money;

int main() {
    scanf("%d",&min);
    if(min<1500){
    money=min*0.9*0.9;
        if(min<=800){
            money=min*0.9;
        }
    }
    else{
    money=min*0.9*0.79;
    }
    printf("%0.1f\n",money);
	return 0;
}