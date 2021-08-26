#include <stdio.h>
#include <stdlib.h>
#define SIZE 31

typedef struct _node {
    int data;
    struct _node* next;
} Node;

void initTable(Node** table)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        table[i]=NULL;
    }
}
void print_table(Node** table)
{
    Node* current;
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("[%d]: ",i);
        current=table[i];
        while(current != NULL)
        {
            printf("%5d ",current->data);
            current=current->next;
        }
        printf("\n");
    }
}
int hash(int key)
{
    return key % SIZE;
}
void addHT (Node** table, int value)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=value;
    int pos = hash(value);
    Node* first=table[pos];
    temp->next=first;
    table[pos]=temp;
}
int main()
{
    int i;
    Node* table[SIZE];
    initTable(table);
    for(i=0;i<1000;i++)
        addHT(table,i);
    print_table(table);

}
