#include <stdio.h>
#include <string.h>

main()
{
    int n,num,i,j,k=0,num1;
    scanf("%d ",&n);
    char a[1000],b[1000];
    gets(a);
    num=strlen(a);
    for(i=0;i<1000;i++)
        b[i]=NULL;
    for(i=0;i<num;i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            b[k]=a[i]-32;
            k++;
        }
        else if(a[i]>=65&&a[i]<=90)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<1000;i++)
        a[i]=NULL;
    num=strlen(b);
    if(n==1)
    {
        num1=num/2;
        if(num%2!=0)
            num1++;
        //else if(num%2==0)
        k=0;
        for(i=0;i<num1;i++)
        {
            if(b[num1-i-1]!=NULL)
            {
                a[k]=b[num1-i-1];
                b[num1-i-1]=NULL;
                k++;
            }
            if(b[num1+i]!=NULL)
            {
                a[k]=b[num1+i];
                b[num1+i]=NULL;
                k++;
            }
        }
        for(i=0;i<num;i++)
            printf("%c",a[i]);
    }
    else if(n==2)
    {
        for(i=num-2;i>=0;i-=2)
        {
            if(b[i]!=NULL)
            {
                printf("%c",b[i]);
                b[i]=NULL;
            }
        }
        for(i=0;i<num;i+=2)
        {
            if(b[i]==NULL)
                i++;
            printf("%c",b[i]);
        }
    }
}
