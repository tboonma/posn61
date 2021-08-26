#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}node;
node *head=NULL;

void print()
{
    node *front=head;
    printf("Q:[ ");
    while(front!=NULL)
    {
        printf("%d ",front->num);
        front=front->next;
    }
    printf("]\n");
}

int add(int i)
{
    int count=0;
    node *front=(node*)malloc(sizeof(node));
    front->num=i;
    front->next=NULL;
    node *current=head;
    if(head==NULL)
        head=front;
    else
    {
        while(current->next!=NULL)
        {
            current=current->next;
            count++;
        }
        if(count<99)
        {
            front->next=current->next;
            current->next=front;
        }
    }
}

int del()
{
    node *front=head;

    if(head!=NULL)
    {
        node *ffront=front->next;
        printf("%d\n",head->num);
        front=NULL;
        head=ffront;
    }
}

int main()
{
    char x;
    int i;
    while(1)
    {
        printf("input>");
        scanf(" %c",&x);
        if(x=='i')
        {
            scanf(" %d",&i);
            add(i);
        }
        else if(x=='p')
        {
            print();
        }
        else if(x=='d')
        {
            del();
        }
        else if(x=='q')
            break;
    }
}
