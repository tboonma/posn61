#include <stdio.h>

int main()
{
    int n,m,yes=0,no=0,x,y,i,j,run=1,temp,temp2;
    char z;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=0;
    for(i=0;i<m;i++)
    {
        scanf(" %c %d %d",&z,&x,&y);
        if(z=='c')
        {
            if(a[x-1]==0&&a[y-1]==0)
            {
                a[x-1]=run;
                a[y-1]=run;
                run++;
            }
            else
            {
                if(a[x-1]!=0)
                {
                    temp=a[y-1];
                    a[y-1]=a[x-1];
                    temp2=a[x-1];
                }
                else
                {
                    temp=a[x-1];
                    a[x-1]=a[y-1];
                    temp2=a[y-1];
                }
                for(j=0;j<n;j++)
                {
                    if(temp==0)
                        break;
                    if(a[j]==temp)
                        a[j]=temp2;
                }
            }
        }
        else if(z=='q')
        {
            if(a[x-1]==a[y-1])
                yes++;
            else
                no++;
        }
    }
    printf("%d %d",yes,no);
}
