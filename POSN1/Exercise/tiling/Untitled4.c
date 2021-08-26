#include <stdio.h>

main()
{
    int n,i,j,a,b,temp,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        x=sqrt(a);
        y=(b/4)+1;
        if(x+2>y)
            printf("%d\n",y);
        else
            printf("%d\n",x+2);
    }
}
