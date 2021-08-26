#include <stdio.h>

main()
{
    char a[100];
    int i;
    gets(a);
    for(i=0;i<100;i++)
    {
        if(a[i]=='\0')
            break;
        else if(a[i]>=97&&a[i]<=122)
            printf("%c",a[i]);
        else if(a[i]>=65&&a[i]<=90)
            printf("%c",a[i]);
    }
}
