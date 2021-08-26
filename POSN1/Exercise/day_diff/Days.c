#include <stdio.h>

main()
{
    int a,b,c,d,day,e,f,g,i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b==d)
        day=c-a+1;
    else
    {
        if(b==2)
            e=28-a;
        else
            e=30-a+1;
        f=c+1;
        g=(d-b-1)*30;
        day=e+f+g;
        for(i=b+1;i<d;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                day=day+1;
            else if(i==2)
                day=day-2;
        }
    }
    printf("%d",day);
}
