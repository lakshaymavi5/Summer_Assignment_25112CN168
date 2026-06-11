#include <stdio.h>

void printFibonacci(int terms);

int main() {
    int n;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    printFibonacci(n);

    return 0;
}

void printFibonacci(int terms) {
    long long first = 0, second = 1, next;

    for (int i = 1; i <= terms; ++i) {
        printf("%lld", first);

        if (i < terms) {
            printf(", ");
        }

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}
