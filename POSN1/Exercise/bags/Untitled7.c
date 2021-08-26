#include <stdio.h>

main()
{
    int a,b,c,temp=0,bag=1,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&c);
        temp+=c;
        if(temp>b)
        {
            bag++;
            temp=c;
        }
    }
    printf("%d",bag);
}
