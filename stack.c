#include <stdio.h>

int push(int stack[], int val);
int isfull();
int pop(int stack[], int val);
int isempty();
// void traverse (int stack[]);
#define size 4
int top = -1;

int main()
{
    int stack[size];
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    pop(stack, 4);
    pop(stack, 3);
    pop(stack, 2);
    pop(stack, 1);
    pop(stack, 0);

    // traverse (stack);
    return 0;
}

int push(int stack[], int val)
{
    if (isfull())
    {
        printf("stack is full");
    }
    else
    {
        top++;
        printf("%d stack value inserted\n", val);
    }
}

int isfull()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(int stack[], int val)
{
    if (isempty())
    {
        printf("stack is empty");
    }
    else
    {
        top--;
        printf("%d stack element deleted\n", val);
    }
}

int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// void traverse (int stack[])
// {
//     if(top==-1){
//         printf("stack is empty");
//     }
//     else{
//         for (int i=0; i<top; i++)
//         {
//             printf("\nstack elements are %d\n",stack[i]);        }
//     }
// }