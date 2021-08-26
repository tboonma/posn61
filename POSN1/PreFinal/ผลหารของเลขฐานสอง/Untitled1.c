#include <stdio.h>
#include <string.h>

main()
{
    char a[1000000],b[1001];
    int i,numa,numb,j,k,po=1,temp=0,x,y,c[100000],numc;
    unsigned int numbera=0,numberb=0,div;
    scanf("%s",&a);
    scanf("%s",&b);
    numa=strlen(a);
    numb=strlen(b);
    for(i=0;i<numa;i++)
    {
        j=numa-i;
        po=1;
        for(k=1;k<j;k++)
            po=po*2;
        numbera+=(a[i]-48)*po;
    }
    for(i=0;i<numb;i++)
    {
        j=numb-i;
        po=1;
        for(k=1;k<j;k++)
            po=po*2;
        numberb+=(b[i]-48)*po;
    }
    if(numberb!=0)
    {
        div=numbera/numberb;
        for(i=0;i<100000;i++)
            c[i]=NULL;
        i=0;
        while(1)
        {
            x=div%2;
            y=div/2;
            c[i]=x;
            div=y;
            i++;
            if(div==1)
            {
                c[i]=1;
                break;
            }
            else if(div==0)
            {
                i--;
                break;
            }
        }
        for(j=i;j>=0;j--)
            printf("%d",c[j]);
    }
    else
        printf("ERROR");
}
