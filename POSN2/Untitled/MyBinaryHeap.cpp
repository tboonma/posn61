#include <iostream>
using namespace std;

heapify(int a[],int n,int i)
{
    int largest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n&&a[left]>a[largest])
        largest=left;
    if(right<n&&a[right]>a[largest])
        largest=right;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

heapSort(int a[])
{
    for(int i=(5/2)-1;i>=0;i--)
        heapify(a,5,i);
    for(int i=4;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
    int a[5],n=5;
    for(int i=0;i<5;i++)
        cin>>a[i];
    heapSort(a);
    cout<<"---------------------"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
}
