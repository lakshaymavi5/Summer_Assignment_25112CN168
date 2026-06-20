#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int r, c, sum;

    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            printf("Element [%d][%d]: ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            printf("%d\t", matrix[r][c]);
        }
        printf("\n");
    }

    printf("\nColumn-wise Sums\n");
    for (c = 0; c < cols; c++) {
        sum = 0; 
        for (r = 0; r < rows; r++) {
            sum += matrix[r][c];
        }
        printf("Sum of Column %d = %d\n", c + 1, sum);
    }

    return 0;
}
