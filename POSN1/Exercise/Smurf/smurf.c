#include <stdio.h>
 main()
 {
    int a,b,c,money,i,j,k,max=0,count=0;
    scanf("%d %d %d %d",&a,&b,&c,&money);
    int shirt[a],pant[b],shoe[c];
    for(i=0;i<a;i++)
        scanf("%d",&shirt[i]);
    for(i=0;i<b;i++)
        scanf("%d",&pant[i]);
    for(i=0;i<c;i++)
        scanf("%d",&shoe[i]);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                if(shirt[i]+pant[j]+shoe[k]<=money)
                {
                    if(shirt[i]+pant[j]+shoe[k]>max)
                        max=shirt[i]+pant[j]+shoe[k];
                }
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                if(shirt[i]+pant[j]+shoe[k]==max)
                    count++;
            }
        }
    }
    printf("%d %d",max,count);

 }
