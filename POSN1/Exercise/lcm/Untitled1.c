#include <stdio.h>
int x,y,temp,x1,ans;
main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=(a*b)/gcd(a,b);
    printf("%d",ans);
}

gcd(a,b)
{
    if(a==b)
        return a;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    x1=a%b;
    y=a/b;
    if(x1==0)
        return x;
    else
    {
        x=x1;
        gcd(x,b);
    }
}
