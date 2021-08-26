#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
    char a[10000],b[10000];
    int i;
    for(i=0;i<10000;i++)
    {
        a[i]=NULL;
        b[i]=NULL;
    }
    gets(a);
    int num=strlen(a);
    strcpy(b,a);
    sort(a,a+num);
    do
    {
        if(!strcmp(b,a))
            continue;
        for(i=0;i<num;i++)
            cout<<a[i];
            cout<<endl;
    }
    while(next_permutation(a,a+num));
}
