#include <stdio.h>
#include <string.h>

int main()
{
    char a[100000];
    int num,i,j;
    for(i=0;i<100000;i++)
        a[i]=NULL;
    gets(a);
    num=strlen(a);
    for(i=0;i<num;i++)
    {
        if(a[i]>=97&&a[i]<=122)
            a[i]-=32;
    }
    if(a[0]>=65&&a[0]<=92)
        printf("%c",a[0]);
    for(i=0;i<num;i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]=='I')
            {
                if(a[i+2]==' '||a[i+2]=='\0')
                    continue;
            }
            if(a[i+1]=='O'&&a[i+2]=='F')
            {
                if(a[i+3]==' '||a[i+3]=='\0')
                    continue;
            }
            if(a[i+1]=='T'&&a[i+2]=='H'&&a[i+3]=='E')
            {
                if(a[i+4]==' '||a[i+4]=='\0')
                    continue;
            }
            if(a[i+1]=='O'&&a[i+2]=='N')
            {
                if(a[i+3]==' '||a[i+3]=='\0')
                    continue;
            }
            if(a[i+1]=='A'&&a[i+2]=='T')
            {
                if(a[i+3]==' '||a[i+3]=='\0')
                    continue;
            }
            if(a[i+1]=='F'&&a[i+2]=='O'&&a[i+3]=='R')
            {
                if(a[i+4]==' '||a[i+4]=='\0')
                    continue;
            }
            if(a[i+1]=='W'&&a[i+2]=='I'&&a[i+3]=='T'&&a[i+4]=='H')
            {
                if(a[i+5]==' '||a[i+5]=='\0')
                    continue;
            }
            if(a[i+1]=='A'&&a[i+2]=='N')
            {
                if(a[i+3]==' '||a[i+3]=='\0')
                    continue;
            }
            if(a[i+1]=='I'&&a[i+2]=='N')
            {
                if(a[i+3]==' '||a[i+3]=='\0')
                    continue;
            }
            if(a[i+1]=='A')
            {
                if(a[i+2]==' '||a[i+2]=='\0')
                    continue;
            }
            if(a[i+1]>=65&&a[i+1]<=92)
                printf("%c",a[i+1]);
        }
    }
}
