// wap to convert the decimal to binary.

#include <stdio.h>

int decimalToBinary(int a)
{
    if (a > 1)
        decimalToBinary(a / 2);

    printf("%d", a % 2);
}
// void decimalToBinary(int n)
// {
//     int binary[32]; // Array to store binary number
//     int i = 0;

//     while (n > 0)
//     {
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     for (int j = i - 1; j >= 0; j--)
//         printf("%d", binary[j]);
//     printf("\n");
// }

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);

    return 0;
}

// without array;
