#include <iostream>
using namespace std;
int a[9][9];
char b[9][9];

int hamming(int runy,int runx)
{
    if(runy-1 >= 0 && a[runy][runx] < a[runy-1][runx])
    {
        a[runy-1][runx]=a[runy][runx]+1;
        hamming(runy-1,runx);
    }
    if(runx-1 >= 0 && a[runy][runx] < a[runy][runx-1])
    {
        a[runy][runx-1]=a[runy][runx]+1;
        hamming(runy,runx-1);
    }
    if(runy+1 <= 8 && a[runy][runx] < a[runy+1][runx])
    {
        a[runy+1][runx]=a[runy][runx]+1;
        hamming(runy+1,runx);
    }
    if(runx+1 <= 8 && a[runy][runx] < a[runy][runx+1])
    {
        a[runy][runx+1]=a[runy][runx]+1;
        hamming(runy,runx+1);
    }
}

main()
{
    int starty,startx,stopy,stopx,i,j,temp;
    cin>>starty>>startx>>stopy>>stopx;
    temp=stopx;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cin>>b[i][j];
            if(b[i][j]=='0')
                a[i][j]=99;
            else if(b[i][j]=='1')
                a[i][j]=-99;
        }
    }
    a[stopy][stopx]=0;
    hamming(stopy,stopx);
    cout<<a[starty][startx];
}
