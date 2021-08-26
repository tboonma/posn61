#include <stdio.h>
#include <string.h>

main()
{
    char a[1000];
    scanf("%s",&a);
    int num,i,j,count,d=0;
    num=strlen(a);
    for(i=0;i<num-1;i++)
    {
        count=1;
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                i++;
            }
            else
                break;
        }
        if(count%2==0)
            d=1;
    }
    if(d==1)
        printf("NO");
    else
        printf("YES");
}
