#include <stdio.h>
#include <math.h>

main()
{
    int i,j,k,l,n,x,y,c,b,d,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   int max=0;
        scanf("%d %d",&x,&y);
        int a[x][y];
        for(j=0;j<x;j++)
            for(k=0;k<y;k++)
                scanf("%d",&a[i][j]);
        for(l=0;l<x;l++)
        {
            for(j=0;j<y;j++)
            {   if(j<=y-1)
            {
               d=fabs(a[l][j]-a[l][j+1]);
               printf("%d\n",d);
                e=a[l][j]+a[l][j+1];
                if(e>max&&d<=10)
                {

                        printf("*");
                        max=e;
                        c=l;
                        b=j;

                }
            }
                if(l<=x-1)
                {
                  d=fabs(a[l][j]-a[l+1][j]);
                  printf("%d\n",d);
                e=a[l][j]+a[l+1][j];
                if(e>max&&d<=10)
                {

                  //      printf("*");
                        max=e;
                        c=l;
                        b=j;

                }
                }

            }
        }
        /*for(j=0;j<y;j++)
        {
            for(k=0;k<x-1;k++)
            {
                d=abs(a[k][j]-a[k][j+1]);
                e=a[k][j]+a[k][j+1];
                if(e>max)
                {
                    if(d<=10)
                    {
                        printf("*");
                        max=e;
                        c=k;
                        b=j;
                    }
                }
            }
        }*/
        printf("%d %d %d\n",max,c,b);
    }

}
