#include <iostream>
#include <map>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
    int i,temp;
    string name;
    double n,mean,e,f,x1,x,d;
    map<string,double> a;
    map<string,double> b;
    map<string, priority_queue<double> > c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>name>>x;
        x1=x;
        b[name]++;
        a[name]+=x;
        c[name].push(x1);
    }
    typedef map<string,double>::const_iterator num;
    typedef map<string,double>::const_iterator numm;
    typedef map<string, priority_queue<double> >::iterator nummm;
    nummm r=c.begin();
    numm q=b.begin();
    for(num p=a.begin();p!=a.end();p++)
    {
        mean=p->second/q->second;
        cout<<p->first<<" "<<p->second<<" ";
        printf("%.2f ",mean);
        temp=q->second;
        if(temp%2!=0)
        {
            d=q->second/2;
            for(i=0;i<d-1;i++)
            {
                //cout<<r->second.top()<<endl;
                r->second.pop();
            }
            printf("%.2f\n",r->second.top());
        }
        else
        {
            d=(q->second/2)-1;
            for(i=0;i<d;i++)
                r->second.pop();
            e=r->second.top();
            r->second.pop();
            f=r->second.top();
            printf("%.2f\n",(e+f)/2);
        }
        q++;
        r++;
    }

}
