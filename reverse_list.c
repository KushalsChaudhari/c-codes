#include <stdio.h>
#include <stdlib.h>

// int reverse_list(struct list);
struct list
{
    int val;
    struct list *next;
};


void push (struct list **head,int new_data)
{
    struct list* new_head=(struct list*)malloc(sizeof(struct list));
    new_head->val=new_data;
    new_head->next=(*head);
    (*head)=new_head;
}

void reverse_list(struct list **head)
{
struct list* current_node=head;
struct list* prev_node;
struct list* next;


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

    // reverse_list(list);

    return 0;
}


// int reverse_list(struct list)
// {
//     int i ,j,l;
//     struct node *p,*q;
//     l=length();
//     i=0;
//     j=l-1;
//     p=q=root;
//     while (i<j)
//     {
//         int k=0;
//         while(k<j){
//             q=q->link;
//             k++;
//         }
//         int temp;
//         temp=p->val;
//         p->val=q->val;
//         q->val=temp;
//     }
//     i++;
//     j--;

//     p->val=link;
//     q=head;
    
// }