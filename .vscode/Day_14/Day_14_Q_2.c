#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 5, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target;
    int count = 0;

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("The element %d appears %d times.\n", target, count);

    return 0;
}
