#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char word[10000];
    struct node *next;
}node;
node *head=NULL;

void i()
{
    node *front=(node*)malloc(sizeof(node));
    char a[10000];
    int i;
    for(i=0;i<10000;i++)
        a[i]=NULL;
    scanf(" %s",&a);
    strcpy(front->word,a);
    front->next=NULL;
    if(head==NULL)
        head=front;
    else
    {
        front->next=head;
        head=front;
    }
}

void a()
{
    node *front=(node*)malloc(sizeof(node));
    char a[10000];
    int i;
    for(i=0;i<10000;i++)
        a[i]=NULL;
    scanf(" %s",&a);
    strcpy(front->word,a);
    front->next=NULL;
    node *current=head;
    if(head==NULL)
        head=front;
    else
    {
        while(current->next!=NULL)
            current=current->next;
        front->next=current->next;
        current->next=front;
    }

}

void d()
{
    char a[10000],temp=1;
    int i;
    for(i=0;i<10000;i++)
        a[i]=NULL;
    scanf(" %s",&a);
    node *front,*back,*run;
    front=head;
    run=head;
    while(front!=NULL)
    {
        temp=1;
        if(!strcmp(a,front->word))
        {
            if(front==head)
            {
                if(head->next==NULL)
                {
                    //printf("*");
                    head=NULL;
                    free(head);
                    //front=front->next;
                }
                else
                {
                    //printf("#");
                    head=head->next;
                    front=NULL;
                    free(front);
                    front=head;
                    temp=0;
                }
            }
            else if(front->next!=NULL)
            {
                //printf("3");
                while(run->next!=front)
                    run=run->next;
                run->next=front->next;
                front=NULL;
                free(front);
                front=run;
                //front=front->next;
            }
            else
            {
                //printf("4");
                front=NULL;
                free(front);
                back->next=NULL;
                //front=front->next;
                continue;
            }
        }
        back=front;
        if(temp)
            front=front->next;
    }

}

void x()
{
    node *front=head;
    while(front!=NULL)
    {
        head=head->next;
        front=NULL;
        free(front);
        front=head;
    }
}

void p()
{
    node* current=head;
    printf("[ ");
    while(current!=NULL)
    {
        printf("%s ",current->word);
        current=current->next;
    }
    printf("]\n");
}

int main()
{
    char z;
    while(1)
    {
        printf("input>");
        scanf(" %c",&z);
        if(z=='i')
            i();
        else if(z=='a')
            a();
        else if(z=='d')
            d();
        else if(z=='x')
            x();
        else if(z=='p')
            p();
        else if(z=='q')
            break;
    }
}
