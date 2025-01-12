#include <stdio.h>
#include <stdlib.h>
int hight,bottom;

int main(int argc, char *argv[]) {
scanf("%d %d",&hight,&bottom);
double area = (double)bottom*hight/2;
printf("Triangle area:%0.1f\n",area);


	return 0;
}