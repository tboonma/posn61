#include <stdio.h>

main()
{
    int n,x=65,i,j,k,temp,l,x1,p=1,dic;
    scanf("%d",&n);
    temp=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<temp;j++)
                printf(" ");
            temp-=2;
        }
        else
        {
            for(k=0;k<n-1;k++)
                printf(" ");
        }
        if(i%2!=0)
        {
            for(j=0;j<=i;j++)
            {
                if(x>90)
                    x-=26;
                printf("%c",x);
                x++;
            }
        }
        else
        {
            x1=x+i;
            while(1)
            {

              if(x1 >= 91){x1 = 65+x1 - 91;  }
              else{break;}
            }
            for(j=0;j<=i;j++)
            {
                    x++;
                    if(x>90)
                    x-=26;
                 if(x1<65)
                    x1=90;
                printf("%c",x1);
                x1--;
            }
        }
        printf("\n");
    }
}
