#include <stdio.h>

main()
{
    int d,m,y,c,k,w;
    scanf("%d %d %d",&d,&m,&y);
    if(m<3)
    {
        m=m+12;
        y=y-1;
    }
    c=y/100;
    k=y%100;
    w=(d+((26*(m+1))/10)+k+(k/4)+(c/4)+5*c)%7;
    if(w==0)
        printf("SAT");
    else if(w==1)
        printf("SUN");
    else if(w==2)
        printf("MON");
    else if(w==3)
        printf("TUE");
    else if(w==4)
        printf("WED");
    else if(w==5)
        printf("THU");
    else if(w==6)
        printf("FRI");
}
