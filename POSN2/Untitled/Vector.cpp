#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    for (vector<int>::iterator itr=v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << "\n";
    }
}
