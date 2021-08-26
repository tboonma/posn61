#include <stdio.h>
#include <string.h>
main()
{
    int b[11],i,j,num,sum=0;
    char a[11];
    scanf("%s",&a);
    num=strlen(a);
    for(i=0;i<num;i++)
        b[i]=a[i]-48;
    for(i=0;i<num;i++)
    {
        if(b[i]==2||b[i]==3||b[i]==5||b[i]==7)
            sum+=b[i];
    }
    printf("%d",sum);
}
