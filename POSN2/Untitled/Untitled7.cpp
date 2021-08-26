#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10000],b[10000];
    char *fuck,*p;
    char temp[10000];
    gets(a);
    int num=strlen(a),i=0,run=0;
    while(i<num)
    {
        if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            if(fuck=strstr(a+i-1," shit"))
            {
                if(a[i]=='s'&&a[i+3]=='t')
                {
                    strncpy(b+run,"bodily waste",12);
                    run+=12;
                    i+=3;
                }
                else
                {
                    b[run]=a[i];
                    run++;
                }
            }
            else if(fuck=strstr(a+i-1," motherfucker"))
            {
                if(a[i]=='m'&&a[i+11]=='r')
                {
                    strncpy(b+run,"incestuous boy",14);
                    run+=14;
                    i+=11;
                }
                else
                {
                    b[run]=a[i];
                    run++;
                }
            }
            else if(fuck=strstr(a+i-1," fuck"))
            {
                if(a[i]=='f'&&a[i+3]=='k')
                {
                    strncpy(b+run,"sleep with",10);
                    run+=10;
                    i+=3;
                }
                else
                {
                    b[run]=a[i];
                    run++;
                }
            }
            else if(fuck=strstr(a+i-1," asshole"))
            {
                if(a[i]=='a'&&a[i+6]=='e')
                {
                    strncpy(b+run,"lower body cavity",17);
                    run+=17;
                    i+=6;
                }
                else
                {
                    b[run]=a[i];
                    run++;
                }
            }
            else if(fuck=strstr(a+i-1," son of a bitch"))
            {
                if(a[i]=='s'&&a[i+13]=='h')
                {
                    strncpy(b+run,"orphan",6);
                    run+=6;
                    i+=13;
                }
                else
                {
                    b[run]=a[i];
                    run++;
                }
            }
            else
            {
                b[run]=a[i];
                run++;
            }
        }
        else
        {
            b[run]=a[i];
            run++;
        }
        i++;
    }
    printf("%s",b);
}
