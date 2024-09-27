#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPallindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void checkPallindrome(char str[])
{
    int len = strlen(str);
    int isPallindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPallindrome = 0;
            break;
        }
    }

    if (isPallindrome)
    {
        printf("The string is pallindromeee\n");
    }
    else
    {
        printf("The string is nt pallindrome\n");
    }
}

int main()
{

    printf("Endert the string\n");
    scanf("%[^\n]s", data);
    checkPallindrome(data);

    return 0;
}