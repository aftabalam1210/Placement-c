#include <stdio.h>

int searchKey(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main()
{
    int arr[] = {6, 12, 14, 8, 9, 1, 3, 5, 22};
    int key = 14;
    int size = sizeof(arr) / sizeof(int); // Calculate size of array

    int result = searchKey(arr, size, key);

    if (result != -1)
    {
        printf("Key found at index: %d\n", result);
    }
    else
    {
        printf("Key not found.\n");
    }

    return 0;
}
