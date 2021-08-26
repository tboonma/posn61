#include <stdio.h>

main()
{
    char a[100];
    int i,count=0;
    scanf("%s",&a);
    for(i=0;i<100;i++)
    {
        if(a[i]!='\0')
            count++;
        else
            break;
    }
    for(i=count-1;i>=0;i--)
        printf("%c",a[i]);
}
