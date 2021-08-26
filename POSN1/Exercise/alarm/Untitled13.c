#include <stdio.h>

main()
{
    int a,b,c,d,ans1,ans2;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    ans1=a+c;
    ans2=b+d;
    while(ans2>=60)
    {
        ans1++;
        ans2=ans2-60;
    }
    while(ans1>=24)
        ans1=ans1-24;
    printf("%d %d",ans1,ans2);
}
