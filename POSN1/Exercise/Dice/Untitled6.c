#include <stdio.h>
int a,b,c,i;
main()
{
    scanf("%d %d %d",&a,&b,&c);
    printf("|");
    draw1(a,b,c);
    printf("\n");
    printf("|");
    draw2(a,b,c);
    printf("\n");
    printf("|");
    draw3(a,b,c);
}

void draw1(a,b,c)
{
    int ar[3]={a,b,c};
    for(i=0;i<3;i++)
    {
        if(ar[i]==1)
            printf("     ");
        else if(ar[i]==2)
            printf("   * ");
        else if(ar[i]==3)
            printf("   * ");
        else if(ar[i]==4)
            printf(" * * ");
        else if(ar[i]==5)
            printf(" * * ");
        else if(ar[i]==6)
            printf(" * * ");
        printf("|");
    }
}
void draw2(a,b,c)
{
    int ar[3]={a,b,c};
    for(i=0;i<3;i++)
    {
        if(ar[i]==1)
            printf("  *  ");
        else if(ar[i]==2)
            printf("     ");
        else if(ar[i]==3)
            printf("  *  ");
        else if(ar[i]==4)
            printf("     ");
        else if(ar[i]==5)
            printf("  *  ");
        else if(ar[i]==6)
            printf(" * * ");
        printf("|");
    }

}
void draw3(a,b,c)
{
    int ar[3]={a,b,c};
    for(i=0;i<3;i++)
    {
        if(ar[i]==1)
            printf("     ");
        else if(ar[i]==2)
            printf(" *   ");
        else if(ar[i]==3)
            printf(" *   ");
        else if(ar[i]==4)
            printf(" * * ");
        else if(ar[i]==5)
            printf(" * * ");
        else if(ar[i]==6)
            printf(" * * ");
        printf("|");
    }

}
