// tanspose matrix

#include <stdio.h>

void printMatrix(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r, int c, int arr[r][c])
{
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original matrix:\n");
    printMatrix(r, c, arr);

    transpose(r, c, arr);

    return 0;
}
