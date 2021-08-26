#include <cstdio>
#include <vector>

using namespace std;

main()
{
    vector<int> lst;
    int x;

    while(true)
    {
        scanf("%d",&x);
        if(x == 0)
        {
            break;
        }

        lst.push_back(x);

    }

    for (vector<int>::iterator itr=lst.begin(); itr != lst.end(); ++itr)
    {
        printf("%d\n",*itr);
    }

}
