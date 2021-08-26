#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} node;
node *head = NULL;

void pq(node* front)
{
    node* current=front;
    while(current != NULL)
    {
        printf("%5d ", current->data);
        current=current->next;
    }
    printf("\n");
}

void enqueue (node** front, node** rear, int value)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=value;
    new_node->prev=NULL;
    new_node->next=*front;
    if(*front==NULL)
    {
        *rear=new_node;
    }
    else
    {
        (*front)->prev=new_node;
    }
    *front=new_node;
}

int main()
{
    node* front = NULL;
    node* rear = NULL;
    enqueue(&front,&rear,55555);
    enqueue(&front,&rear,66666);
    enqueue(&front,&rear,77777);
    pq(front);
}
