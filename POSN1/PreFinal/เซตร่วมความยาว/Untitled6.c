#include <stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n][100];
    for(i=0;i<100;i++)
        b[n][i]=NULL;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i];j++)
            scanf("%d",&b[i][j]);
    }

}
