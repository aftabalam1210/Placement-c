#include<stdio.h>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("GCD of %d and %d is %d\n", a, b, GCD(a, b));
    
    return 0;
}


//without recursion::::::


