#include <stdio.h>

void swap(int *, int *);
void main ()
{
    int x=5,y=10;
    printf("Before x=%d y=%d\n",x,y);
    swap(&x,&y);
    printf("After x=%d y=%d\n",x,y);
}
void swap (int *px, int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
