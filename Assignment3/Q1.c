#include <stdio.h>
#include<stdlib.h>

#define SIZE 5

struct DescendingStack 
{
    int items[SIZE];
    int top;
};

void init(struct DescendingStack *s);
int isFull(struct DescendingStack *s);
int isEmpty(struct DescendingStack *s);
int pop(struct DescendingStack *s);
void push(struct DescendingStack *s, int value);

int main() 
{
    struct DescendingStack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Popped: %d\n", pop(&s));
    printf("Current top index: %d\n", s.top);

    return 0;
}

void init(struct DescendingStack *s) 
{
    s->top = SIZE;
}

int isFull(struct DescendingStack *s) 
{
    return s->top == 0;
}

int isEmpty(struct DescendingStack *s) 
{
    return s->top == SIZE;
}

void push(struct DescendingStack *s, int value) 
{
    if (isFull(s)) 
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    } 
    else 
    {
        s->top--; 
        s->items[s->top] = value;
        printf("Pushed %d at index %d\n", value, s->top);
    }
}

int pop(struct DescendingStack *s) 
{
    if (isEmpty(s)) 
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else 
    {
        int val = s->items[s->top];
        s->top++;
        return val;
    }
}
