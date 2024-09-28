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

// Function to calculate the sum of both diagonals
int sumTotalDiagonals(int r, int c, int arr[r][c])
{
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < r; i++)
    {
        if (i < c) // For the main diagonal
            mainDiagonalSum += arr[i][i];

        if (i < c) // For the secondary diagonal
            secondaryDiagonalSum += arr[i][c - i - 1];
    }

    return mainDiagonalSum + secondaryDiagonalSum; // Return the total diagonal sum
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

    printf("The matrix is:\n");
    printMatrix(r, c, arr);

    int totalDiagonalSum = sumTotalDiagonals(r, c, arr);
    printf("Sum of the total diagonal elements: %d\n", totalDiagonalSum);

    return 0;
}
