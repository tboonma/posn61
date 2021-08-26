#include <iostream>
#include <queue>
using namespace std ;

struct node
{
    int data;
    int disk;
};

struct compare
{
    bool operator()(const struct node & l, const struct node & r)
    {
        return l.data < r.data;
    }
};

main()
{
    int n,x;
    priority_queue<struct node,vector<struct node>,compare> pq;
    cin >> n;
    struct node sum;
    struct node temp;
    for(int i=1;i<=n;i++)
    {
        cin >> sum.data ;
        sum.disk=i;
        pq.push(sum);
    }
    int m,num;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> num ;
        temp=pq.top();
        pq.pop();
        temp.data-=num;
        pq.push(temp);
    }
    for(int i=0;i<n;i++)
    {
        temp=pq.top();
        cout << "Disk " << temp.disk << ", left: " << temp.data << endl ;
        pq.pop();
    }

}
