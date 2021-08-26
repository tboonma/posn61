#include <stdio.h>
#include <string.h>

main()
{
    int n,i,j,k,num,max=0,temp,e=0;
    scanf("%d",&n);
    char a[1000000];
    scanf("%s",&a);
    num=strlen(a);
    for(i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
            {
                //printf("*\n");
                temp=1;
                for(k=1;k<n;k++)
                {
                    if(a[i+k]==a[j+k])
                        temp++;
                    else
                        break;
                }
                //printf("temp = %d\n",temp);
                if(temp==n)
                    e=i;
            }
        }
        //if(temp==n)
        //    e=i;
    }
    //printf("%d %d\n",e,temp);
    /*for(i=0;i<num-1;i++)
    {
        temp=1;
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
                temp++;
        }
        if(temp==max)
            printf("%c",a[i]);
    }*/
    for(i=0;i<n;i++)
        printf("%c",a[e+i]);
}
