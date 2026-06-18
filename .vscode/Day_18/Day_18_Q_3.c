#include <stdio.h>

int main() {
    int n, i, target;
    int left, right, mid;
    int found = 0; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &target);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d!\n", mid);
            found = 1; 
            break; 
        }
        else if (arr[mid] < target) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
