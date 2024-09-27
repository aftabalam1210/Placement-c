// WAp to rotate the number in array clockwise.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], temp[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int r;
    printf("print number of rotation");
    scanf("%d", &r);
    r = r % n;

    int k = 0;

    for (int i = r; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < r; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
