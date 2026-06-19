#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sum = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum = sum + matrix[i][i]; 
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}
