#include <iostream>
using namespace std;

main()
{
    int a=5;
    int *p;
    p=&a;
    cout<<"a = "<<*p<<endl<<"Address of a = "<<p;
    return 0;
}
