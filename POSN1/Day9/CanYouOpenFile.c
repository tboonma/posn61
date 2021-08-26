#include <stdio.h>
void main()
{
    FILE *ptrData;
    if((ptrData=fopen("student.txt","r"))!=NULL)
    {
        printf("Open file Complete !!");
        fclose(ptrData);
    }
    else
        printf("Cannot Open file");
}
