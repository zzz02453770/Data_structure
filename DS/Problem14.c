#include <stdio.h>
#include <stdlib.h>
int distance;

int main() {
    scanf("%d",&distance);
    double v = 1-(30*0.0254);
    int time = ceil(distance/v);
    printf("%d\n",time);
	return 0;
}