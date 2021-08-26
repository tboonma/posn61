#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf(" ");
        }
        printf("x\n");
    }
    for(i=0;i<n;i++)
    {
        printf(" ");
    }
    printf("xxx\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(k=0;k<3;k++)
        {
            printf("x");
            for(j=0;j<=i;j++)
                printf(" ");
        }
        printf("\n");
    }
}
