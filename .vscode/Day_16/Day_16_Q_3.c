#include <stdio.h>

int main() {
    int n, target, i, j;
    int found = 0; 
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum you want to find: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1; 
            }
        }
    }
    if(!found) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}
