#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,m,i,j,count=0,run,temp;
    cin>>n>>m;
    char a[n],b[n],c[n];
    cin>>a;
    strcpy(c,a);
    for(i=1;i<m;i++)
    {
        cin>>b;
        run=0;
        temp=0;
        if(!strcmp(b,a))
            continue;
        else
        {
            for(j=1;j<n;j++)
            {
                if(j==n-1&&a[j]==b[run])
                {
                    temp=n-temp-1;
                }
                else if(a[j]==b[run])
                {
                    temp++;
                    run++;
                }
                else
                {
                    temp=0;
                    run=0;
                }
                //cout<<temp<<endl;
            }
            count+=temp;
        }
        strcpy(a,b);
        //cout<<a[run]<<" "<<b[run2]<<endl;
    }
    strcpy(b,c);
    run=0;
    temp=0;
    if(strcmp(b,a))
    {
        for(j=1;j<n;j++)
        {
            if(j==n-1)
            {
                if(a[j]==b[run])
                    temp++;
                temp=n-temp;
            }
            else if(a[j]==b[run])
            {
                temp++;
                run++;
            }
            else
            {
                temp=0;
                run=0;
            }
            //cout<<temp<<endl;
        }
        count+=temp;
    }
    cout<<count;
}
