#include <stdio.h>

int main() {
    int n, i, j;
    int max_element, max_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int current_count = 0;
        
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                current_count++;
            }
        }

        if (current_count > max_count) {
            max_count = current_count;
            max_element = arr[i];
        }
    }

    printf("\nElement with maximum frequency: %d", max_element);
    printf("\nIt appears %d times.\n", max_count);

    return 0;
}
