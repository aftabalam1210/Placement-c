#include <stdio.h>

// int main() {
//     int n, first_digit, last_digit;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // If the number is a single digit
//     if (n >= -9 && n <= 9) {
//         printf("-1\n");
//         return 0;
//     }

//     // Get last digit
//     last_digit = n % 10;

//     // Find first digit
//     if (n < 0) {
//         n = -n;  // Make n positive if it's negative
//     }
//     while (n >= 10) {
//         n /= 10;
//     }
//     first_digit = n;

//     printf("First digit: %d\n", first_digit);
//     printf("Last digit: %d\n", last_digit);

//     return 0;
// }

// int main(){
//     int i=  0x25;
//     printf("%d ", i);
//     return 0;
// }

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    printf("%d", factorial(31));
}

// swap first n last digit number
