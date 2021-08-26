#include <stdio.h>

main()
{
    char a[101];
    int i,j;
    gets(a);
    for(i=0;i<100;i++)
        if(a[i]=='\0')
            break;
    for(j=0;j<i;j++)
        if(a[j]>=97&&a[j]<=122)
            a[j]=a[j]-32;
    for(j=0;j<i;j++)
    {
        if(a[j]=='L')
        {
            if(a[j+1]=='O')
            {
                if(a[j+2]=='V')
                {
                    if(a[j+3]=='E')
                    {
                        printf("%d",j);
                        break;
                    }
                }
            }
        }
        else if(j==i-1)
            printf("SINGLE");
    }
}
