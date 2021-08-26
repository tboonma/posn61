#include <stdio.h>

main()
{
    int a,i,sum;
    struct student{
        int id;
        char name[20];
        int score;
        int midscore;
        int finalscore;
    }std[10];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&std[i].id);
        scanf(" %s ",&std[i].name);
        scanf("%d",&std[i].score);
        scanf("%d",&std[i].midscore);
        scanf("%d",&std[i].finalscore);
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",std[i].id);
        printf("%s ",std[i].name);
        sum=std[i].score+std[i].midscore+std[i].finalscore;
        printf("%d ",sum);
        printf("\n");
    }
}
