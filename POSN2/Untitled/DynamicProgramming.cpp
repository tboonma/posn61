#include <iostream>
using namespace std;

int main()
{
    int b,i,j=0,number;
    cin>>number;
    cin>>b;
    int s[number];
    bool sub[number][b+1];
    for(i=0;i<number;i++)
        cin>>s[i];
    for(i=0;i<=b;i++)
    {
        if(i==0||s[0]==i)
        {
            sub[0][i]=true;
            cout<<true<<" ";
        }
        else
        {
            sub[0][i]=false;
            cout<<false<<" ";
        }
    }
    cout<<endl;
    for(i=1;i<number;i++)
    {
        for(j=0;j<=b;j++)
        {
            if(sub[i-1][j])
            {
                sub[i][j]=true;
                cout<<true<<" ";
            }
            else if(sub[i-1][j-s[i]]&&j-s[i]>=0)
            {
                sub[i][j]=true;
                cout<<true<<" ";
            }
            else
            {
                sub[i][j]=false;
                cout<<false<<" ";
            }
        }
        cout<<endl;
    }

}
