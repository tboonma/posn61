#include <iostream>
using namespace std;

int main()
{
    char a[]={' ','A','C','A','A','T','C','C'};
    char b[]={' ','A','G','C','A','T','G','C'};
    int num[8][8],i,j,maxint;
    for(i=0;i<8;i++)
    {
        maxint=-9999;
        if(i==0)
        {
            for(j=0;j<8;j++)
            {
                num[i][j]=-j;
                cout<<num[i][j]<<"  ";
            }
            continue;
        }
        cout<<endl;
        for(j=0;j<8;j++)
        {
            if(j==0)
            {
                num[i][j]=-i;
                cout<<num[i][j]<<"  ";
            }
            if(a[i]==b[j])
            {
                maxint=max(maxint,)
            }
        }
    }
}
