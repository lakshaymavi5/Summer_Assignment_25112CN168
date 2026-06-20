#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; 
    
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (rows != cols) {
        printf("The matrix is NOT symmetric (Not a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid element input.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }

    if (isSymmetric) {
        printf("\nThe given matrix is a SYMMETRIC matrix.\n");
    } else {
        printf("\nThe given matrix is NOT a symmetric matrix.\n");
    }

    return 0;
}
