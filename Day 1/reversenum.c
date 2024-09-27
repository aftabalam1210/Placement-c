// wap in c to reverse the number. make sure that if 100 is input reverse should be 001 not 1 and so forth. use char

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char number[100], reversed[100];
//     int length, i, j = 0;

//     printf("Enter a number: ");
//     scanf("%s", number);

//     length = strlen(number);

//     // Reverse the number
//     for (i = length - 1; i >= 0; i--) {
//         reversed[j++] = number[i];
//     }
//     reversed[j] = '\0'; // Null-terminate the reversed string

//     printf("Reversed number: %s\n", reversed);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char num[100];

    printf("Enter a number: ");
    scanf("%s", num);

    // Print the reversed number
    int i, j;
    for (int i = 0; num[i] != '\0'; i++)
        ;
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", num[j]);
    }
    printf("\n");

    return 0;
}
