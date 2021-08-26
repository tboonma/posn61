#include <stdio.h>

struct point{
    int x;
    int y;
};
struct point origin, *pp;
void main()
{
    pp = &origin;
    pp->x = 10; // pp->x = 10;
    (*pp).y = 20; // pp->y = 20;
    printf( "origin is(%d,%d)\n" ,(*pp).x,(*pp).y);
}
