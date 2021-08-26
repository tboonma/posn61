#include <stdio.h>
#include <string.h>

int palin()
{
    int num=0,num1,k,j;
    char n[10000];
    gets(n);
    num=strlen(n);
    num1=num/2;
    if(num%2==0)
        num1++;
    for(j=0;j<num-num1;j++)
    {
        k=num-1;
        if(n[j]!=n[k])
        {
            printf("0\n");
            k=0;
            break;
        }
    }
    if(!k)
        printf("1\n");
    return 0;
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        palin();
    }
}
