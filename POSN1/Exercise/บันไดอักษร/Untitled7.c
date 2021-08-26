#include <stdio.h>

main()
{
    int n,i,j,x=65;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(x==91)
                x=x-26;
            printf("%c",x);
            x++;
        }
        printf("\n");
    }
}
