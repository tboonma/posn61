#include <stdio.h>

main()
{
    int a,b,c,i=0,j;
    int arr[100];
    scanf("%d",&a);
    while(1)
    {
        if(a==0)
        {
            arr[i]=0;
            break;
        }
        else if(a==1)
        {
            arr[i]=1;
            break;
        }
        b=a/2;
        c=a%2;
        arr[i]=c;
        a=b;
        i++;
    }
    for(j=i;j>=0;j--)
        printf("%d",arr[j]);
}
