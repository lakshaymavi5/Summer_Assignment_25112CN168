#include <stdio.h>

int main() {
    char str[100];
    int count = 1;

    printf("Enter a string to compress (no spaces): ");
    scanf("%s", str);

    printf("Compressed string: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }         else {
            printf("%c%d", str[i], count);
            count = 1; 
        }
    }

    printf("\n");
    return 0;
}
