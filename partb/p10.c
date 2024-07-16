#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int trace = 0;
    double norm = 0.0;

    // Input number of rows and columns for the matrix
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input elements for the matrix
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print input matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculate trace (if matrix is square)
    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            trace += matrix[i][i];
        }
        printf("Trace of Matrix: %d\n", trace);
    } else {
        printf("Matrix is not square. Cannot calculate trace.\n");
    }

    // Calculate Frobenius norm
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            norm += pow(matrix[i][j], 2);
        }
    }
    norm = sqrt(norm);
    printf("Frobenius Norm of Matrix: %.2f\n", norm);

    return 0;
}
