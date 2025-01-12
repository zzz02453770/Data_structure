#include <stdio.h>
#include <stdlib.h>
int money;

int main() {
    scanf("%d",&money);
    int count1 = money/10;
    money %=10;
    int count2 = money/5;
    money %=5;
    int count3 = money/1;
    money %=1;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",count1,count2,count3);
	return 0;
}