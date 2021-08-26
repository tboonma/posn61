#include <stdio.h>

main()
{
    int n,temp,i,j;
    scanf("%d",&n);
    int a[n];
    float b,sum=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    b=sum/n;
    printf("%.2f %d %d",b,a[n-1],a[0]);
}
