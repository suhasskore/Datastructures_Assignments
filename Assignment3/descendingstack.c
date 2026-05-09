#include<stdio.h>
#include<stdlib.h>
#define N 5
struct stack
{
    int arr[N];
    int top;
};

void stact_init(struct stack *ps)
{
    ps->top=N;
}

void push(struct stack *ps,int x)
{
    if(ps->top==-1)
    {
        printf("stack is full\n");

    }
    ps->top--;
    ps->arr[ps->top]=x;
}

void pop(struct stack *ps)
{
    if(ps->top==N)
    {
        printf("Stack is empty\n");
    }
    int num=ps->arr[ps->top];
    printf("The number is popped out is %d\n",num);
    ps->top++;
}

void peek(struct stack *ps)
{
    int num=ps->arr[ps->top];
    printf("The number is at top is %d\n",num);
}


int main()
{
    struct stack S;
        stact_init(&S);
    int choice;
do{
    printf("0.Exit\n1.Push\n2.Pop\n3.Peek\n");
    printf("Enter the choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0 : exit(0);
        case 1:
                    int value;
                    printf("Enter the value to push:");
                    scanf("%d",&value);
                    push(&S,value);
                    printf("value pushed = %d\n",value);
                
                break;
        case 2: 
                
                    
                    pop(&S);
                   
                                break;
        case 3:
                
                  peek(&S);
                    
                
                break;
        default :
                printf("Invalid Choice.\n");
    }
}while(choice != 0);
    return 0;
}