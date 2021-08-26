#include <iostream>
using namespace std;

main()
{
    int x,y,i,j;
    cin>>x>>y;
    int a[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        int xl=1,yl=1,xrun=1,yrun=1;
        for(j=0;j<y;j++)
        {
            if(!a[i][j])
            {
                while(a[i][j])
            }
        }
    }
}
