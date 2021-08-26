#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    int x = m["Prayut"];
    m["Prayut"]=7;
    cout<<m["Prayut"];
}
