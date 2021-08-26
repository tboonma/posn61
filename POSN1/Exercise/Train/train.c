#include <stdio.h>

main()
{
    int x,y,z,i,j,k,l,sum=0;
    scanf("%d %d %d",&x,&y,&z);
    int a[y][4],station[x],count[y];
    for(i=0;i<y;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<x;i++)
        station[i]=z;
    while(1)
    {
        l=0;
    for(i=0;i<y;i++)
    {
        for(j=a[i][1];j<a[i][2];j++)
        {
            if(station[j]-a[i][3]>=0)
                station[j]-=a[i][3];
            else
            {
                for(k=a[i][1];k<j;k++)
                    station[k]+=a[i][3];
                count[l]=i+1;
                l++;
                break;
            }
        }
    }
    if(i==y)
        break;
    }
    for(i=0;i<l;i++)
        sum+=count[i];
    printf("%d",sum);
}
