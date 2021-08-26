#include <stdio.h>

main()
{
    int w,x,y,z,i,j,k;
    scanf("%d %d",&w,&x);
    int a[w][x];
    for(i=0;i<w;i++)
        for(j=0;j<x;j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d",&y,&z);
    int b[y][z];
    for(i=0;i<y;i++)
        for(j=0;j<z;j++)
            scanf("%d",&b[i][j]);
    int c[w][z];
    for(i=0;i<w;i++)
        for(j=0;j<z;j++)
            c[i][j]=0;
    for(k=0;k<x;k++)
    {
        for(i=0;i<z;i++)
        {
            for(j=0;j<w;j++)
                c[j][i]+=a[j][k]*b[k][i];
        }
    }
    for(i=0;i<w;i++)
    {
        for(j=0;j<z;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
