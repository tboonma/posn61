#include <stdio.h>

struct clock{
    int a;
    int b;
    int c;
    int d;
};
struct clock alarm, *pp;
main()
{
    int hour,minute;
    pp=&alarm;
    scanf("%d %d %d %d",&(*pp).a,&(*pp).b,&(*pp).c,&(*pp).d);
    hour=(*pp).a+(*pp).c;
    minute=(*pp).b+(*pp).d;
    while(minute>=60)
    {
        hour++;
        minute-=60;
    }
    while(hour>=24)
        hour-=24;
    printf("%d %d",hour,minute);
}
