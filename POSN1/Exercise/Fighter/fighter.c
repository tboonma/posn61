#include <stdio.h>

main()
{
    int i,j,a[5],b[5],temp,w=0,d=0,l=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=1;i<5;i++)
    {
        if(a[i]>=b[i-1])
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>b[i])
            w++;
        else if(a[i]==b[i])
            d++;
        else
            l++;
    }
    printf("%d %d %d",w,d,l);
}
