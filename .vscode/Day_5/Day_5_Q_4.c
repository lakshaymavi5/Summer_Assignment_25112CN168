#include <stdio.h>

int main() 
{
    int num, largest_factor = 1; 

    printf("Enter a No: ");
    scanf("%d", &num);

    int temp = num;

    while (temp % 2 == 0) 
    {
        largest_factor = 2;
        temp = temp / 2;
    }

    for (int i = 3; i * i <= temp; i += 2) 
    {
        while (temp % i == 0) 
        {
            largest_factor = i;
            temp = temp / i;
        }
    }
    
    if (temp > 2) 
    {
        largest_factor = temp;
    }

    printf("The largest prime factor of %d is: %d\n", num, largest_factor);

    return 0;
}
