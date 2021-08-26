#include <stdio.h>

main()
{
    int a,i,b,min=99999,max=-99999;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>max)
            max=b;
        if(b<min)
            min=b;
    }
    printf("%d %d",min,max);
}
