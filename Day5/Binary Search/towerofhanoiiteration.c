// wap in c for tower of hanoi using iteration;;;;;

#include <stdio.h>
#include <math.h>

// Function to implement Tower of Hanoi iteratively
void towerOfHanoiIterative(int n)
{
    int totalMoves = pow(2, n) - 1; // Total moves required
    char source = 'A';              // Source peg
    char destination = 'C';         // Destination peg
    char auxiliary = 'B';           // Auxiliary peg

    // Loop to execute the moves
    for (int i = 1; i <= totalMoves; i++)
    {
        int from, to;

        // Determine the pegs to move from and to
        from = (i & i - 1) % 3;     // From peg
        to = ((i | i - 1) + 1) % 3; // To peg

        // Handle peg mapping
        if (from == 0)
            from = source;
        else if (from == 1)
            from = auxiliary;
        else
            from = destination;

        if (to == 0)
            to = source;
        else if (to == 1)
            to = auxiliary;
        else
            to = destination;

        // Move the disk from 'from' to 'to'
        printf("Move disk %d from %c to %c\n", (i % 2) + 1, from, to);
    }
}

int main()
{
    int n; // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the iterative function
    towerOfHanoiIterative(n);
    return 0;
}
