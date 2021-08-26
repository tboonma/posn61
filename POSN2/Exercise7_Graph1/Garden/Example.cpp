#include<iostream>
using namespace std;
char a[40][40];
int c=0,n,m;
void garden(int x,int y)
{
    if(x>n+1||x<2||y>m+1||y<2)
        return;
    if(a[x][y]!='.')
        return;
    if(a[x+1][y]=='#'||a[x-1][y]=='#'||a[x][y+1]=='#'||a[x][y-1]=='#')
        return;
    c++;
    a[x][y]='0';
    if(a[x+2][y]!='#')
        garden( x+1, y);
    if(a[x][y+2]!='#')
        garden( x, y+1);
    if(a[x-2][y]!='#')
        garden( x-1, y);
    if(a[x][y-2]!='#')
        garden( x, y-1);
    return;
}
int main()
{
    for(int i=0;i<40;i++)
        for(int j=0;j<40;j++)
            a[i][j]='.';
    cin >>n >> m;
    int max=0;
    for(int i=2;i<=n+1;i++)
        for(int j=2;j<=m+1;j++)
            cin >> a[i][j];
    for(int i=2;i<=n+1;i++)
        for(int j=2;j<=m+1;j++)
        {
            c=0;
            if(a[i][j]=='.')
            {
                garden(i,j);
                /*for(int k=2;k<n+2;k++)
                {
                    for(int l=2;l<m+2;l++)
                        cout<<a[k][l];
                    cout<<endl;
                }
                cout<<endl;*/
            }
            if(c>max)max=c;
        }
    cout<<max;
}
