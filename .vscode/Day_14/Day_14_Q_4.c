#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100]; 
    int found_duplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found_duplicate = 1;
                break; 
            }
        }
    }

    if (found_duplicate == 0) {
        printf("None");
    }

    printf("\n");
    return 0;
}
