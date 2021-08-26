#include <stdio.h>
void main()
{
    FILE *ptrSource;
    FILE *ptrTarget;
    char c;
    if((ptrSource=fopen("Source.txt","r"))!=NULL)
    {
        if((ptrTarget=fopen("Target.txt","w"))!=NULL)
        {
            while(! feof(ptrSource))                                /* check EOF */
            {
                c=fgetc(ptrSource);
                if(ferror(ptrSource)!=0)                            /* check write data */
                {
                    printf("Error Read data from source file\n");
                    return;
                }
                fputc(c,ptrTarget);                                 /* write to target file */
                if(ferror(ptrTarget)!=0)                            /* check write data */
                {
                    printf("Error Writing to Target file\n");
                    return;
                }
            }                                                       /* end while */
        }                                                           /* end if open Target file */
        else
            printf("Can't open Target file");
    }                                                               /* end if open Source file */
    else
        printf("Can't open Source file");
    fclose(ptrSource);
    fclose(ptrTarget);
}                                                                   /* end main */
