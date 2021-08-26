#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int> > a;
map<int,bool> check;
int maxcount=0;

int BFS(int i,int count)
{
    maxcount=max(maxcount,count);
    count++;
    check[i]=1;
    for(int j=0;j<a[i].size();j++)
    {
        if(!check[a[i][j]])
            BFS(a[i][j],count);

    }
}

int main()
{
    int n,m,i,j;
    char x;
    while(1)
    {
        cin>>x;
        if(x=='v')
        {
            cin>>n;
            while(a.size()<=n)
            {
                vector<int> *temp=new vector<int>;
                a.push_back(*temp);
            }
        }
        else if(x=='e')
        {
            cin>>n>>m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        else
            break;
    }
    BFS(0,0);
    cout<<"the diameter of the tree is "<<maxcount;
    /*for(i=0;i<a.size();i++)
    {
        cout<<i<<" - ";
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
}
