#include <stdio.h>

int main() {
    int size, rotations, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of times to right rotate: ");
    scanf("%d", &rotations);

    rotations = rotations % size;

    for(i = 0; i < rotations; i++) {
    
        temp = arr[size - 1]; 
        
        for(j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        
        arr[0] = temp; 
    }

    printf("Array after right rotation: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
