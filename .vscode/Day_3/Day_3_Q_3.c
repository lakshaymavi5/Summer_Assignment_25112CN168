#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int num1 = a;
    int num2 = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;     
    }

    printf("The GCD of %d and %d is: %d\n", num1, num2, a);

    return 0;
}
