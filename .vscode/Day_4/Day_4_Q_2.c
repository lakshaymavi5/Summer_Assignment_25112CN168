#include <stdio.h>

int fibonacci_recursive(int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() 
{
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("The %d-th Fibonacci term is: %d\n", n, fibonacci_recursive(n));
    return 0;
}
