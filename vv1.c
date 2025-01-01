#include <stdio.h>
int main() {
    int p, q, r, input, result;
    printf("Provide the values for p, q, and r: ");
    scanf("%d %d %d", &p, &q, &r);
    printf("Provide the input value: ");
    scanf("%d", &input);
    result = p * input * input + q * input + r;
    printf("For input = %d, the computed parameter is = %d\n", input, result);
    return 0;
}
