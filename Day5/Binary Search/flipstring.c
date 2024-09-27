// flip the string using stack;
// example:::
//  Apple is good output should be elppa si doog .

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack structure
struct stack
{
    int top;
    int size;
    char *array;
};

// Initialize the stack
struct stack *Mystack(int s)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->size = s;
    st->array = (char *)malloc(st->size * sizeof(char));
    return st;
}

// Push character to stack
void push(struct stack *st, char val)
{
    if (st->top == st->size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    st->array[++st->top] = val;
}

// Pop character from stack
char pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("Stack Underflow: No data to remove\n");
        return '\0';
    }
    return st->array[st->top--];
}

// Function to flip words in a string
void flipString(char str[])
{
    int n = strlen(str);
    struct stack *st = Mystack(n); // Create a stack of size equal to the string length

    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ')
        {
            // Push characters of a word onto the stack
            push(st, str[i]);
        }
        else
        {
            // Pop characters from the stack and print the word when a space is encountered
            while (st->top != -1)
            {
                printf("%c", pop(st));
            }
            printf(" "); // Print the space after the word
        }
    }

    // Pop and print the last word (if any)
    while (st->top != -1)
    {
        printf("%c", pop(st));
    }

    free(st->array); // Free memory
    free(st);
}

int main()
{
    char str[] = "hello world";

    printf("Original String: %s\n", str);

    printf("Flipped String: ");
    flipString(str);

    return 0;
}
