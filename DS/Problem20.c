#include <stdio.h>
#include <stdlib.h>

int input, max;

int main() {
    scanf("%d", &input);
    for (int i = input - 1; i > 1; i--) { 
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            max = i;
            break;
        }
    }
    if (max > 0) {
        printf("%d\n", max);
    }
    return 0;
}
