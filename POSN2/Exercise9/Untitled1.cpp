#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    unsigned long long first,last;
    cin>>n;
    int busstop[n];
    for(i=0;i<n;i++)
    {
        int count=1;
        cin>>m;
        cin>>first;
        for(j=0;j<m-1;j++)
        {
            cin>>last;
            if(last-first<=20)
                continue;
            else
            {
                first=last;
                count++;
            }
        }
        busstop[i]=count;
    }
    for(i=0;i<n;i++)
        cout<<busstop[i]<<endl;
}
