#include <stdio.h>

main()
{
    int n,i,j,x,y,z;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<1000;i++)
        a[i]=NULL;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x==1)
        {
            for(j=0;j<1000;j++)
            {
                if(a[j]==NULL)
                {
                    a[j]=y;
                    break;
                }
            }
        }
        else if(x==2)
        {
            scanf("%d",&z);
            a[y]=z;
        }
        else if(x==3)
        {
            for(j=0;a[j]==y;j++)
                a[j]=NULL;
        }
    }
    for(i=0;i<1000;i++)
    {
        if(a[i]!=NULL)
            printf("%d ",a[i]);
    }
}
