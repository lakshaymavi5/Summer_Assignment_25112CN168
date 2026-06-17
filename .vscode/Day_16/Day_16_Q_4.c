#include <stdio.h>

int main() {
    int arr[100]; 
    int size;
    int i, j, k;

    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
        
            if (arr[i] == arr[j]) {

                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--; 
            }
        }
    }

    printf("\nArray elements after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
