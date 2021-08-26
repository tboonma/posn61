/*
LANG: C
COMPILER: WCB
*/
#include <stdio.h>

main()
{
    int n,i,j,temp,e=0,max=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    if(n==1)
        printf("%d 1",a[0]);
    else{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        temp=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                temp++;
            if(temp>=max)
                    max=temp;
        }
    }
    for(i=0;i<n-1;i++)
    {
        temp=1;
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
                temp++;
            if(temp==max)
            {
                e=b[i];
            }
            if(max==1)
                e=n;
        }
    }
    printf("%d %d",e,max);
    }
}
