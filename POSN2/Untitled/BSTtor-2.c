#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int floor;
    struct node *right;
    struct node *left;
    struct node *parent;
}node;
node *head=NULL ;


newnode(int x)
{
    node *temp;
    temp=(node *)malloc(sizeof(node ));
    temp->data = x ;
    temp->floor = 0 ;
    temp->left = NULL ;
    temp->right = NULL ;
    temp->parent = NULL ;
    return temp ;
}

int insert(int x)
{
    int cou=0;
    node *temp;
    temp=newnode(x) ;
    node *run ;
    run=head;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(1)
        {
            cou++;
            if(run->data > x )
            {
                if(run->left==NULL)
                {
                    run->left=temp;
                    temp->parent=run;
                    temp->floor=cou;
                    break;
                }
                else
                {
                    run=run->left;
                }
            }
            else
            {
                if(run->right==NULL)
                {
                    run->right=temp;
                    temp->parent=run;
                    temp->floor=cou;
                    break;
                }
                else
                {
                    run=run->right;
                }
            }
        }
    }
}


void print(node *run)
{
    if (run != NULL)
    {
        print(run->left);
        printf("Node : %d, ", run->data);
        if (run->parent == NULL)
          printf("Parent : NULL \n");
        else
          printf("Parent : %d \n", run->parent->data);
        print(run->right);
    }
}

main()
{
    int i,n;
    for(i=0;i<4;i++)
    {
        scanf("%d",&n);
        insert(n);
    }
    print(head);
}

