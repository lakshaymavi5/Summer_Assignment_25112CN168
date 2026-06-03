#include <stdio.h>

int main() 
{
    double base, result = 1.0;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int n = exponent;
    
    if (n < 0) 
    {
        n = -n;
    }

    while (n > 0) 
    {
        result *= base;
        n--;
    }

    if (exponent < 0) 
    {
        result = 1.0 / result;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
