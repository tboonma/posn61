#include <stdio.h>
int i,sum,temp,d,j;
main()
{
    scanf("%d",&d);
    pl(d);
}

int pl()
{
    int x,y,z;
    for(j=1;j<=d;j++)
    {
    scanf("%d %d %d",&x,&y,&z);
    for(i=2;i<z;i++)
    {
        sum=x+y;
        temp=y;
        y=sum;
        x=temp;
    }
    printf("%d\n",sum);
    }
}
