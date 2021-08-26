#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int n,i,j;
    bool check=true;
    cin>>n;
    char a[n][11];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(check)
        {
            for(j=0;j<i;j++)
            {
                if(strstr(a[i],a[j]))
                    check=0;
            }
        }
    }
    if(check)
        cout<<"NO";
    else
        cout<<"YES";
}
