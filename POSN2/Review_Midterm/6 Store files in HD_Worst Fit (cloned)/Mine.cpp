#include <iostream>
#include <algorithm>
using namespace std;

main()
{
    int numdisk,numdata,i,j;
    cin>>numdisk;
    struct d{
        int number;
        int space;
    }disk[numdisk];
    for(i=0;i<numdisk;i++)
    {
        cin>>disk[i].space;
        disk[i].number=i+1;
    }
    cin>>numdata;
    for(i=0;i<numdata;i++)
    {
        int n;
        cin>>n;

    }
}
