#include <iostream>
#include <stack>
using namespace std;
main()
{
    int n,m,temp=0;
    cin >> n >> m ;
    int a[n],sum ,run;
    stack<int> ra ;
    for(int i=0;i<m;i++)
    {

        sum=1;
        for(int j=0;j<n;j++)
            cin >> a[j] ;
        run=0;
        temp=0;
        while(1)
        {

            if(!ra.empty())
            {
                if(a[run]==ra.top())
                {
                    ra.pop() ;
                    run++ ;
                    continue ;
                }
            }
            ra.push(sum);
            sum++;
            if(run==n)
            {
                break;
            }
            if(a[run]==ra.top())
            {
                ra.pop();
                run++;
                continue ;
            }
            if(a[run]>ra.top())
            {
                continue;
            }
            if(a[run]<ra.top())
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
        {
            cout << "0\n" ;
        }
        else
            cout << "1\n" ;
    }
}
