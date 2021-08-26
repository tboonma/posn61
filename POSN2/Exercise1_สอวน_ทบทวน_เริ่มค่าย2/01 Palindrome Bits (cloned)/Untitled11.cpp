#include <stdio.h>

int main()
{
    int a[32],i,j,run=31;
    for(i=0;i<32;i++)
        a[i]=0;
    unsigned int n;
    scanf("%u",&n);
    while(n!=0)
    {
        a[run]=n%2;
        n=n/2;
        run--;
    }
    for(i=0;i<32;i++)
        printf("%d",a[i]);
    for(i=0;i<16;i++)
    {
        j=31-i;
        if(a[i]!=a[j])
        {
            printf("\nNO");
            break;
        }
    }
    if(i==16)
        printf("\nYES");
}
