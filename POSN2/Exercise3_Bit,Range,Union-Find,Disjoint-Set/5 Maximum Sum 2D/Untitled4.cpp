#include<iostream>
using namespace std;
main()
{
    int d,n,i,j,k,l;
    cin >> d;
    int a[d][d],subRect;
    int maxSubRect=-127*100*100;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            cin >> a[i][j];
            if(i>0)
                a[i][j]+=a[i-1][j];
            if(j>0)
                a[i][j]+=a[i][j-1];
            if(i>0&&j>0)
                a[i][j]-=a[i-1][j-1];
        }
    }
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            cout<<a[i][j];
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        {
            for(k=i;k<d;k++)
            {
                for(l=j;l<d;l++)
                {
                    subRect = a[k][l];
                    if(i>0)
                        subRect -= a[i-1][l];
                    if(j>0)
                        subRect -= a[k][j-1];
                    if(j>0&&i>0)
                        subRect += a[i-1][j-1];
                    maxSubRect = max(maxSubRect,subRect);
                    //cout<<maxSubRect<<" "<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                }
            }
        }
    }
    cout << maxSubRect;
}
