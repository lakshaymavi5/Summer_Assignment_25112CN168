#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0; 

    while (*str) {
       
        if (isspace((unsigned char)*str)) {
            inWord = 0; 
        } 

        else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
  
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        int totalWords = countWords(sentence);
        printf("Number of words: %d\n", totalWords);
    }

    return 0;
}
