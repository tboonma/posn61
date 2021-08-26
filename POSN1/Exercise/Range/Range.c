#include <stdio.h>

main()
{
    int a,min=99999,max=-99999;
    while(a!=1001)
    {
        scanf("%d",&a);
        if(a!=1001)
        {
            if(a>max)
                max=a;
            else if(a<min)
                min=a;
        }
    }
    printf("%d",max-min);
}
