#include<stdio.h>
#include<string.h>
void main()
{
   int a,i,b,c;
   printf("enter range values:");
  scanf("%d%d",&a,&b);
  printf("enter a inbetween number:");
  scanf("%d",&c);
  if(c>=a&&c<=b)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
}
