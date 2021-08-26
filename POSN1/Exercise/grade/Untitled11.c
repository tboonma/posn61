#include <stdio.h>
main()
{
    struct subject{
        int id;
        char name[20];
        float w;
        float x;
    }sub[10];
    int a,i;
    float sum=0,sumw=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&sub[i].id);
        scanf(" %s ",&sub[i].name);
        scanf("%f",&sub[i].w);
        scanf("%f",&sub[i].x);
    }
    for(i=0;i<a;i++)
        sum=sum+((sub[i].w)*(sub[i].x));
    for(i=0;i<a;i++)
        sumw=sumw+(sub[i].w);
    printf("%.2f\n",sum/sumw);
    for(i=0;i<a;i++)
    {
        if((sub[i].x)==0)
            printf("%s\n",sub[i].name);
    }
}
