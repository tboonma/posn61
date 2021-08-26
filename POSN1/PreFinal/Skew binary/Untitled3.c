#include <stdio.h>
#include <string.h>
#include <math.h>
main()
{
    int b[31],i,j,num,p;
    double sum=0;
    char a[31];
    scanf("%s",&a);
    num=strlen(a);
    for(i=0;i<num;i++)
        b[i]=a[i]-48;
    for(i=0;i<num;i++)
    {
        j=num-i;
        p=pow(2,j);
        sum+=b[i]*(p-1);
    }
    printf("%.0lf",sum);
}
