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
    printf("S:[ ");
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
    node *current=head;
    node *back;
    if(head!=NULL)
    {
        while(current->next!=NULL)
        {
            back=current;
            current=current->next;
        }
        printf("%d\n",current->num);
        if(current==head)
        {
            head=NULL;
        }
        else
        {
            current=NULL;
            back->next=NULL;
        }
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
        if(x=='u')
        {
            scanf(" %d",&i);
            add(i);
        }
        else if(x=='p')
        {
            print();
        }
        else if(x=='o')
        {
            del();
        }
        else if(x=='q')
            break;
    }
}
