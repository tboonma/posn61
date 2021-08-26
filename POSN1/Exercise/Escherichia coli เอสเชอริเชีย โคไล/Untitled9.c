#include <stdio.h>

main()
{
    int a,b,i=1;
    unsigned long long c=2;
    scanf("%d %d",&a,&b);
    b=b*3;
    if(a==0)
        printf("0");
    else if(b==0)
        printf("%d",a);
    else
        ecoli(a,i,c,b);
}

ecoli(int a,int i,unsigned long long c,int b)
{
    unsigned long long x;
    x=a*c;
    if(i<=b)
    {
        printf("%d\n",x);
        ecoli(a,i+1,c*2,b);
    }
    else
        return 0;
}
