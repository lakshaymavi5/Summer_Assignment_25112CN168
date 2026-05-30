#include <stdio.h>

int main() 
{
    int n, i, num = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 1) 
    {
        num = 1;
    } 
    
    else 
    
    {
        for (i = 2; i * i <= n; i++) 
        
        {
            if (n % i == 0) 
            {
                num = 1;
                break;
            }
        }
    }


    if (num == 0) 
    {
        printf("%d is a prime number.\n", n);
    } 
    else 
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
