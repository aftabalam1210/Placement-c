#include <stdio.h>

// Function to print all occurrences of the key
void printOccurrences(int arr[], int size, int key)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Key found at index: %d\n", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Key not found.\n");
    }
}

int main()
{
    int arr[] = {6, 12, 14, 8, 9, 1, 3, 5, 22, 14, 6, 6, 0}; // Example array
    int key = 6;                                             // Example key to search for
    int size = sizeof(arr) / sizeof(int);                    // Calculate the size of the array

    // Call the function to print all occurrences of the key
    printOccurrences(arr, size, key);

    return 0;
}
