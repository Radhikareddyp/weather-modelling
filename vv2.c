#include <stdio.h>
int main() {
    int p = 2, q = 4, r = 1;
    int z = 3;
    int w = p * z * z + q * z + r;
    printf("For z = %d, the resulting value w = %d\n", z, w);
    return 0;
}
