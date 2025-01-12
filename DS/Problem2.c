#include <stdio.h>
#include <stdlib.h>
int hight,topedge,bottomedge;

int main(int argc, char *argv[]) {
scanf("%d %d %d",&topedge,&bottomedge,&hight);
double area = (double)(topedge+bottomedge)*hight/2;
printf("Trapezoid area:%0.1f\n",area);
	return 0;
}