#include <stdio.h>
#include <string.h>

int main() {
    char current_word[100];
    char longest_word[100] = "";
    int max_length = 0;
    char next_char;

    printf("Enter a sentence: ");

    while (scanf("%99s", current_word) == 1) {
        int current_length = strlen(current_word);

        if (current_length > max_length) {
            max_length = current_length;
            strcpy(longest_word, current_word);
        }

        next_char = getchar();
        
        if (next_char == '\n' || next_char == EOF) {
            break;
        }
    }

    if (max_length > 0) {
        printf("\nThe longest word is: \"%s\"\n", longest_word);
        printf("Length: %d characters\n", max_length);
    } else {
        printf("\nNo words were entered.\n");
    }

    return 0;
}
