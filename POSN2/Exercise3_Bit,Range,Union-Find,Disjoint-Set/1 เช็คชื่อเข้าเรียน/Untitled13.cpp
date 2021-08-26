#include <iostream>
#include <bitset>
#include <string.h>
using namespace std;

main()
{

    int student[30],i,full=0,noi=0;
    for(i=0;i<30;i++)
    {
        student[i]=0;
    }
    for(i=0;i<30;i++)
    {
        string a;
        cin>>a;
        bitset<30> s(a);
        student[i]=s.count();
        if(student[i]==12)
            full++;
        else if(student[i]<8)
            noi++;
    }
    cout<<full;
    for(i=0;i<30;i++)
    {
        if(student[i]==12)
            cout<<" "<<i;
    }
    cout<<endl<<noi;
    for(i=0;i<30;i++)
    {
        if(student[i]<8)
            cout<<" "<<i;
    }
}
