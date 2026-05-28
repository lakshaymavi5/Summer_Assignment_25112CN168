#include <stdio.h>

int main() {
    int num, i;

    printf("Enter an integer for its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    
    for (i = 1; i <= 10; ++i) {
        printf("%d\n",num * i);
    }

    return 0;
}
