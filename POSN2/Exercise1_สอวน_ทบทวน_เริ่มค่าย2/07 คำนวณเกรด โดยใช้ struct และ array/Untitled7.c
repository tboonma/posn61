#include <stdio.h>

int main()
{
    struct student{
        int id;
        int mid;
        int fin;
        char grade;
    }s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Student ID: ");
        scanf("%d",&s[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d",&s[i].mid);
        printf("Enter Student Final: ");
        scanf("%d",&s[i].fin);
        if(s[i].mid+s[i].fin>=80)
            s[i].grade='A';
        else if(s[i].mid+s[i].fin>=70)
            s[i].grade='B';
        else if(s[i].mid+s[i].fin>=60)
            s[i].grade='C';
        else if(s[i].mid+s[i].fin>=50)
            s[i].grade='D';
        else
            s[i].grade='F';
    }
    for(i=0;i<5;i++)
    {
        printf("Student ID %d receives grade %c.\n",s[i].id,s[i].grade);
    }
}
