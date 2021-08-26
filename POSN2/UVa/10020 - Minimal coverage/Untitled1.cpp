#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    int i,M,l,r,md=0,mr,ml;
    for(i=0;i<testcase;i++)
    {
        cin>>M;
        md=0;mr=0;ml=0;
        while(1)
        {
            cin>>l>>r;
            if(M>=l&&M<=r)
            {
                if(r-l>md)
                {
                    mr=r;
                    ml=l;
                    md=r-l;
                }
                else if(r-l==md&&mr>r)
                {
                    mr=r;
                    ml=l;
                }
            }
            else if(l==0&&r==0)
            {
                if(ml!=0||mr!=0)
                    cout<<"1"<<endl<<ml<<" "<<mr<<endl;
                else
                    cout<<"0"<<endl;
                cout<<endl;
                break;
            }
        }
    }
}
