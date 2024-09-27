// tower of hanoi using recursion;

#include <stdio.h>

// Recursive function to solve the Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    // Base case: If there's only one disk, move it directly
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move the top n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n; // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the recursive function
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of the rods
    return 0;
}
