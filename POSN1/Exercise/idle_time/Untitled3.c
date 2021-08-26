#include <stdio.h>

main()
{
    int a[480],n,i,j,b,c,sum=0;
    scanf("%d",&n);
    for(i=0;i<480;i++)
        a[i]=1;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&b,&c);
        for(j=b;j<=c;j++)
            a[j]=0;
    }
    for(i=0;i<480;i++)
        sum+=a[i];
    printf("%d",sum);
}
