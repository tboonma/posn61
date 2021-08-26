#include <stdio.h>

int main()
{
    int a,b,c,run=1,ans,count=0;
    scanf("%d %d %d",&a,&b,&c);
    while(1)
    {
        ans=run*c;
        if(ans>b)
            break;
        if(ans>=a)
            count++;
        run++;
    }
    printf("%d\n",count);
    run=1;
    while(1)
    {
        ans=run*c;
        if(ans>b)
            break;
        if(ans>=a)
            printf("%d x %d = %d\n",c,run,ans);
        run++;
    }
}
