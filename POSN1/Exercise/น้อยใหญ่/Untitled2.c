#include <stdio.h>
void change(int *,int *);
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    change(&a,&b);
    printf("%d %d",a,b);
}

void change(int *pa,int *pb)
{
    if(*pa>*pb)
    {
        int temp;
        temp=*pa;
        *pa=*pb;
        *pb=temp;
    }
}
