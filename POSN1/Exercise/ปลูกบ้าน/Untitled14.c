#include <stdio.h>

main()
{
    int n,i,j,max=-1,p=-1,temp=0;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
        scanf(" %c",&a[i]);
    for(i=1;i<n-1;i++)
    {
        j=1;
        temp=0;
        while(1)
        {
            if(i<j)
                break;
            if(a[i]=='o')
            {
                if(i==1)
                {
                    if(a[0]==a[2])
                    {
                       temp++;
                        j++;
                        if(max<temp)
                        {
                            max=temp;
                            p=i;
                        }
                    }
                    else
                        break;
                }
                if(a[i-j]==a[i+j])
                {
                    if(a[i-j-1]==a[i+j+1]&&a[i-j-1]==a[i-j])
                    {
                        temp++;
                        j++;
                        if(max<temp)
                        {
                            max=temp;
                            p=i;
                        }
                    }
                    else
                        break;
                }
                else
                    break;
            }
            else
                break;
        }
    }
    printf("%d",p);
}
