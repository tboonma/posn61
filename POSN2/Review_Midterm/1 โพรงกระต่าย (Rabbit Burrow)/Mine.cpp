#include <iostream>
#include <stack>
using namespace std;

int rabbit(int a[], int n)
{
    int rcount=1,j=0,run=0;
    stack<int> rabbits;
    while(1)
    {
        if(!rabbits.empty())
        {
            if(a[j]==rabbits.top())
            {
                rabbits.pop();
                j++;
                continue;
            }
        }
        rabbits.push(rcount);
        rcount++;
        if(j>=n)
            break;
        if(rabbits.top()<a[j])
            continue;
        if(rabbits.top()>a[j])
            return 0;
    }
    return 1;
}

main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<rabbit(a,n)<<endl;
    }
}
