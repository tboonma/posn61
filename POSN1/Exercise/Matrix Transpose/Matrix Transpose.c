#include <stdio.h>

main()
{
    int x,y,i,j,temp;
    scanf("%d %d",&x,&y);
    int a[x][y],b[y][x];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
}
