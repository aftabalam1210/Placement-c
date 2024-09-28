// wap to sum the odd place digit.
// for example:: 23451 the oddplaces digit are  ====> 2,4,1====> should give 7;

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num = 52; // The number whose digits you want to count
//     int digit = (int)log10(num) + 1; // Calculate number of digits
//     printf("Number of digits: %d\n", digit);

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, length, digit, position;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the number of digits using log10
    length = (int)log10(num) + 1;

    // Iterate through each digit
    for (int i = 1; i <= length; i++)
    {
        digit = num / (int)pow(10, length - i) % 10; // Get the i-th digit from the left

        if (i % 2 != 0)
        {                 // Check if position is odd (from left)
            sum += digit; // Add the digit if in an odd position
        }
    }

    printf("Sum of digits at odd places: %d\n", sum);

    return 0;
}
