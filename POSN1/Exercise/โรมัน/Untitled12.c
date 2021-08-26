#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    scanf("%s",&a);
    int num,i,j,sum=0;
    num=strlen(a);
    int b[num];
    for(i=0;i<num;i++)
        if(a[i]>=97&&a[i]<=122)
            a[i]-=32;
    for(i=0;i<num;i++)
    {
        if(a[i]=='I')
            b[i]=1;
        else if(a[i]=='V')
            b[i]=5;
        else if(a[i]=='X')
            b[i]=10;
        else if(a[i]=='L')
            b[i]=50;
        else if(a[i]=='C')
            b[i]=100;
        else if(a[i]=='D')
            b[i]=500;
        else if(a[i]=='M')
            b[i]=1000;
    }
    for(i=0;i<num-1;i++)
    {
        if(b[i]<b[i+1])
        {
            b[i+1]=b[i+1]-b[i];
            b[i]=0;
        }
    }
    for(i=0;i<num;i++)
        sum+=b[i];
    printf("%d",sum);
}
