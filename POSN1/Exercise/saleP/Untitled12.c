#include <stdio.h>

main()
{
    struct product{
        char name[20];
        float price;
        float dis;
        float price2;
    }pro[1000];
    int a,i;
    float max=99999999999,d;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf(" %s ",&pro[i].name);
        scanf("%f %f",&pro[i].price,&pro[i].dis);
    }
    for(i=0;i<a;i++)
    {
        d=100-(pro[i].dis);
        pro[i].price2=(pro[i].price)*d;
        if(pro[i].price2<max)
            max=pro[i].price2;
    }
    for(i=0;i<a;i++)
    {
        if(pro[i].price2==max)
            printf("%s\n",pro[i].name);
    }
}
