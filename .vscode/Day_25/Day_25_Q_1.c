#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter %d sorted elements for the first array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter %d sorted elements for the second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    i = 0;
    j = 0; 
    k = 0; 

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("\nThe merged sorted array is: ");
    for (k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }
    printf("\n");

    return 0;
}
