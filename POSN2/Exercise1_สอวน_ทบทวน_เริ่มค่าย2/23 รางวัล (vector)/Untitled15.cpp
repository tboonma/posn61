#include <cstdio>
#include <vector>

using namespace std;

vector<int> awarddays[51];
int n,m;

void read_input()
{
    scanf("%d %d",&n,&m);

    for(int i=0; i<n; i++)
    {
        int st;
        scanf("%d",&st);


        awarddays[st].push_back(i+1);

    }
}

main()
{
    read_input();

    for(int j=0; j<m; j++)
    {
        int k, p;

        scanf("%d %d",&k,&p);

        if(awarddays[k].size()<p)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",awarddays[k].at(p-1));

        }
  }
}
