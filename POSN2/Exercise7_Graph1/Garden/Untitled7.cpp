#include <iostream>
using namespace std;
char a[35][35];
int count,n,m,maxsum=0,b[35][35];

/*int check(int i,int j)
{
    int k=0;
    if(a[i][j]=='@')
    {
        count=1;
        while(a[i][j+count]=='@')
        {
            count++;
            b[i][j]=count;
        }
        for(k=0;k<count;k++)
        {
            b[i][j+k]=count;
        }
        k--;
    }
    j=j+k;
    if(j<m+1)
        check(i,j+1);
    if(i<n+1)
        check(i+1,2);

}

int finish(int i,int j)
{
    int sum=0;
    for(int k=i;k<n+2;k++)
    {
        sum+=b[k][j];
    }
    if(sum>maxsum)
        maxsum=sum;
    if(j<=m)
        finish(2,j+1);
    else
        return maxsum;
}*/

void sear(int i,int j)
{
    if(a[i][j]=='@'||a[i][j]=='0')
    {
        for(int k=2;k<n+2;k++)
        {
            for(int l=2;l<m+2;l++)
            {
                cout<<a[k][l];
            }
            cout<<endl;
        }
        cout<<count<<endl<<endl;
        if(a[i][j]!='0')
        {
            a[i][j]='0';
            count++;
        }
        if(a[i][j+1]=='@')
            sear(i,j+1);
        if(a[i+1][j]=='@')
            sear(i+1,j);
        if(count>maxsum)
            maxsum=count;
    }
    /*if(j<m+1)
        sear(i,j+1,0);
    if(j>=m+1&&i<n+1)
        sear(i+1,0,0);*/
}

int main()
{
    int i,j,k;
    cin>>n>>m;
    for(i=0;i<n+4;i++)
    {
        for(j=0;j<m+4;j++)
            a[i][j]='.';
    }
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            count=0;
            if(a[i][j]!='#'&&a[i+1][j]!='#'&&a[i-1][j]!='#'&&a[i][j+1]!='#'&&a[i][j-1]!='#')
            {
                a[i][j]='@';
                sear(i,j);
            }
        }
    }
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    //sear(2,2,0);
    cout<<maxsum<<endl;
    //check(2,2);
    /*for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            if(a[i][j]>=48&&a[i][j]<=48+m)
                b[i][j]=a[i][j]-48;
            else
                b[i][j]=0;
        }
    }*/
    //cout<<finish(2,2)<<endl;
    /*while(1)
    {
        if(j>=m+2)
        {
            j=0;
            i++;
        }
        else if(i>=n+2)
            break;
        if(a[i][j]=='@')
        {
            k=1;
            count=1;
            a[i][j]='0';
            while(1)
            {
                if(a[i][j+k]=='@')
                {
                    count++;
                    k++;
                    a[i][j+k]='0';
                    continue;
                }
                else if(a[i+1][j]=='@')
                {
                    count++;
                    k=1;
                    a[i+1][j]='0';
                    i++;
                }
                else
                    break;
            }
        }
        j++;
    }*/
    for(i=2;i<n+2;i++)
    {
        for(j=2;j<m+2;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
