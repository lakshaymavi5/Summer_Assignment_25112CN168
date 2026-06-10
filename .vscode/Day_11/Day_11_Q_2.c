#include <stdio.h>

int find_max(int num1, int num2);

int main() {
    int a, b, max_val;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    max_val = find_max(a, b);

    printf("The maximum number is: %d\n", max_val);

    return 0;
}

int find_max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
