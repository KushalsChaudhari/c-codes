#include <stdio.h>
#include <stdlib.h>


struct list
{
    int val;
    struct list *next;
};
// struct list *head;

void push (struct list **head,int new_data)
{
    struct list* new_head=(struct list*)malloc(sizeof(struct list));
    new_head->val=new_data;
    new_head->next=(*head);
    (*head)=new_head;
}

void printlist(struct list *n)
{
    
   
    while (n != NULL)
    {
        printf("%d ->", n->val);
        n = n->next;
    }
}


int main()
{
    struct list *head;
    struct list *one = NULL;
    struct list *two = NULL;
    struct list *three = NULL;
    struct list *four = NULL;
    struct list *five = NULL;

    one = (struct list *)malloc(sizeof(struct list));
    two =(struct list *) malloc(sizeof(struct list));
    three = (struct list *)malloc(sizeof(struct list));
    four = (struct list *)malloc(sizeof(struct list));
    five = (struct list *)malloc(sizeof(struct list));

    one->val = 1;
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 5;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next =five;
    five->next = NULL;

    head = one;
    push(&head,0);
    push(&head,1);
    printlist(head);

    return 0;
}
