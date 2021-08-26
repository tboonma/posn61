#include<iostream>
#include<vector>
#include<map>
using namespace std;
///////////////////////////////////////
int Max=0;
vector<vector<int> > gra;
map<int, bool> candle;
//////////////////////////////////////
void BFS(int v,int c)
{
    if(c>Max)
        Max=c;
    c++;
    candle[v]=1;
    for(int l=0; l<gra[v].size(); l++)
    {
        if(!candle[ gra[v][l] ] )
        {
            BFS(gra[v][l],c);
        }
    }
}
/////////////////////////////////////
 main()
 {
    char a;
    while(1)
    {
        cin>>a;
        if(a=='v')
        {
            int p;
            cin>>p;
            vector<int> *temp = new vector<int>;
            gra.push_back(*temp);
        }
        else if(a=='e')
        {
             int m,l;
             cin>>m>>l;
             gra[m].push_back(l);
             gra[l].push_back(m);
        }
        else
            break;
    }
    BFS(0,0);
    cout << "the diameter of the tree is " << Max;
}
