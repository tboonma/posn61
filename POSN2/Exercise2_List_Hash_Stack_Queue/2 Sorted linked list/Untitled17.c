#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;
node *head = NULL;

void check()
{
    node* current=head;
    printf("[ ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("]\n");
}

void add(int value)
{
    node *front=(node*)malloc(sizeof(node));
    front->data=value;
    front->next=NULL;
    node *current=head;
    if(head==NULL)
        head=front;
    else if(current->data > value)
    {
        front->next=head;
        head=front;
    }
    else
    {
        while(current->next != NULL)
        {
            if(current->next->data > value)
                break;
            current=current->next;
        }
        front->next=current->next;
        current->next=front;
    }

}

void del(int value)
{
    int n=0;
    node *run;
    if(head->data==value)
    {
        while(head->data==value&&head->next!=NULL)
        {
            head=head->next;
        }
        if(head->data==value&&head->next==NULL)
        {
            head=NULL;
        }
    }
    else
    {
        run=head;
        while(run->data!=value)
        {
            if(run->next==NULL)
                return;
            run=run->next;
        }

        node *start=head;
        run=head;

        while(start->data!=value)
        {
            start=start->next;
        }
        while(run->next!=start)
        {
            run=run->next;
        }
        node *stop=start;
        while(stop->data==value&&stop->next!=NULL)
        {
            stop=stop->next;
        }

        if(start==stop&&stop!=head)
        {
            run->next=NULL;
        }
        else if(stop->data==value&&stop->next==NULL)
        {
            run->next=NULL;
        }
        else
            run->next=stop;
    }

}

int main()
{
    int i;
    char x;
    while(1)
    {
        printf("input>");
        scanf(" %c",&x);
        if(x=='p')
            check();
        else if(x=='i')
        {
            scanf(" %d",&i);
            add(i);
        }
        else if(x=='d')
        {
            scanf(" %d",&i);
            if(head!=NULL)
                del(i);
        }
        else if(x=='q')
            break;
    }
}
