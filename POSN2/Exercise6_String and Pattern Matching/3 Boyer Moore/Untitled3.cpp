#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main()
{
    int n,m,i,count=0,k,check=0;
    cin>>n>>m;
    char a[n],b[m];
    cin>>a>>b;
    string word=a;
    string pattern=b;
    int numchar[27];
    for(i=1;i<=26;i++)
        numchar[i]=0;
    for(i=0;i<word.length();i++)
        numchar[word[i]-96]++;
    for(i=1;i<27;i++)
    {
        if(numchar[i]==0)
            numchar[i]=-2;
        else
            numchar[i]=0;
    }
    for(i=0;i<pattern.length();i++)
    {
        if(numchar[pattern[i]-96]!=-2)
            numchar[pattern[i]-96]=i;
        else
            numchar[pattern[i]-96]=-1;
    }
    for(i=1;i<27;i++)
    {
        if(numchar[i]==0)
            numchar[i]=-1;
    }
    for(i=1;i<27;i++)
    {
        if(numchar[i]!=-2)
        {
            printf("%c ",i+96);
            cout<<numchar[i]<<endl;
        }
    }
    i=word.length()-1;
    int j=pattern.length()-1;
    int pi=i;
    while(1)
    {
        if(pattern[j]==word[i])
        {
            if(j==0)
            {
                cout<<i;
                break;
            }
            else
            {
                i=i-1;
                j=j-1;
                continue;
            }
        }
        else
        {
            if(numchar[word[i]-96]<j)
            {
                pi=pi+(j-numchar[word[i]-96]);
            }
            else
                pi=pi+1;
        }
        j=m-1;i=pi;
        if(i>n-1)
        {
            cout<<"-1";
            break;
        }
    }
}
