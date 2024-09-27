// 1d array :
// Data type  variblae [size];
// eg:
#include <stdio.h>
// int main()
// {
//     float arr[10];
//     printf("%ld", sizeof(arr));
//     printf("\n");
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("%d", size);

// }

// size calculation fofrmula : sizeof(arr)/size of arr[0]

// int main()
// {
//     int arr[10] = {12, 13, 14, 5, 6};
//     int s = sizeof(arr) / sizeof(int);
//     printf("%d ", [0] arr);
//     // for (int i = 0; i < s; i++)
//     // {
//     //     printf("%d ", [i] arr);
//     // }
//     printf("%d", s);
// }

//********************************************************** */

// int main()
// {
//     int arr[] = {2, 8, 16};
//     int s = sizeof(arr) / sizeof(int);
//     int i = 0;
//     // for (int i = 0; i < s; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     // printf("%d", arr[i++]); // result will be 2
//     printf("%d", ++arr[i]); //result will be 3
// }

// int main()
// {
//     int arr[] = {2, 8, 16,14,6,3,9};
//     int s = sizeof(arr) / sizeof(int);
//     int i = 0;
//     // for (int i = 0; i < s; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     // printf("%d", arr[i++]); // result will be 2
//     printf("%d", ++arr[i]); //result will be 3
// }

int main()
// {
//     printf("%ld", sizeof(printf("Wlecome")));
//    // printf("%d", sizeof(scanf("%d", &a)));
//    // printf("%ld", sizeof(28.9));
// }

int main()
{
    int arr[] = {2, 8, 16, 14, 6, 3, 9};
    int s = sizeof(arr) / sizeof(int);

    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("%d", arr[i++]); // result will be 2
    // printf("%d", ++arr[i]); //result will be 3
}