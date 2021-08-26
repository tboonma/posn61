#include <stdio.h>
int x,y,z,i,j,k,b;
main()
{
    char a[10];
    scanf("%s",&a);
    if(a[0]=='t')
        tri();
    else if(a[0]=='r')
        rect();

}
void rect()
{
    scanf("%d %d %d",&x,&y,&z);

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=z;j++)
        {
            for(k=1;k<=y;k++)
                printf("*");
                printf("\n");
        }
        if(i!=x)
            printf("\n");
    }
}
void tri()
{
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(k=0;k<y;k++)
        {
            b=(2*k)+1;
            for(j=k+1;j<y;j++)
                printf(" ");
            for(j=0;j<b;j++)
                printf("*");
            printf("\n");
        }
        if(i!=x-1)
            printf("\n");
    }
}
