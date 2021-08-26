#include <stdio.h>

main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=a-i-1;j>0;j--)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for(i=1;i<a;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<a-i;j++)
            printf("* ");
        printf("\n");
    }
}
