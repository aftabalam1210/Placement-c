#include <stdio.h>

// int main()
// {
//     int a = 12;
//     int *ptr;
//     ptr = &a;

//     // printf("%u %d ", ptr * 2, *ptr);
//     //printf("%d %u", *ptr, ++ptr);
//     printf("%u %d ", ptr, *ptr);
// }

// adresss and size;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// int main()
// {
//     char *ch;
//     int *a;
//     float *f;
//     double *d;
//     printf("%ld  %ld %ld %ld", sizeof(ch), sizeof(a), sizeof(f), sizeof(d));
//     printf("%ld  %ld %ld %ld", sizeof(*ch), sizeof(*a), sizeof(*f), sizeof(*d));
// }

//                               Pointrs on array::::::::::::::::

// int main()
// {
//     int arr[] = {6, 2, 3, 1, 12, 5};
//     int *ptr;
//     ptr = &arr[0];
//     int s = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < s; i++)
//     {
//         printf("%d\n", *(ptr++));
//         printf("%d,", *(ptr + 1));
//     }
// }

// int main()
// {
//     int *ptr = 10;
//     printf("%d", *ptr);
// }

// int main()
// {
//     char ch[10];
//     char *ch;
//     scanf("%s", ch);
//     printf("%s", ch);
// }

// WAp to read array of n and print the same using dynamic memory::::::

#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
            printf("%d ", *(ptr + i));
    }
    free(ptr);  // freeing heap ..............
    ptr = NULL; // to stop the pointing and keeping the pointer away from dangling;;;;;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}