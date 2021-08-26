#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main()
{
    int n,m,check=0;
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
            check=1;
            cout<<num;
            break;
        }
        if(num<0)
            break;
    }
    if(!check)
        cout<<"-1";
}
