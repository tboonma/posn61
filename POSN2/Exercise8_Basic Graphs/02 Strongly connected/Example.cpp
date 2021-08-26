#include<iostream>
#include<vector>
using namespace std;
vector<int> vec[15];
vector<int>::iterator itr;
int cont=0;
void c(vector<int>::iterator itr,int j)
{
    for(vector<int>::iterator it=vec[*itr].begin();it!=vec[*itr].end();it++)
    {
        if(*it==j)
        {
            cont++;
        }
        if(!vec[*itr].empty())
        {
            c(it,j);
        }
    }
}
int main()
{
    string s;
    int i,k,a,b,j;
    while(1)
    {
        cin>>s;
        if(s=="v")
        {
            cin>>k;
        }
        else if(s=="e")
        {
            cin>>a>>b;
            vec[a].push_back(b);
        }
        else
            break;
    }
//    for (int i = 0;i <= k; i++)
//    {
//        cout<< i << "\n head ";
//        for(vector<int>::iterator itr=vec[i].begin();itr!=vec[i].end();itr++)
//        cout << "-> " << *itr;
//        cout<<endl;
//    }

//    if(vec[1].empty())
//        cout<<"aaa";
//    else
//        cout<<"bbb";
    for(i=0;i<=k;i++)
    {
        for(j=0;j<=k;j++)
        {
            cont=0;
            for(itr=vec[i].begin();itr!=vec[i].end();itr++)
            {
                if(*itr==j)
                    cont++;
                else if(!vec[*itr].empty())
                {
                    c(itr,j);
                }
            }
            if(cont>1)
            {
                cout<<"this graph is not singly connected";
                return 0;
            }
        }
    }
    cout<<"this graph is singly connected";
}

