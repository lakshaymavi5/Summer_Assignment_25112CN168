#include <stdio.h>

int main() 
{
    int num,Num, rem, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    Num = num;

    while (Num != 0) 
    {
        rem = Num % 10;
        
        result += rem * rem * rem;
        
        Num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
