#include <stdio.h>
#include <stdlib.h>

int input;

int main() {
    scanf("%d", &input); 
    for (int i = 7; i >= 0; i--) {
        printf("%d", ((unsigned char)input >> i) & 1); 
    }
    printf("\n");

    return 0;
}
