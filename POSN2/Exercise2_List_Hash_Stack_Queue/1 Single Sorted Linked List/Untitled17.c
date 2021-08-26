#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;
node *head = NULL;

void printList(node *pList)
{
    node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

}
int insertNode(int value)
{
    node *first=(node*)malloc(sizeof(node));
    first->data=value;
    first->next=NULL;
    node *current=head;
    if(head==NULL)
        head=first;
    else if(current->data>value)
    {
        first->next=head;
        head=first;
    }
    else
    {
        while(current->next!=NULL)
        {
            if(current->next->data > value)
                break;
            current=current->next;
        }
        first->next=current->next;
        current->next=first;
    }

}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++)
    {
        scanf("%d",&value);

        insertNode(value);
        printList(pList);
    }


}
