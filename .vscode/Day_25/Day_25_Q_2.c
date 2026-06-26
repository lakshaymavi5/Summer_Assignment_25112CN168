#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    
    int checked[256] = {0}; 
    int found_common = 0;

    printf("Enter the first string: ");
    scanf("%99[^\n]", str1);
    
    getchar(); 

    printf("Enter the second string: ");
    scanf("%99[^\n]", str2);

    printf("Common characters: ");
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            
            if (str1[i] == str2[j]) {
                int ascii_val = (unsigned char)str1[i];
                
                if (checked[ascii_val] == 0) {
                    printf("%c ", str1[i]);
                    checked[ascii_val] = 1;
                    found_common = 1;
                }
                break; 
            }
        }
    }

    if (!found_common) {
        printf("None");
    }
    printf("\n");

    return 0;
}
