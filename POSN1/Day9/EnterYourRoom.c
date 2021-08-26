#include <stdio.h>

main()
{
    FILE *ptrData;
    char ch,a;
    int num;
    ptrData=fopen("room.txt","r");
    if(ptrData!=NULL)
    {
        printf("Enter the character to find your room->");
        scanf("%c",&a);
        while(feof(ptrData)==0)
        {
            fscanf(ptrData,"%c %d",&ch,&num);
            if(ch==a)
                printf("your room is %c%d\n",ch,num);
        }
    }
    else
        printf("Open file Error");
    fclose(ptrData);
}
