#include <stdio.h>

main()
{
    int x,y,temp=0,i,j;
    scanf("%d %d",&x,&y);
    int a[x],b[y];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i]==b[j])
                temp++;
        }
    }
    printf("%d",temp);
}
