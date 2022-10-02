#include<stdio.h>
#define size 4

int insert(int queue[],int rear);
int delete(int queue[],int rear);
int disp(int queue[]);
int front=0 ,rear=0;

int main()
{
    int queue[size];

    insert(queue,1);
    insert(queue,2);
    insert(queue,3);
    insert(queue,4);
    insert(queue,5);
    insert(queue,6);

    delete(queue,1);
    // delete(queue,2);
    // delete(queue,3);
    // delete(queue,4);
    // delete(queue,5);

    disp(queue);

    return 0;
}

int insert(int queue[],int rear)
{
    if (size==rear-1)
    {
        printf("Queue is Full");
    }
    else
    {

        printf("%d ele is inserted \n",rear);
        rear++;
    }
}

int delete(int queue[],int rear)
{
    if (front==rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d ele is deleted\n",rear);
        rear--;
    }
    
}

int disp(int queue[])
{
    for(int i=0; i<size; i++)
    {
        printf("%d ele of que is\n",rear);
    }
}

