#include <stdio.h>
#include <string.h>

int stlen(char *s)
{
    int n;
    for(n=0;*s!= '\0' ;s++)
    n++;
    return n;
}

main()
{
    char *s= "hello" ;
    printf( "%d" ,stlen(s));
}
