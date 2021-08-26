#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int> > a;
map<int,bool> check;

int strong(int i)
{

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
        }
        else
            break;
    }
    strong(0);
    /*for(i=0;i<a.size();i++)
    {
        cout<<i<<" - ";
        for(j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
}
