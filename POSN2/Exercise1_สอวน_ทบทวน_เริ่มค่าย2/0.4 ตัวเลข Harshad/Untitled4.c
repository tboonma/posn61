#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
char A[100000];
scanf("%s",&A);
int n;
n=strlen(A);
int i;
int B[n];
int sum=0;
for(i=0;i<n;i++){
    B[i]=A[i]-48;
    sum=sum+B[i];
}
int num=0;
for(i=0;i<n;i++){
    num=num+(P(n-i-1)*B[i]);
}
if(num%sum==0){
    int j;
    int count=1;
    for(i=1;i<n;i++){
        sum=0;
        num=0;
        for(j=0;j<n-i;j++){
            sum=sum+B[j];
        }
        for(j=0;j<n-i;j++){
            num=num+(P(n-j-i-1)*B[j]);
        }
        if(num%sum==0){
            count=count+1;
        }
        else{
            break;
        }
    }
    if(count==n){
        printf("RIGHT");
    }
    else{
        printf("TRUE");
    }
}
else{
    printf("FALSE");
}
}

int P(int x){
    int p=1;
    int i;
    for(i=0;i<x;i++){
        p=p*10;
    }
    return p;
}
