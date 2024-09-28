// Print the number in vertical order using the function pow.
// pow function gives the power.

#include <stdio.h>
#include <math.h>

// int main() {
//     int num, temp, digit, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     temp = num;

//     // Count the number of digits in the number
//     while (temp != 0) {
//         temp /= 10;
//         count++;
//     }

//     for (int i = count - 1; i >= 0; i--) {
//         digit = num / (int)pow(10, i);
//         printf("%d\n", digit);
//         num %= (int)pow(10, i);         // Remove the leftmost digit
//     }

//     return 0;
// }

// using string #include <stdio.h>

// #include <string.h>

// int main()
// {
//     char num[20]; // Array to store the number as a string

//     printf("Enter a number: ");
//     scanf("%s", num); // Reading the number as a string

//     // Print each digit on a new line
//     for (int i = 0; i < strlen(num); i++)
//     {
//         printf("%c\n", num[i]);
//     }

//     return 0;
// }

// recursion;;;;;;;;

void digitprint(int num)
{
    if (num > 0)
    {
        // Recursive call with the number divided by 10
        digitprint(num / 10);
        // Print the last digit after the recursive call returns
        printf("%d\n", num % 10);
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Digits of the number printed vertically:\n");
    digitprint(number);

    return 0;
}
