#include <stdio.h>
int x = 10;
int *check(void)
{
    // static int x = 10; // static variable retains its value
    return &x;
}

int main()
{
    int *ptr;
    ptr = check();
    printf("%d", *ptr); 
    return 0;
}
