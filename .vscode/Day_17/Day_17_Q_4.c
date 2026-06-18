#include <stdio.h>

int main() {
    int n1, n2;
    int i, j, k;
    int hasCommon = 0;

    printf("Enter the number of elements for the first array: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
    int arr1[n1];

    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the number of elements for the second array: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
    int arr2[n2];

    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nCommon elements are: ");
    for (i = 0; i < n1; i++) {
  
        int alreadyChecked = 0;
        for (k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyChecked = 1;
                break;
            }
        }
        
        if (!alreadyChecked) {
            for (j = 0; j < n2; j++) {
                if (arr1[i] == arr2[j]) {
                    printf("%d ", arr1[i]);
                    hasCommon = 1;
                    break; 
                }
            }
        }
    }

    if (!hasCommon) {
        printf("None");
    }
    printf("\n");

    return 0;
}
