#include <stdio.h>

void main ()
{
    int i, p[5] = {10, 20, 30, 40, 50};
    for (i=0; i<5; i++)
        printf("element %d data is %d\n",i+1,*(p+i) );
}
