#include <stdio.h>
#include <math.h>
main()
{
    int n,i,j,k,x1,y1,x2,y2,max=-99,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        max=-99;
        scanf("%d %d",&p,&q);
        int a[p][q];
        for(j=0;j<p;j++)
        {
            for(k=0;k<q;k++)
            {
                scanf("%d",&a[j][k]);
            }
        }
        for(j=0;j<p-1;j++)
        {
            for(k=0;k<q-1;k++)
            {
                if(abs(a[j][k]-a[j][k+1])<=10)
                {
                    if(a[j][k]+a[j][k+1]>max)
                    {
                        max=a[j][k]+a[j][k+1];
                        x1=j;
                        y1=k;
                        x2=j;
                        y2=k+1;
                    }
                }

                if(abs(a[j][k]-a[j+1][k])<=10)
                {
                    if(a[j][k]+a[j+1][k]>max)
                    {
                        max=a[j][k]+a[j+1][k];
                        x1=j;
                        y1=k;
                        x2=j+1;
                        y2=k;
                    }
                }


            }
        }
        printf("%d %d\n",x1+1,y1+1);


    }


}
