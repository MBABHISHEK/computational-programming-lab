#include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows and columns for matrices
    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], difference[rows][cols];

    // Input elements for matrix1
    printf("Enter elements of Matrix 1 (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for matrix2
    printf("Enter elements of Matrix 2 (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print matrix1
    printf("Matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Print matrix2
    printf("Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculate sum of matrices and print result
    printf("Sum of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculate difference of matrices and print result
    printf("Difference of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
