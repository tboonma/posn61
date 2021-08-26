#include <stdio.h>

int main()
{
    int x,y,i,j,k;
    scanf("%d %d",&x,&y);
    char a[x][y];
    int b[y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);
    for(i=0;i<y;i++)
    {
        for(k=0;k<b[i];k++)
        {
            for(j=0;j<=x;j++)
            {
                if(a[j][i]=='O'||a[j][i]=='#'||j==x)
                {
                    a[j-1][i]='#';
                    break;
                }
            }
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
