#include <stdio.h>
int count=0;
main()
{
    int a,i=2;
    scanf("%d",&a);
    prime(a,i);
    if(prime()==1)
        printf("Yes");
    else
        printf("No");

}

prime(a,i)
{
    if(a==0||a==1||a<0)
        return 0;
    if(i==a)
        return 1;
    if(i!=a)
    {
        if(a%i==0)
            return 0;
        else
            prime(a,i+1);
    }
}
