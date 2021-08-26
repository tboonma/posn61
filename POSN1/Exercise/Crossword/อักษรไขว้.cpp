/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>
#include <string.h>

main()
{
    char a[11],b[11];
    int numa,numb,i,j,pa,pb;
    scanf("%s",&a);
    scanf("%s",&b);
    numa=strlen(a);
    numb=strlen(b);
    for(i=0;i<numa;i++)
    {
        for(j=0;j<numb;j++)
        {
            if(a[i]==b[j])
            {
                pa=i+1;
                pb=j+1;
                break;
            }
        }
    }
    for(i=0;i<numb;i++)
    {
        if(i==pb-1)
        {
            for(j=0;j<numa;j++)
                printf("%c",a[j]);
        }
        if(i!=pb-1)
        {
            for(j=1;j<pa;j++)
                printf(" ");
            printf("%c",b[i]);
        }
        printf("\n");
    }

}
