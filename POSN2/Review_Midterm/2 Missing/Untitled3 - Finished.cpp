#include <iostream>
using namespace std;

main()
{
    int x,y,i,n;
    cin>>x>>y;
    int a[x+1];
    for(i=1;i<=x;i++)
        a[x]=0;
    for(i=0;i<x-y;i++)
    {
        cin>>n;
        a[n]=1;
    }
    for(i=1;i<=x;i++)
    {
        if(a[i]!=1)
            cout<<i<<endl;
    }
}
