#include <stdio.h>

main()
{
    int a,bt,bfh,bh,bf,btw,ct,cf,co;
    scanf("%d",&a);
    bt=a/1000;
    a=a-1000*bt;
    bfh=a/500;
    a=a-500*bfh;
    bh=a/100;
    a=a-100*bh;
    bf=a/50;
    a=a-50*bf;
    btw=a/20;
    a=a-20*btw;
    ct=a/10;
    a=a-10*ct;
    cf=a/5;
    a=a-5*cf;
    co=a;
    printf("1000 = %d\n500 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n1 = %d",bt,bfh,bh,bf,btw,ct,cf,co);
}
