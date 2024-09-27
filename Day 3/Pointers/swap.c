// WAp to swap 2 numbers using

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    return 0;
}

int main()
{
    int x = 2, y = 8;
     swap(&x, &y);

    printf("a= %d  b=%d", x, y);
}
