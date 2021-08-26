#include <stdio.h>

main()
{
    int i,j;
    char a[100];
    scanf("%s",&a);
    for(i=0;i<100;i++)
        if(a[i]=='\0')
            break;
    for(j=0;j<i;j++)
        if(a[j]>=97&&a[j]<=122)
            a[j]=a[j]-32;
    for(j=0;j<i;j++)
        printf("%c",a[j]);

}
