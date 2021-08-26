#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main()
{
    int n,m;
    cin>>n>>m;
    char a[n],b[m];
    cin>>a>>b;
    string pattern=b;
    while(1)
    {
        string word=a;
        int num=word.find(pattern);
        if(num>=0)
        {
            a[num]='0';
            cout<<num<<endl;
        }
        if(num<0)
            break;
    }
    cout<<"-1";
}
