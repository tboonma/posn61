#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int> > conj;
map<int,int> money;
map<int,bool> alco,alco2;
int moneymax=0;

int searchway(int i,int count)
{
    int j;
    if(!alco[conj[i][j]])
    {
        count+=money[conj[i][j]];
        alco2[conj[i][j]]=1;
    }
    moneymax=max(moneymax,count);
    alco[i]=1;
    if(!conj[i].empty())
    {
        for(j=0;j<conj[i].size();j++)
        {

            searchway(conj[i][j],count);
            if(!alco2[conj[i][j]])
                count-=money[conj[i][j]];
        }
    }
}

int main()
{
    int n,m,i,j,temp1,temp2,s,p;
    cin>>n>>m;
    for(i=0;i<=n;i++)
    {
        vector<int> *temp=new vector<int>;
        conj.push_back(*temp);
    }
    for(i=0;i<m;i++)
    {
        cin>>temp1>>temp2;
        conj[temp1].push_back(temp2);
    }
    for(i=1;i<=n;i++)
    {
        cin>>temp1;
        money[i]=temp1;
    }
    cin>>s>>p;
    for(i=1;i<=p;i++)
    {
        cin>>temp1;
        alco[temp1]=1;
    }
    int num=conj[s].size()-1;
    int run=0;
    //while(conj[s][num]!=NULL)
    //{
        searchway(s,0);
        //conj[s][run]=NULL;
        //run++;
    //}
    for(i=0;i<=n;i++)
    {
        cout<<i<<" - ";
        for(j=0;j<conj[i].size();j++)
            cout<<conj[i][j]<<" ";
        cout<<endl;
    }
    cout<<moneymax;
}
