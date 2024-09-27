//wap to find the given number is strong or not
//factorail of each digit sum is equal to number. if yes then strong .

#include <stdio.h>

// Function to compute the factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int isStrong(int num) {
    int originalNum = num;
    int sumFactorials = 0;

    while (num > 0) {
        int digit = num % 10;
        sumFactorials += factorial(digit);
        num /= 10;
    }

    return (sumFactorials == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(num)) {
        printf("%d is a strong number!\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
