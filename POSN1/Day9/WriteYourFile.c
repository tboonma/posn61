#include <stdio.h>

void main()
{
    FILE *ptrdata;
    char ch;
    ptrdata=fopen("write.txt","w");
    if (ptrdata != NULL)
    {
        printf("Type words (<enter> to exit) ->");
        while((ch=getchar())!='\n')
            fputc(ch,ptrdata);
        printf("Saved in write.txt");
    }
    else
        printf("Open file Error");
    fclose(ptrdata);
}
