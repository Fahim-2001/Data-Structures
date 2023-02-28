#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("--> %d added in the stack.\n", x);
    }
    else
    {
        printf("Push Reporting: Stack is full!!!\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top = top - 1;
        return val;
    }
    printf("Pop reporting: Empty stack!!!\n");
    return -1;
}

int peek()
{
    if (top >= 0)
        return stack[top];
    else
        printf("Peek reporting : Stack Empty!!!\n");
    return -1;
}

int main()
{
    printf("Stack Working\n");
    peek();
    push(10);
    printf("<-- Popped %d from the stack.\n", pop());
    push(20);
    push(30);
    printf("<-- Popped %d from the stack.\n", pop());
    push(40);
    push(50);
    printf("Peek Reporting: Top of the stack is %d\nThe Stack is ", peek());
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    return 0;
}