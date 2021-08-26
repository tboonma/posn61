#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main()
{
    char a[10001];
    gets(a);
    int i=0,count=0;
    while(1)
    {
        string word=a;
        int len=word.length();
        int num=word.find("apple");
        if(num>0)
        {
            for(i=num;i<=num+4;i++)
                a[i]='0';
            count++;
        }
        if(num<0)
            break;
    }
    cout<<count;
}
