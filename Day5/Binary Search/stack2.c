#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *array;
};

struct stack *Mystack(int s)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->size = s;
    st->array = (int *)malloc(st->size * sizeof(int));
    return st;
}

void push(struct stack *st, int val)
{
    if (st->top == st->size - 1)
    {
        printf("Overflow\n");
        return; // Add return to avoid accessing out of bounds
    }
    st->array[++st->top] = val;
}
int pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("No data to remove");
        return -1;
    }
    return st->array[st->top--];
}
void display(struct stack *st)
{
    if (st->top == -1)
    {
        printf("No data found\n");
        return; // Add return to exit function early
    }

    // Change loop to include st->top (should be i >= 0)
    for (int i = st->top; i >= 0; i--)
        printf("%d\n", st->array[i]);
}

int main()
{
    struct stack *st = Mystack(5);

    push(st, 1);
    push(st, 2);
    push(st, 3);
    display(st); // Display after pushing elements
    int x = pop(st);
    printf("stacked poped is %d", x);
    return 0; // Add return statement at the end of main
}
