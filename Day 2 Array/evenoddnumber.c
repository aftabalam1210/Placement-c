// WAp to accept the array on n elemnt and print only odd values or odd elemnts if no odd elemts print -1.

#include <stdio.h>

void arrangeEvenOdd(int arr[], int size)
{
    int temp[size];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp[evenIndex++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp[oddIndex++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int size;
    printf("ENter array::::::");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elemts in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    arrangeEvenOdd(arr, size);

    printf("Array after arranging even followed by odd  \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}