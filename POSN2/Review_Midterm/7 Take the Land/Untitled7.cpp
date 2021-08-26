#include<iostream>
using namespace std;
main()
{
    int x,y,n,i,j,k,l;
    cin >> x >> y;
    int a[x][y],subRect;
    int maxSubRect=-127*100*100;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
                a[i][j]=-9999;
            else if(a[i][j]==0)
                a[i][j]=1;
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(i>0)
                a[i][j]+=a[i-1][j];
            if(j>0)
                a[i][j]+=a[i][j-1];
            if(i>0&&j>0)
                a[i][j]-=a[i-1][j-1];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(k=i;k<x;k++)
            {
                for(l=j;l<x;l++)
                {
                    subRect = a[k][l];
                    if(i>0)
                        subRect -= a[i-1][l];
                    if(j>0)
                        subRect -= a[k][j-1];
                    if(j>0&&i>0)
                        subRect += a[i-1][j-1];
                    maxSubRect = max(maxSubRect,subRect);
                }
            }
        }
    }
    cout << maxSubRect;
}
