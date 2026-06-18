#include <stdio.h>

int main() {
    int size1, size2, sizeMerged;
    int i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1]; 
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    sizeMerged = size1 + size2;
    int merged[sizeMerged];

    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        merged[i] = arr2[j];
        i++; 
    }

    printf("\nThe merged array is:\n");
    for (i = 0; i < sizeMerged; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
