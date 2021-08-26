#include <iostream>
#include <bitset>
using namespace std;

main()
{
    int n,i,a=0,b=0,run=0,count=1,check;
    cin>>n;
    while(1)
    {
        check=n&(1<<0);
        if(check)
        {
            if(count%2!=0)
            {
                a|=(1<<run);
                count++;
            }
            else
            {
                b|=(1<<run);
                count++;
            }
        }
        n=n>>1;
        run++;
        if(n==0)
            break;
    }
    cout<<a<<" "<<b;
}
