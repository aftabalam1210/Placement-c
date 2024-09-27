// wap tor ead a string and print the same;

#include <stdio.h>
#include <string.h>
// int main()
// {
//     char c[50];
//     scanf("%s", c);
//     printf("%s", c);
// }

// Read a string and print character by character.

int main()
{
    char c[50];
    // scanf("%s", c);
    // gets(c);//this is teh better option for using string input.
    scanf("%[^\n]s", c);
    for (int i = 0; c[i] != '\0'; i++)
    {
        printf("%c\n", c[i]);
    }
}
