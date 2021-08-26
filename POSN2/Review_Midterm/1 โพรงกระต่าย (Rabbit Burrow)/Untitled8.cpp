#include <iostream>
#include <stack>
using namespace std;

int check(int arr[],int n)
{
    int i=1,j=0,temp=0;
    stack<int> a;
    while(1)
    {
        if(!a.empty())
        {
            if(arr[j]==a.top())
            {
                a.pop();
                j++;
                continue;
            }
        }
        a.push(i);
        i++;
        if(j==n)
            break;
        if(arr[j]==a.top())
        {
            a.pop();
            j++;
            continue;
        }
        if(arr[j]>a.top())
            continue;
        if(arr[j]<a.top())
        {
            temp=1;
            break;
        }
    }
    if(temp)
        return 0;
    else
        return 1;
}

main()
{
    int n,m,i,j,rabbit,count=0;
    stack<int> a;
    cin>>n>>m;
    int arr[n];
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<check(arr,n)<<endl;
    }
}
