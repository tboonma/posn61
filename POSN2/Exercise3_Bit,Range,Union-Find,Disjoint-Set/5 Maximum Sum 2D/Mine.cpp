#include <iostream>
using namespace std;

main()
{
    int n,i,j,k,l,maxsub=-127*100*100,sub;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i>0)
                a[i][j]+=a[i-1][j];
            if(j>0)
                a[i][j]+=a[i][j-1];
            if(i>0&&j>0)
                a[i][j]-=a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=i;k<n;k++)
            {
                for(l=j;l<n;l++)
                {
                    sub=a[k][l];
                    if(i>0)
                    {
                        sub-=a[i-1][l];
                    }
                    if(j>0)
                    {
                        sub-=a[k][j-1];
                    }
                    if(i>0&&j>0)
                    {
                        sub+=a[i-1][j-1];
                    }
                    maxsub=max(maxsub,sub);
                }
            }
        }
    }
    cout<<maxsub;
}
