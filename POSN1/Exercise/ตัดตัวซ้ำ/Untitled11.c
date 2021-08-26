#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    gets(a);
    int i,j,k,num,temp;
    num=strlen(a);
    for(i=0;i<num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[i]>=97&&a[i]<=122)
            {
                if(a[i]==a[i-j])
                    a[i]=' ';
                else if(a[i]-32==a[i-j])
                    a[i]=' ';
            }
            else if(a[i]>=65&&a[i]<=90)
            {
                if(a[i]==a[i-j])
                    a[i]=' ';
                else if(a[i]+32==a[i-j])
                    a[i]=' ';
            }
        }
    }
    for(i=0;i<num;i++)
    {
        if(a[i]>=97&&a[i]<=122)
            printf("%c",a[i]);
        else if(a[i]>=65&&a[i]<=90)
            printf("%c",a[i]);
    }
}
