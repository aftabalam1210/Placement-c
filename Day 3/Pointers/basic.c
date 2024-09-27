#include <stdio.h>
int main()
{
    // int a = 5;
    // int b;
    // b = &a;
    // printf("%u", b);

    // int a = 12;
    // int *ptr; // if use float for pointer then its not compatiable . it will show error.
    // ptr = &a;
    // // printf("%p", ptr);
    // // printf("%u %u ", ptr, &a);
    // printf("%d\n", *ptr);
    // printf("%u", ptr);

    int rate;
    int *p_rate;
    rate = 500;
    p_rate = &rate;

    /* Print the values */
    printf("rate = % d\n", rate); /* direct access */
    printf("rate = % d\n", p_rate);
}
