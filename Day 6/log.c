#include <stdio.h>
#include <math.h>

int main()
{
    int num = 23541;                 
    int digit = (int)log10(num) + 1; // Calculate number of digits
    printf("Number of digits: %d\n", digit);

    return 0;
}