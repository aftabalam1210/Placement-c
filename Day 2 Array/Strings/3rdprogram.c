// wap to print vowels from the string

#include <stdio.h>
#include <string.h>

int main() {
    char c[50];
    printf("Enter a string: ");
    
    // Using fgets to read the input string, including spaces
    fgets(c, sizeof(c), stdin);
    
    printf("Vowels in the string: ");
    for (int i = 0; i < strlen(c); i++) {
        // Check if the character is a vowel
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' ||
            c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U') {
            printf("%c ", c[i]);
        }
    }
    return 0;
}

