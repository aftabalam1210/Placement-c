
// Read a number . print the last and first digits.if digit is only 1 then print -1.

#include <stdio.h>
#include <math.h>

int main()
{
    int first, last, num;
    printf("enter number");
    scanf("%d", &num);
    int digits;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    last = num % 10;
    if (digits == 1)
    {
        printf("-1\n");
    }

    printf("first digit is %d, last digit is %d", first, last);
}