#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Result too large! Please enter a number between 0 and 20.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}

unsigned long long factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}
