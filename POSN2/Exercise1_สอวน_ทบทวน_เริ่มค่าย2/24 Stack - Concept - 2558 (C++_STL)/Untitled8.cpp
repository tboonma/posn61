#include <iostream>
#include <stdio.h>
#include <deque>
using namespace std;

int main()
{
    deque<long long> a;

    char x;
    long long y,i;
    while(1)
    {
        cout<<"input>";
        cin>>x;
        if(x=='q')
            break;
        else if(x=='p')
        {
            cout<<"S:[ ";
            deque<int>::size_type sz = a.size();
            for(i=0;i<sz;i++)
                cout<<a[i]<<" ";
            cout<<"]\n";
        }
        else if(x=='u')
        {
            cin>>y;
            deque<int>::size_type sz = a.size();
            if(sz<=99)
                a.push_back(y);
        }
        else if(x=='o')
        {
            deque<int>::size_type sz = a.size();
            if(sz>0)
            {
                cout<<a.back()<<endl;
                a.pop_back();
            }
            else
                continue;
        }
    }
}
