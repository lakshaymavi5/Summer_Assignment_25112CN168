#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, index = 0;

    printf("Enter a string: ");
    scanf("%s", str); 

    length = strlen(str);

    for (int i = 0; i < length; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break; 
            }
        }
        
        if (j == i) {
            str[index++] = str[i];
        }
    }
    
    str[index] = '\0'; 

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
