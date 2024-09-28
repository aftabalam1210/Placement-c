// swap first n last diigt of number.

#include <stdio.h>
#include <math.h>

// int swapFirstAndLast(int num)
// {

//     num = abs(num);

//     int lastDigit = num % 10;
//     int digits = (int)log10(num);
//     int firstDigit = num / (int)pow(10, digits);
//     int middlePart = (num % (int)pow(10, digits)) / 10;

//     int newNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;
//     return newNum;
// }

int swapFirstAndLast(int num)
{

    num = abs(num);

    int lastDigit = num % 10;
    int digits = (int)log10(num);
    int firstDigit = num / (int)pow(10, digits);

    int newNum = lastDigit;
    num = num - firstDigit * (int)pow(10, digits);
    num = num / 10;
    newNum = newNum * (int)pow(10, digits) + num * 10 + firstDigit;

    return newNum;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int swappedNumber = swapFirstAndLast(number);
    printf("Number after swapping first and last digits: %d\n", swappedNumber);

    return 0;
}
