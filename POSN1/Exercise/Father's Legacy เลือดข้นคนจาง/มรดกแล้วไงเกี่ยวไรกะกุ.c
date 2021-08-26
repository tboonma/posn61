#include <stdio.h>
void money(float a,float b,float c,float d);
int i=1;
main()
{
    int a;
    float b,c,d;
    scanf("%d %f %f %f",&a,&b,&c,&d);
    money(a,b,c,d);
    return 0;
}

void money(float a,float b,float c,float d)
{
    a=(a+(a*b/100))-c;
    printf("%d\n%.6f\n%.6f\n",i,c,a);
    i++;
    if(c>a)
    {
        c=a+(a*b/100);
        printf("%d\n%.6f\n0",i,c);
        return 0;
    }
    c=c+(c*d/100);
    money(a,b,c,d);
}
