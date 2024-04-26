#include <stdio.h>

void matrix_multiply(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    // Get the dimensions of the matrices
    int rows1 = 3, cols1 = 3, rows2 = 3, cols2 = 3;

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        printf("Number of columns in the first matrix must be equal to the number of rows in the second matrix\n");
        return;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    // Example matrices
    int matrix_A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Initialize the result matrix with zeros
    int result_matrix[3][3];

    // Perform matrix multiplication
    matrix_multiply(matrix_A, matrix_B, result_matrix);

    // Print the result
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix_B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
