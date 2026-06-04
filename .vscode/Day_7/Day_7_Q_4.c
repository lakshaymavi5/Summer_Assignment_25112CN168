#include <stdio.h>

int reverse_number(int num, int rev) {

    if (num == 0) {
        return rev;
    }
    
    rev = (rev * 10) + (num % 10);

    return reverse_number(num / 10, rev);
}

int main() {
    int input_number, final_reversed;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &input_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    final_reversed = reverse_number(input_number, 0);

    printf("Original number: %d\n", input_number);
    printf("Reversed number: %d\n", final_reversed);

    return 0;
}
