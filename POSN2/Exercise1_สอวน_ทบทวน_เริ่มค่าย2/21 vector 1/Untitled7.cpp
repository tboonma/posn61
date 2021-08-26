#include <cstdio>
#include <vector>

using namespace std;

void print_vector(vector<int>& vect)
{
    for(vector<int>::iterator i=vect.begin(); i != vect.end(); i++)
    {
        printf("%d ",*i);
    }
    printf("\n");
}

main()
{
    vector<int> lst;

    lst.push_back(100);

    print_vector(lst);

    lst.push_back(500);

    print_vector(lst);

    lst.push_back(70);

    print_vector(lst);

    lst.erase(lst.begin()+1);lst.insert(lst.begin()+1,1,300);

    print_vector(lst);

    lst.erase(lst.begin());

    print_vector(lst);
}
