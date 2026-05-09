#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <time.h>

#define SIZE 6
typedef struct stack
{
    int top;
    int arr[SIZE];
} stk;
void init(stk *ptr);
void push(stk *ptr, int data);
void pop(stk *ptr);
int peek(stk *ptr);
int full(stk *ptr);
int empty(stk *ptr);
void print_arr(int * arr);
void rev_arr(stk *ptr,int * arr);




int main()
{
    srand(time(NULL));
    stk ss;
    init(&ss);
    int choice, data;
    int arr[SIZE];
 for(int i=0;i<SIZE;i++)
 {
    arr[i]=rand()%100;
 } 
printf("The numbers in array are : ");
 print_arr(arr);
 
 rev_arr(&ss, arr);
 printf("\n\nReverse of array is : ");
 print_arr(arr);
    
 printf("\n");
 return 0;
}


void print_arr(int * arr)
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ", arr[i]);
    }
}
void rev_arr(stk *ptr,int * arr)
{
    
    for(int i=0;i<SIZE;i++)
    {
       push(ptr,arr[i]);
    }
for(int i=0;i<SIZE;i++)
    {
       arr[i]=peek(ptr);
       pop(ptr);
    }
}

    

void init(stk *ptr)
{
    ptr->top = -1;
}
void push(stk *ptr, int data)
{
    ptr->top++;
    ptr->arr[ptr->top] = data;
}
void pop(stk *ptr)
{
    ptr->arr[ptr->top] = 0;
    ptr->top--;
}
int peek(stk *ptr)
{
    return ptr->arr[ptr->top];
}
int full(stk *ptr)
{
    if (ptr->top == SIZE - 1)
        return -1;
    else
        return 0;
}
int empty(stk *ptr)
{
    if (ptr->top == -1)
        return -1;
    else
        return 0;
}
