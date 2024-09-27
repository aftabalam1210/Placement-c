#include <stdio.h>
#define SIZE 5 // Define the maximum size of the stack

int stack[SIZE]; // Declare the stack
int top = -1;    // Initialize the top index

// Function to push an element onto the stack
void push(int val)
{
    if (top == SIZE - 1)
    { // Check for stack overflow
        printf("Stack overflow\n");
        return; // Exit the function if the stack is full
    }
    stack[++top] = val; // Increment top and add value
    printf("Successfully pushed %d\n", val);
}

// Function to pop an element from the stack
int pop()
{
    if (top == -1)
    { // Check for stack underflow
        printf("Nothing to pop\n");
        return -1; // Return -1 to indicate empty stack
    }
    return stack[top--]; // Return the top value and decrement top
}

// Main function to test the stack
int main()
{
    push(10); // Test pushing elements
    push(20);
    push(23);
    push(20);
    push(23);
    push(20);
    push(23);
    push(20);
    push(23);
    // printf("Popped value: %d\n", pop()); // Test popping an element
    // printf("Popped value: %d\n", pop());
    // printf("Popped value: %d\n", pop()); // Attempt to pop from empty stack

    return 0;
}
