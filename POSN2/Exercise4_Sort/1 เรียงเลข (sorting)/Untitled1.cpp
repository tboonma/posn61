#include <stdio.h>
int main()
{
  int n,i,d,t;
  scanf("%d", &n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=1;i<n;i++)
  {
    d=i;
    while(d>0&&a[d-1]>a[d])
    {
      t=a[d];
      a[d]=a[d-1];
      a[d-1]=t;
      d--;
    }
  }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
