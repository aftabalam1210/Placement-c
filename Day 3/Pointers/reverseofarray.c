// // wap to reverse of an array using dma.
// #include <stdio.h>
// #include <stdlib.h>

// // void ReverseArray(int arr[], int size)
// // {
// //     int temp;
// //     for (int i = 0, j = size - 1; i < j; i++, j--)
// //     {
// //         temp = arr[i];
// //         arr[i] = arr[j];
// //         arr[j] = temp;
// //     }
// // }

// // void ReverseArray(int arr[], int size) {
// //     int temp;
// //     for (int i = 0; i < size / 2; i++) {
        
// //         temp = arr[i];
// //         arr[i] = arr[size - 1 - i];
// //         arr[size - 1 - i] = temp;
// //     }
// // }

// int* ReverseArray(int arr[], int size) {
//     int* reversedArr = (int*)malloc(size * sizeof(int)); 

//     for (int i = 0; i < size; i++) {
//         reversedArr[i] = arr[size - 1 - i]; 
//     }

//     return reversedArr;
// }

// // void ReverseArray(int *arr, int size) {
// //     int temp;
// //     for (int i = 0; i < size / 2; i++) {
// //         temp = arr[i];
// //         arr[i] = arr[size - 1 - i];
// //         arr[size - 1 - i] = temp;
// //     }
// // }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int *ptr = (int *)malloc(n * sizeof(int));

//     if (ptr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", ptr + i);
//     }

//     //
//     ReverseArray(ptr, n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", *(ptr + i));
//     }

//     free(ptr);
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>

int *ReverseArray(int arr[], int size)
{
    int *reversedArr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        reversedArr[i] = arr[size - 1 - i];  // Reverse the elements
    }

    return reversedArr;  // Return the reversed array
}

int main()
{
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Call the ReverseArray function
    int *reversedArr = ReverseArray(ptr, n);

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reversedArr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(ptr);
    free(reversedArr);

    return 0;
}
