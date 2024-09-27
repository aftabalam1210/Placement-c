// WAP to captilizae the first word of every word
#include <stdio.h>
#include <string.h>

void capitalizeFirstLetter(char str[])
{
    if (isspace(str[i]))
    {
        isNewWord = 1;
    }
    else if (isNewWorld && isalpha(str[i]))
    {
        str[i] = toupper(str[i]);
        isNewWord = 0;
    }
    printf("Capitalize%s\n", str);
}



int main()
{
    char str[100];
    strcpy(str, "hello welcome to ");
    capitalizeFirstLetter(str);

    return 0;
}
