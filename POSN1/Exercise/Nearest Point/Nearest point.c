#include <stdio.h>
#include <math.h>
main()
{
    int n,j,i,e,f;
    scanf("%d",&n);
    float a[n][3],min=9999,b,c,d;
    for(i=0;i<n;i++)
        scanf("%f %f",&a[i][0],&a[i][1]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b=pow(a[i][0]-a[j][0],2);
            c=pow(a[i][1]-a[j][1],2);
            d=sqrt(b+c);
            if(d<min)
            {
                min=d;
                e=i+1;
                f=j+1;
            }
        }
    }
    printf("%d %d %.2f",e,f,min);
}
