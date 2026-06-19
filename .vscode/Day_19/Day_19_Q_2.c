#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int first[rows][cols];
    int second[rows][cols];
    int difference[rows][cols];

    for (int k = 0; k < 2; k++) {
        printf("\nEnter elements of matrix %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("Enter element [%d][%d]: ", i, j);
                if (k == 0) scanf("%d", &first[i][j]);
                else scanf("%d", &second[i][j]);
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            difference[i][j] = first[i][j] - second[i][j];
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}
