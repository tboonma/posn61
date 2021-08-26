#include <stdio.h>
#include <math.h>

main()
{
    float money,in,year,money1;
    int i;
    scanf("%f %f %f",&money,&in,&year);
    money1=money;
    for(i=1;i<=year;i++)
    {
        money1=money*pow(1+(in/100),i);
        printf("Y %d = %.6f\n",i,money1);
    }
}
