#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
        {
            return mid+1;
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else
        {
            right = mid - 1;
        }
    }

    // If the element is not present
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        printf("Element is present at index %d\n", result);
    }
    else
    {
        printf("Element is not present in the array\n");
    }

    return 0;
}
