// wap to copying the elments in negative array if its negative and positive array if its positive. and if nothing is found then empty array should get [-1]

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int negative[n], positive[n];
    int neg_count = 0, pos_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative[neg_count++] = arr[i];
        }
        else if (arr[i] > 0)
        {
            positive[pos_count++] = arr[i];
        }
    }

    if (neg_count == 0)
    {
        negative[neg_count] = -1;
    }

    if (pos_count == 0)
    {
        positive[pos_count] = -1;
    }

    printf("Negative array: ");
    for (int i = 0; i < neg_count; i++)
    {
        printf("%d ", negative[i]);
    }
    printf("\n");

    printf("Positive array: ");
    for (int i = 0; i < pos_count; i++)
    {
        printf("%d ", positive[i]);
    }
    printf("\n");

    return 0;
}
