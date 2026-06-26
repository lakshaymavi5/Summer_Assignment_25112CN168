#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    printf("Enter the number of words: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of words.\n");
        return 1;
    }
    
    char words[n][100];
    char temp[100];
    
    printf("Enter %d words separated by spaces or newlines:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}
