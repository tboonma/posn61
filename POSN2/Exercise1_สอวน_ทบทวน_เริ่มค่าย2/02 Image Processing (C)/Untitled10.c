#include<stdio.h>

main(){
    char  Filter;
    int   w,h,v,g,i,j;

    scanf("%c",&Filter);
    scanf("%d %d %d",&v,&w,&h);
    g=w*h;
    int a[g][3];
    for(i=0;i<g;i++){
    for(j=0;j<3;j++){scanf("%d",&a[i][j]);}}
    int x,y;
    j=0;
    if(Filter=='R'){
        for(y=0;y<h;y++){
        for(x=0;x<w;x++){printf("(%d, %d, %d) ",a[j][0]+=v,a[j][1],a[j][2]);j++;}
        printf("\n");}
    }
else if(Filter=='G'){
        for(y=0;y<h;y++){
        for(x=0;x<w;x++){printf("(%d, %d, %d) ",a[j][0],a[j][1]+=v,a[j][2]);j++;}
       printf("\n");}
    }
else if(Filter=='B'){
        for(y=0;y<h;y++){
        for(x=0;x<w;x++){printf("(%d, %d, %d) ",a[j][0],a[j][1],a[j][2]+=v);j++;}
        printf("\n");}
    }

}
