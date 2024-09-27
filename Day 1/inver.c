//WAp to read a charter and inverse the case. use ternary opeator.
#include <stdio.h>

int main() {
    char ch;
    
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    
    ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : 
         (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
    
    
    printf("Inversed case: %c\n", ch);
    
    return 0;
}


// (ch>='a' && ch<='z')? pf("%c",ch-32):(ch>="A" && ch<="Z")?pf("%c", ch+32):pf("Invalid character");
