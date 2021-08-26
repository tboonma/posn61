#include <stdio.h>
#include <stdlib.h>
void insert(int pos, int x);
void printList();

struct node {
    int info;
    struct node *next;
};
struct node *head = NULL;

void add(int x)
{
    struct node *first;
    first=(struct node *)malloc(sizeof(struct node));
    first->info=x;
    first->next=NULL;
    if(head!=NULL)
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=first;
    }
    else
        head=first;
}

void main()
{
    add(10);
    add(20);
    add(30);
}

void insert(int pos, int x)
{
    struct node *first;
    first = (struct node *) malloc( sizeof (struct node) );
    first -> info = x;
    first -> next = NULL;
    if(head != NULL)
    {
        struct *temp = head;
        int c;
        if(pos == 0)
        {
            first->next = head;
            head = first;
        }
        else
        {
            for(c=0; c<pos-1 ;c++)
            temp = temp->next;
            first->next = temp->next;
            temp->next = first;
        }
    }
    else
        head = first;
}

void printList()
{
    struct node *temp;
    temp = head; // head
    while(temp->next != NULL)
    {
        printf( "%d" , temp->info);
        temp = temp->next;
    }
}

struct node* delete(int key)
{
    struct node *temp = head;
    struct node *previous = NULL;
if(head == NULL)
return NULL;
while(temp->info != key) {
if(temp->next == NULL)
return NULL;
else {
previous = temp;
temp = temp->next;
}
}
if(temp == head)
head = head->next;
else
{ previous->next = temp->next;
free(temp);
}
return temp;
}
