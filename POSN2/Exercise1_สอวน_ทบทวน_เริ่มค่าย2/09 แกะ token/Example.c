#include <stdio.h>
#include <string.h>

main()
{
  char st[1000];
  char res[1000];
  int t;

  fgets(st,1000,stdin);
  scanf("%d",&t);
  get_field(st,',',t,res);
  printf("cut by ',': %s\n",res);
}
