#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int> > tree;
map<int,bool> gone;
int maxcount=0;

int prayuth(int i,int count)
{
    maxcount=max(maxcount,count);
    count++;
    gone[i]=1;
    for(int j=0;j<tree[i].size();j++)
    {
        if(!gone[tree[i][j]])
        {
            prayuth(tree[i][j],count);
        }
    }
    cout<<"count="<<count<<endl;
}

int main()
{
    char x;
    int value;
    while(1)
    {
        cin>>x;
        if(x=='v')
        {
            cin>>value;
            vector<int> *temp=new vector<int>;
            tree.push_back(*temp);
        }
        else if(x=='e')
        {
            int value2;
            cin>>value>>value2;
            tree[value].push_back(value2);
            tree[value2].push_back(value);
        }
        else
            break;
    }
    prayuth(0,0);
    cout<<"the diameter of the tree is "<<maxcount;
}
