#include <stdio.h>

int main()
{
    int Towers[5];
    int i,count=0,max=-9;


    printf("Enter tower height: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Towers[i]);
    }


    for(i=0;i<5;i++)
    {
        if(Towers[i]>max)
        {
            count++;
            max=Towers[i];
        }
    }


    printf("Number of towers seen is %d.\n",count);
}
