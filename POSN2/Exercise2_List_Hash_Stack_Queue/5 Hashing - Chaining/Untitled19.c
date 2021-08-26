#include <stdio.h>
#include <stdlib.h>

#define SIZE  97
#define PRIME 97

typedef struct nodeType {
  int   item;
  struct nodeType *next;
} Node;

void initTable(Node** table)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        table[i]=NULL;
    }
}

int hash(int key)
{
    return key%SIZE;
}

void addHT (Node** table, int value)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->item=value;
    int pos = hash(value);
    Node* first=table[pos];
    temp->next=first;
    table[pos]=temp;
}

void print_table(Node** table)
{
    Node* current;
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("KEY %2d: ",i);
        current=table[i];
        while(current != NULL)
        {
            printf("%d ",current->item);
            current=current->next;
        }
        printf("\n");
    }
}

int main()
{
    char x;
    int i;
    Node* table[SIZE];
    initTable(table);
    while(1)
    {
        printf("input>");
        scanf(" %c",&x);
        if(x=='q')
            break;
        else if(x=='a')
        {
            scanf(" %d",&i);
            addHT(table,i);
        }
        else if(x=='p')
            print_table(table);
    }
}
