#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    int floor;
    struct node *left;
    struct node *right;
    struct node *parent;
}node;
node *root=NULL;

int insert(int value)
{
    int count=0;
    node *temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    temp->parent=NULL;
    temp->floor=0;
    node *run=root;
    if(root==NULL)
        root=temp;
    else
    {
        while(1)
        {
            count++;
            if(run->data > value)
            {
                if(run->left==NULL)
                {
                    run->left=temp;
                    temp->parent=run;
                    temp->floor=count;
                    break;
                }
                else
                    run=run->left;
            }
            else
            {
                if(run->right==NULL)
                {
                    run->right=temp;
                    temp->parent=run;
                    temp->floor=count;
                    break;
                }
                else
                    run=run->right;
            }
        }
    }
}

printin(node *run)
{
    /*if(run->left!=NULL)
        printin(run->left);
    for(int i=0;i<run->floor;i++)
        printf(" ");
    printf("%d\n",run->data);
    if(run->right!=NULL)
        printin(run->right);*/
    int i;
    if(run->right!=NULL)
    {
        printin(run->right);
    }
    for(i=0;i<run->floor;i++)
    {
        printf("  ");
    }
     printf("%d\n",run->data);

    if(run->left!=NULL)
    {
        printin(run->left);
    }
}

printpre(node *run)
{
    for(int i=0;i<run->floor;i++)
        printf(" ");
    printf("%d\n",run->data);
    if(run->left!=NULL)
        printpre(run->left);
    if(run->right!=NULL)
        printpre(run->right);
}

printpost(node *run)
{
    if(run->left!=NULL)
        printpost(run->left);
    if(run->right!=NULL)
        printpost(run->right);
    for(int i=0;i<run->floor;i++)
        printf(" ");
    printf("%d\n",run->data);
}
int main()
{
    int newint,i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&newint);
        insert(newint);
    }
    printf("Print In-Order :\n");
    printin(root);
    printf("Print Pre-Order :\n");
    printpre(root);
    printf("Print Post-Order :\n");
    printpost(root);
}
