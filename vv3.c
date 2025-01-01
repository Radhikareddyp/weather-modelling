#include <stdio.h>

int main() {
    int p, q, r, input, result;
    FILE *file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(file, "%d %d %d %d", &p, &q, &r, &input);
    fclose(file);

    result = p * input * input + q * input + r;

    printf("For input = %d, the computed value is = %d\n", input, result);
    return 0;
}
