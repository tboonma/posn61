#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int count;
    struct node *top;
};
struct stack *stk = NULL;
struct node {
    char data;
    struct node *next;
};

void push(int val)
{
    if(stk == NULL)
    {
        stk = (struct stack*)malloc(sizeof(struct stack));
        stk->count=0;
        stk->top = NULL;
    }
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = stk->top;
    stk->top=temp;
    stk->count++;
}

char pop()
{
    if(stk == NULL||stk->count==0)
        return -1;
    int val = stk->top->data;
    struct node *temp = stk->top;
    stk->top = temp->next;
    stk->count--;
    free(temp);
    return val;
}

main()
{
    int n,i,j,num,c=0,d=0;
    char a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        c=0,d=0;
        num=strlen(a);
        for(j=0;j<num;j++)
        {
            if(a[j]=='('||a[j]=='{'||a[j]=='[')
            {
                c++;
                push(a[j]);
            }
            else if(c==0)
            {
                d=1;
                break;
            }
            else if(a[j]==')'&&stk->top->data=='(')
            {
                pop();
                c--;
            }
            else if(a[j]=='}'&&stk->top->data=='{')
            {
                pop();
                c--;
            }
            else if(a[j]==']'&&stk->top->data=='[')
            {
                pop();
                c--;
            }
            else
            {

                d=1;
                break;
            }
        }
        if(c!=0)
            d=1;
        if(d==1)
            printf("no\n");
        else
            printf("yes\n");

        while(1)
        {
            if(c==0)
                break;
             pop();
            c--;
        }

    }
}
