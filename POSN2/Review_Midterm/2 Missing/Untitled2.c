#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;
node *head=NULL;

int add(int n)
{
    int check=1;
    node *temp=(node*)malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    node *current=head;
    if(head==NULL)
        head=temp;
    else if(n < head->data)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        while(current->next!=NULL)
        {
            if(current->next->data > n)
                break;
            else if(current->next->data == n)
                check=0;
            current=current->next;
        }
        if(check)
        {
            printf("#\n");
            temp->next=current->next;
            current->next=temp;
        }
    }
}

void printall(int x)
{
    node *current=head;
    int run=1;
    while(run<=x)
    {
        if(current->data != run)
        {
            printf("%d\n",run);
            if(current->next!=NULL)
                current=current->next;
        }
        run++;
    }
}

main()
{
    int x,y,i,n;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++)
    {
        scanf("%d",&n);
        add(n);
    }
    printall(x);
}
