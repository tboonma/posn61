#include<iostream>
#include<stdio.h>
using namespace std;

 main()
 {
    int n,x,y;
    cout<<"Input Number Matrix:";
    cin>>n;
    n++;
    int p[n];
    cout<<"Input Size Matrix 1:";
    cin>>x>>y;
    p[0]=x;
    p[1]=y;
    for(int i=2; i<n; i++)
    {
        cout<<"Input Size Matrix "<<i<<":";
        cin>>x>>y;
        p[i]=y;
    }
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int j=0; j<n; j++)
    {
        arr[j][0]=j;
        arr[0][j]=j;
    }
    for(int i=1; i<n; i++)
    {
        arr[i][i]=0;
    }
    for(int h=1; h<n-1; h++)
    {
        for(int i=1; i<n-h; i++)
        {
            int j=i+h;
            int Min=9999,sum;
            for(int k=i;k<j;k++)
            {
                sum=(arr[i][k]+arr[k+1][j])+(p[i-1]*(p[k]*p[j]));
                if(sum<Min){Min=sum;}
            }
            arr[i][j]=Min;
        }
    }
     cout<<arr[1][n-1]<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%5d",arr[i][j]);
        }
        cout<<endl;
    }

 }
