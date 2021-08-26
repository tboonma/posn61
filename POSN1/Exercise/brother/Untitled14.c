#include <stdio.h>
#include <string.h>

main()
{
    int a,i,j,max=0,y;
    scanf("%d ",&a);
    struct brother{
        char name[100];
        int count;
    }bro[a];
    for(i=0;i<a;i++)
    {
        bro[i].count=0;
        scanf("%s",&bro[i].name);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=i;j<a;j++)
        {
            if(strcmp(bro[i].name,bro[j].name)==0)
                bro[i].count+=1;
        }
        if(max<bro[i].count)
            max=bro[i].count;
    }
    for(i=0;i<a;i++)
    {
        if(bro[i].count==max)
        {
            printf("%s",bro[i].name);
            return 0;
        }
    }
}
