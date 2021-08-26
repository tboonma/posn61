#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
};
struct node *head = NULL;

void add(int x)
{
    struct node *first;
    first=(struct node *)malloc(sizeof(struct node));
    first -> info = x;
    first -> next = NULL;
    if(head != NULL)
    {
        struct node *temp = head;
        while(temp->next != NULL)
        temp = temp->next;
        temp->next = first;
    }
    else
        head = first;
}

void insert(int pos, int x)
{
    struct node *first;
    first = (struct node *) malloc( sizeof (struct node) );
    first -> info = x;
    first -> next = NULL;
    if(head != NULL)
    {
        struct node *temp = head;
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

struct node* delete(int key)
{
    struct node *temp = head;
    struct node *previous = NULL;
    if(head == NULL)
    return NULL;
    while(temp->info != key)
    {
        if(temp->next == NULL)
            return NULL;
        else
        {
            previous = temp;
            temp = temp->next;
        }
    }
    if(temp == head)
        head = head->next;
    else
    {
        previous->next = temp->next;
        free(temp);
    }
    return temp;
}

void printList()
{
    struct node *temp;
    temp=head;
    while(temp->next != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("%d ", temp->info);
}

main()
{
    int n,a,x,pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            scanf("%d",&x);
            add(x);
        }
        else if(a==2)
        {
            scanf("%d %d",&pos,&x);
            insert(pos,x);
        }
        else if(a==3)
        {
            scanf("%d",&x);
            delete(x);
        }
    }
    printList();
}
