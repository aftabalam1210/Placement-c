#include <stdio.h>
#include <math.h>

// Reverse array elemts.

// int main()
// {
//     int arr[] = {9, 3, 6, 14, 16, 8, 2};
//     int s = sizeof(arr) / sizeof(int);
//     for (int i = s - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// WAp to accept the array on n elemnt and print only odd values or odd elemnts if no odd elemts print -1.



int main() {
    int n, flag = 0;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for odd elements and print them
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }

    // If no odd elements found, print -1
    if (flag == 0) {
        printf("-1");
    }

    return 0;
}
