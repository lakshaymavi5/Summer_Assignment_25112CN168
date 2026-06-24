#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    int visited[256] = {0}; 
    char result = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        int ascii_index = (unsigned char)str[i]; 

        if (visited[ascii_index] > 0) {
            result = str[i];
            break; 
        }

        visited[ascii_index]++;
    }

    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}
