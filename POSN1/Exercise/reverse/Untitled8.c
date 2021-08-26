#include <stdio.h>
#include <string.h>

char a[100];
int i,num,j;
main()
{
    gets(a);
    num=strlen(a);
    re(num);
}

re(num)
{
    if(num!=0)
    {
        printf("%c",a[num-1]);
        re(num-1);
    }
    else
        return 0;
}
