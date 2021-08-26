#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int a[n],i,j,findnum,check=0,sum=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>findnum;
    for(i=0;i<pow(2,n);i++)
    {
        sum=0;
        bitset<10000> m=i;
        for(j=0;j<n;j++)
        {
            if(m.test(j))
            {
                sum+=a[j];
            }
        }
        if(sum==findnum)
        {
            check=1;
            break;
        }
    }
    if(check)
        cout<<"YES";
    else
    cout<<"NO";
}
