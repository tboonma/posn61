#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,m,sum=0,count=0;
    cin >> n >> m;
    int bucket[n];
    for(int i=0;i<n;i++)
    {
        cin >> bucket[i];
    }
    sort(bucket,bucket+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+bucket[i];
        if(sum<m)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;
}
