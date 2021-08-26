#include <stdio.h>
char a[100];
int num;
main()
{
    scanf("%s",&a);
    num=strlen(a);
    int i=0,j=num-1;
    palin(i,j);
    if(palin()==1)
        printf("Yes");
    else
        printf("No");
}

palin(i,j)
{
    if(i==j||i>j)
        return 1;
    else
    {
    if(a[i]==a[j])
        palin(i+1,j-1);
    else
        return 0;
    }
}
