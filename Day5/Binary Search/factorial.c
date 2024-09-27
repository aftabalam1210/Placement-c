#include <stdio.h>

long long int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    printf("%lld", fact(0));
}
