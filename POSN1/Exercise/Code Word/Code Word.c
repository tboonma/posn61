#include <stdio.h>

main()
{
    int n,i,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        if(b==1)
            printf("Attack ");
        if(b==2)
            printf("Defend ");
        if(b==3)
            printf("Capture ");
        if(b==4)
            printf("Stop ");
        if(b==5)
            printf("Pray ");
        if(b==6)
            printf("Watch ");
        if(b==7)
            printf("Enemy ");
        if(b==8)
            printf("Friend ");
        if(b==9)
            printf("Creep ");
        if(b==10)
            printf("Base ");
        if(b==11)
            printf("Carry ");
        if(b==12)
            printf("Lane ");
        if(b==13)
            printf("Tower ");
        if(b==14)
            printf("Minion ");
    }
}
