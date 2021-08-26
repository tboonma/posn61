#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,ans=0,start=0,end=0,i,sum1=0;
    cin>>n;
    int a[n-1];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        sum+=a[i];
        ans=max(sum,ans);
        if(sum>=sum1)
        {
            end=i;
        }
        if(sum<0)
        {
            sum=0;
            start=i+2;
        }
        sum1=sum;
    }
    if(ans<=0)
        cout<<"0";
    else
        cout<<start<<" "<<end+2;
}
