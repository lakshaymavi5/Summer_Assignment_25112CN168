#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max_count = 0;
    char max_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n' && freq[(unsigned char)str[i]] > max_count) {
            max_count = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }

    if (max_count > 0) {
        printf("The maximum occurring character is '%c' and it appears %d times.\n", max_char, max_count);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}
