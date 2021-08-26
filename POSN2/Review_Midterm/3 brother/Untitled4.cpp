#include <iostream>
#include <string.h>
using namespace std;

main()
{
    int n,i,j,v,buy=-1,buyp;
    cin>>n;
    char a[n][11];
    int sum[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<11;j++)
            a[i][j]=NULL;
        sum[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(!strcmp(a[i],a[j]))
                sum[i]++;
        }
        if(sum[i]>buy)
        {
            buy=sum[i];
            buyp=i;
        }
    }
    cout<<a[buyp];
}
