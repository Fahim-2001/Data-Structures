#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5

int Queue[CAPACITY];
int front = 0, rear = -1, totalItems = 0;

bool isFull()
{
    if (totalItems == CAPACITY)
        return true;
    return false;
}

bool isEmpty()
{
    if (totalItems == 0)
        return true;
    return false;
}

void showQueue()
{
    printf("The queue is : ");
    for (int i = 0; i < CAPACITY; i++)
        printf("%d ", Queue[i]);
}

void enqueue(int item)
{
    if (isFull())
    {
        printf("Sorry %d is unable to add. Queue is full!\n", item);
        return;
    }
    else
    {
        rear = (rear + 1) % CAPACITY;
        Queue[rear] = item;
        totalItems++;
        printf("--> %d is Added to the Queue.\n", item);
    }
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Dequeue failed! The Queue is empty.\n");
        return -1;
    }
    else
    {
        int frontItem = Queue[front];
        Queue[front] = 0;
        front = (front + 1) % CAPACITY;
        totalItems--;
        return frontItem;
    }
}

int main()
{
    printf("--------Welcome to our Queue---------\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printf("<-- %d is removed from the queue\n", dequeue());
    enqueue(60);
    printf("<-- %d is removed from the queue\n", dequeue());
    enqueue(70);
    printf("<-- %d is removed from the queue\n", dequeue());
    enqueue(80);
    showQueue();
}