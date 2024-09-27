//WAP to reverse the string using stack;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack structure
struct stack {
    int top;
    int size;
    char *array;
};

// Stack initialization
struct stack *Mystack(int s) {
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->size = s;
    st->array = (char *)malloc(st->size * sizeof(char));
    return st;
}

// Push character to the stack
void push(struct stack *st, char val) {
    if (st->top == st->size - 1) {
        printf("Stack Overflow\n");
        return;
    }
    st->array[++st->top] = val;
}

// Pop character from the stack
char pop(struct stack *st) {
    if (st->top == -1) {
        printf("Stack Underflow: No data to remove\n");
        return '\0';
    }
    return st->array[st->top--];
}

// Free memory used by the stack
void free_stack(struct stack *st) {
    free(st->array);
    free(st);
}

// Function to reverse the string using stack
void reverseString(char str[]) {
    int n = strlen(str);
    struct stack *st = Mystack(n);  // Create a stack of the same size as the string

    // Push all characters of the string onto the stack
    for (int i = 0; i < n; i++) {
        push(st, str[i]);
    }

    // Pop characters from the stack and put them back into the string in reverse order
    for (int i = 0; i < n; i++) {
        str[i] = pop(st);
    }

    free_stack(st);  // Free the allocated memory for the stack
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed String: %s\n", str);
    
    return 0;
}
