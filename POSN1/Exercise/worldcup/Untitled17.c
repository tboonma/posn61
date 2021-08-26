#include <stdio.h>
#include <string.h>
main()
{
    int i,j,temp,d1=0,d2=0,d3,d4,k;
    char tempc[21];
    struct team{
        char name[21];
        int kick[5];
        int score;
    }match[4];
    for(i=0;i<4;i++)
        match[i].score=0;
    for(i=0;i<4;i++)
        scanf("%s",&match[i].name);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&match[i].kick[j]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j&&match[i].kick[i]==0);
            else if(match[i].kick[j]>match[j].kick[i])
                match[i].score+=3;
            else if(match[i].kick[j]==match[j].kick[i])
                match[i].score++;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(match[i].score<match[j].score)
            {
                temp=match[i].score;
                match[i].score=match[j].score;
                match[j].score=temp;
                strcpy(tempc,match[i].name);
                strcpy(match[i].name,match[j].name);
                strcpy(match[j].name,tempc);
            }
            else if(match[i].score==match[j].score)
            {
                for(k=0;k<4;k++)
                {
                    if(i!=k)
                        d1=d1+match[i].kick[k];
                    d2=d2+match[k].kick[i];
                }
                d3=d1-d2;
                for(k=0;k<4;k++)
                {
                    if(j!=k)
                        d1=d1+match[j].kick[k];
                    d2=d2+match[k].kick[j];
                }
                d4=d1-d2;
                if(d3<d4)
                {
                    temp=match[i].score;
                    match[i].score=match[j].score;
                    match[j].score=temp;
                    strcpy(tempc,match[i].name);
                    strcpy(match[i].name,match[j].name);
                    strcpy(match[j].name,tempc);
                }
                else if(d3==d4)
                {
                    for(k=0;k<4;k++)
                    {
                        if(i!=k)
                        d1=d1+match[i].kick[k];
                    }
                    for(k=0;k<4;k++)
                    {
                        if(j!=k)
                        d2=d2+match[j].kick[k];
                    }
                    if(d1<d2)
                    {
                        temp=match[i].score;
                        match[i].score=match[j].score;
                        match[j].score=temp;
                        strcpy(tempc,match[i].name);
                        strcpy(match[i].name,match[j].name);
                        strcpy(match[j].name,tempc);
                    }
                }
            }
        }
    }
    for(i=0;i<4;i++)
    {
        printf("%s ",match[i].name);
        printf("%d\n",match[i].score);
    }
}
