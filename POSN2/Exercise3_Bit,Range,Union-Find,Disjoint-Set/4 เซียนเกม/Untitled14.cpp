#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int sum=0,ans=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        ans=max(ans,sum);
        if(sum<0)
            sum=0;
    }
    if(ans==0)
        ans--;
    cout<<ans;
}
