#include <stdio.h>
main()
{
    char a[5];
    int i;
    scanf("%s",&a);
    for(i=0;i<4;i++)
    {
        if(a[i]=='O')
            printf("###\n# #\n###\n");
        else if(a[i]=='V')
            printf("# #\n# #\n #\n");
        else if(a[i]=='E')
            printf("###\n##\n###\n");
        else if(a[i]=='L')
            printf("#\n#\n###\n");
        if(i!=3)
            printf("\n");
    }
}
