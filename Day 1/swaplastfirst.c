#include <stdio.h>
#include <math.h>

int swapFirstAndLastDigits(int num)
{
    int first, last, digits;

    last = num % 10; // Get last digit

    digits = (int)log10(num); // Get number of digits minus 1

    first = num / pow(10, digits); // Get first digit

    // Remove first digit and add last digit at the beginning
    num = num % (int)pow(10, digits);   // Remove first digit
    num = last * pow(10, digits) + num; // Add last digit at the beginning

    // Remove last digit and add first digit at the end
    num = num / 10 * 10 + first; // Replace last digit with first digit

    return num;
}

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = swapFirstAndLastDigits(number);

    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}
