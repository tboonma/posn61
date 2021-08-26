#include <stdio.h>
void main()
{
    FILE *ptrdata;
    ptrdata=fopen("write2.txt","w");
    if(ptrdata!=NULL)
    {
        fprintf(ptrdata,"Hello class %d",1);
        printf("Write Complete!!");
    }
    else
        printf("Open file Error");
    fclose(ptrdata);
}
