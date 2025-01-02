#include <stdio.h>

int main() {
    int a, b, c, x, y;
    FILE *file = fopen("input_data.txt", "r");

    if (file == NULL) {
        printf("Error: Unable to open the file!\n");
        return 1;
    }

    while (fscanf(file, "%d %d %d %d", &a, &b, &c, &x) != EOF) {
        y = a * x * x + b * x + c;
        printf("For x = %d, the computed value y = %d\n", x, y);
    }

    fclose(file);
    return 0;
}
