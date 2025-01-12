#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber1, Nnumber2;
    scanf("%d %d", &Nnumber1, &Nnumber2);
    printf("%d+%d=%d\n", Nnumber1, Nnumber2, Nnumber1 + Nnumber2);
    printf("%d*%d=%d\n", Nnumber1, Nnumber2, Nnumber1 * Nnumber2);
    printf("%d-%d=%d\n", Nnumber1, Nnumber2, Nnumber1 - Nnumber2);
    int quotient = (Nnumber1 < 0 && Nnumber1 % Nnumber2 != 0) ? 
                   (Nnumber1 / Nnumber2) - 1  : Nnumber1 / Nnumber2;
    int remainder = Nnumber1 - (quotient * Nnumber2); 
    printf("%d/%d=%d...%d\n", Nnumber1, Nnumber2, quotient, remainder);
    return 0;
}
