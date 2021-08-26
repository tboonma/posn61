#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

main()
{
    int numdata,i,j,check;
    cin>>numdata;
    bitset<10000> n=0;
    int data[numdata],checkcount=pow(2,numdata);
    for(i=0;i<numdata;i++)
    {
        cin>>data[i];
    }
    for(i=0;i<checkcount;i++)
    {
        for(j=0;j<numdata;j++)
        {
            if(n.test(j))
            {
                cout<<data[j]<<" ";
            }
        }
        n=i+1;
        cout<<endl;
    }
}
