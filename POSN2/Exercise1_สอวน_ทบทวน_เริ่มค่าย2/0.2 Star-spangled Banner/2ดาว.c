#include <stdio.h>
int main() {
    int n, c;

int run=0,line=0,count=1,nn,test=0;


    printf("Enter total number of stars (n): ");
    scanf("%d", &n);
    printf("Enter number of stars in the first row (c): ");
    scanf("%d", &c);


nn=c;
    while(1)
    {
        test+=nn;
        if(test>=n)
            break;
        nn--;
        test+=nn;
        if(test>=n)
            break;
        nn++;
    }
    if(nn!=c||test!=n)
        printf("Pattern not found.");
    else
    {
        while(run<n)
        {
            line=0;
            nn=c;
            if(count%2==0)
            {
                printf(" ");
                nn--;
            }
            while(line<nn&&run<n)
            {
                printf("* ");
                line++;
                run++;
            }
            count++;
            printf("\n");
        }
    }

}
