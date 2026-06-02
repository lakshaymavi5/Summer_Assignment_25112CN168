#include <stdio.h>

int main() {
    int num, TrueNum, EndDigit, sum = 0;
    long fact;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    TrueNum = num;

    while (num > 0) 
    {
        EndDigit = num % 10;
        fact = 1;

        for (int i = 1; i <= EndDigit; i++) 
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == TrueNum) 
    {
        printf("%d is a Strong Number.\n", TrueNum);
    } 
    else 
    {
        printf("%d is NOT a Strong Number.\n", TrueNum);
    }

    return 0;
}
