/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>

main()
{
    int month[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,31},d,m,n,i;
    scanf("%d %d %d",&d,&m,&n);
    int a[13];
    if(n==1)
        d=d+5;
    else if(n==2)
        d=d+4;
    else if(n==3)
        d=d+3;
    else if(n==4)
        d=d+2;
    else if(n==5)
        d=d+1;
    else if(n==6)
        d=d+0;
    else if(n==7)
        d=d+6;
    i=m;
    a[m]=d;
    while(1)
    {
        if(i==13)
            break;
        if(a[i]>month[i])
        {
            a[i+1]=a[i]-month[i];
            i++;
        }
        else
        {
            a[i]+=7;
        }
    }
    printf("%d",a[i]);
}
