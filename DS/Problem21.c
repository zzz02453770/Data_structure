#include <stdio.h>
#include <stdlib.h>

int input, sum = 0; 
int main() {
    scanf("%d", &input);
    for (int i = 1; i <= input; i++) {
        if ((i % 2 == 0 && i % 3 == 0) && i % 12 != 0) { 
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
