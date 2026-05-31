#include <stdio.h>

int main() {
    int start, end, i, temp, remainder, digits, sum, power, j;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
    
        digits = 0;
        temp = i;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        sum = 0;
        temp = i;
        while (temp != 0) {
            remainder = temp % 10;

            power = 1;
            for (j = 0; j < digits; j++) {
                power *= remainder;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == i && i != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
