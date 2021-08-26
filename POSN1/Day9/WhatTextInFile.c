#include <stdio.h>
void main()
{
    FILE *ptrData;
    char ch;
    ptrData=fopen("student.txt","r");
    if (ptrData!=NULL)
    {
        while ((ch=fgetc(ptrData))!=EOF)
            printf("%c",ch);
    }
    else
        printf("Open file Error");
    fclose(ptrData);

}
