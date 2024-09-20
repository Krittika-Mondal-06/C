#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    int rowSums[rows];
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Calculate column sums
    int colSums[cols];
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];
        }
    }

    // Print results
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("%d ", colSums[j]);
    }
    printf("\n");

    return 0;
}