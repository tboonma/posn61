#include <iostream>
#include <vector>
using namespace std;

int z,y,last;
bool need;
vector<int> a[50];

int check(int i)
{

    for(int j=0;j<a[i].size();j++)
    {
        if(a[i][j]==last)
            continue;
        if(a[i][j]==y&&need)
        {
            need=false;
            return 1;
        }
        else
        {
            last=i;
            check(a[i][j]);
        }
    }
    if(!need)
        return 1;
    else
        return 0;
}

int main()
{
    int n,m,i,yes=0,no=0;
    char x;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        if(x=='c')
        {
            cin>>z>>y;
            if(z!=y)
            {
                a[y].push_back(z);
                a[z].push_back(y);
            }
        }
        if(x=='q')
        {
            cin>>z>>y;
            if(z==y)
                yes++;
            else
            {
                need=true;
                last=z;
                if(check(z))
                    yes++;
                else
                    no++;
            }
        }
    }
    cout<<yes<<" "<<no;
    /*for(i=1;i<=n;i++)
    {
        cout<< i <<" - ";
        for (int j=0; j<a[i].size(); ++j)
            cout << a[i][j]<<" ";
        cout<<endl;
    }*/
}
