#include <stdio.h>

main()
{
    int n,i,j,temp,num1=0,num;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=i+1;
    num=n;
    while(1)
    {
        for(i=0;i<num;i++)
        {
            if(i==num-1)
            {
                if((num-1)%2==0)
                    a[0]==0;
            }
            else if(i%2!=0)
                a[i]==0;
        }
        /*for(i=0;i<num;i++)
        {
            if(i==num-1)
            {
                if(a[i]!=0)
                {
                    for(j=0;j<num;j++)
                    {
                        if(a[j]==0)
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
            }
            else if(a[i]==0)
            {
                for(j=i+1;j<num;j++)
                {
                    if(a[j]!=0)
                    {
                        temp=a[j];
                        a[j]=a[i];
                        a[i]=temp;
                    }
                }
            }
        }
        for(i=0;i<num;i++)
        {
            if(a[i]!=0)
                num1++;
            else
            {
                num=num1;
                break;
            }
        }
        if(a[1]==0)
            break;*/
    }
    printf("%d",a[0]);
}
