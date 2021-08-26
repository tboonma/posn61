#include <stdio.h>
#include <string.h>

void main()
{
    FILE *ptrData;
    char visitor_name[50];
    if((ptrData=fopen("visitor.txt","w"))!=NULL)
    {
        printf("Type Visitor name and press enter ->");
        scanf("%s",visitor_name);
        fputs(visitor_name,ptrData);
    }
    else
        printf("\nOpen file not Complete\n");
    fclose(ptrData);
}
