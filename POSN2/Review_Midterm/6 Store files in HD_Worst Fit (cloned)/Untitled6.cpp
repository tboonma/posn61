#include<iostream>
using namespace std;
main()
{
    int m,n,i,j,maxz1=-99999,mi,k,q;
    cin>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
     }
    cin>>n;
    for(k=0;k<n;k++)
    {
         for(i=0;i<m;i++)
         {
             if(a[i]>maxz1)
             {
                    maxz1=a[i];
                     q=i;
              }
          }
          cin>>mi;
          a[q]=a[q]-mi;
          maxz1=-99999;
    }
    for(k=0;k<m;k++)
    {
          for(i=0;i<m;i++)
          {
                if(a[i]>maxz1)
                {
                      maxz1=a[i];
                      q=i;
                 }
           }
           cout<<"Disk "<<q+1<<", left: "<<a[q]<<"\n";
           a[q]=0;
           maxz1=-99999;
    }
}
