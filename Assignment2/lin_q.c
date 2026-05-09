#include <stdio.h>
#include <unistd.h>
#define SIZE 6
typedef struct linear_queue
{
    int rear, front;
    int arr[SIZE];
} queue;
void init(queue *ptr);
void enque(queue *ptr, int data);
void deque(queue *ptr);
int peek(queue *ptr);
int full(queue *ptr);
int empty(queue *ptr);

int main()
{
    queue ss;
    init(&ss);
    int choice, data;
    do
    {

        printf("\n0.exit\n1.enque\n2.deque\n3.peek\n4.full\n5.empty\n");

        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exiting...\n");
            _exit(0);
            break;
        case 1:
            if (full(&ss))
            {
                printf("Queue is full");
            }
            else
            {
                printf("Enter data to enque:");
                scanf("%d", &data);
                enque(&ss, data);
            }
            break;

        case 2:
            if (empty(&ss))
            {
                printf("Queue is empty\n");
            }
            else
            {
                int val = peek(&ss);
                deque(&ss);
                printf("dequeed value: %d\n", val);
            }
            break;

        case 3:
            if (empty(&ss))
            {
                printf("Queue is empty\n");
            }
            else
            {
                int val = peek(&ss);
                printf("Front value: %d\n", val);
            }
            break;
        case 4:
            if (full(&ss))
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
            break;

        case 5:
            if (empty(&ss))
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not empty\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

    } while (choice != 0);

    return 0;
}

void init(queue *ptr)
{
    ptr->rear = ptr->front = -1;
}
void enque(queue *ptr, int data)
{
    ptr->rear++;
    ptr->arr[ptr->rear] = data;
    if (ptr->front == -1)
        ptr->front = 0;
}
void deque(queue *ptr)
{
    ptr->arr[ptr->front] = 0;
    ptr->front++;
}
int peek(queue *ptr)
{
    return ptr->arr[ptr->front];
}
int full(queue *ptr)
{
    if (ptr->rear == SIZE - 1)
        return -1;
    else
        return 0;
}
int empty(queue *ptr)
{
    if (ptr->front == -1)
        return -1;
    else if (ptr->front > ptr->rear)
        return -1;
    else
        return 0;
}
