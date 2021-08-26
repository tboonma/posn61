#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n],b[1001];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<1001;i++)
        b[i]=0;
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    cout<<n<<endl;
    for(i=0;i<1001;i++)
    {
        while(b[i]>0)
        {
            cout<<i<<endl;
            b[i]--;
        }
    }
    return 0;
}
