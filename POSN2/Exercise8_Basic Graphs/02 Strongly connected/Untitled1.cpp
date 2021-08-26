#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector< vector<int> > tree;
map<int,bool> gone;
bool yeah=1;
int last,first;

int youngohm_motherfucker(int i)
{
    cout<<i<<endl;
    if(gone[i])
    {
        yeah=0;
        return 0;
    }
    gone[i]=true;
    for(int j=first;j<tree[i].size();j++)
    {
        if(gone[tree[i][j]])
        {
            //cout<<"*"<<endl;
            yeah=0;
            return 0;
        }
        else
            youngohm_motherfucker(tree[i][j]);
    }
    /*if(i<last)
    {
        i++;
        gone[i]=false;
        youngohm_motherfucker(i);
    }*/
}

int main()
{
    int u,v,i=0;
    char x;
    while(1)
    {
        cin>>x;
        if(x=='v')
        {
            cin>>u;
            if(i==0)
                first=u;
            last=u;
            vector<int> *temp=new vector<int>;
            tree.push_back(*temp);
        }
        else if(x=='e')
        {
            cin>>u>>v;
            tree[u].push_back(v);
            //tree[v].push_back(u);
        }
        else
            break;
        i++;
    }
    youngohm_motherfucker(first);
    if(yeah)
        cout<<"this graph is singly connected";
    else
        cout<<"this graph is not singly connected";
    int j;
    cout<<endl;
    for(i=first;i<tree.size();i++)
    {
        cout<<i<<" - ";
        for(j=0;j<tree[i].size();j++)
            cout<<tree[i][j]<<" ";
        cout<<endl;
    }

}
