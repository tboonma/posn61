#include <stdio.h>

main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    int temp=a;
    if(b==0)
        printf("0");
    else if(b<0)
    {
        b=-(b);
        for(i=1;i<b;i++)
            a+=temp;
        a=-(a);
        printf("%d",a);
    }
    else
    {
        for(i=1;i<b;i++)
            a+=temp;
        printf("%d",a);
    }
}
