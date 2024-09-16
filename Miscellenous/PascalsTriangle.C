#include <stdio.h>

void printPascalTriangle(int rows) {
    int i, j, k;

    for (i = 0; i < rows; i++) {
        // Print leading spaces
        for (k = 0; k < rows - i - 1; k++) {
            printf("  ");
        }

        // Print the row elements
        for (j = 0; j <= i; j++) {
            int coefficient = 1;
            for (int k = 0; k < j; k++) {
                coefficient = coefficient * (i - k) / (k + 1);
            }
            printf("%4d", coefficient);
        }

        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPascalTriangle(rows);

    return 0;
}