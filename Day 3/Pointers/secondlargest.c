//wap to find the second largest elemnt in array. dynamic 

#include <stdio.h>
#include <stdlib.h>

int findSecondLargest(int *arr, int size) {
    int largest = -1, secondLargest = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];        
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  
        }
    }

    return secondLargest;
}

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); 
        }

    
    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("There is no second largest element.\n");
    }

    free(arr);

    return 0;
}
