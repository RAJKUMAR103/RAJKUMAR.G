#include<stdio.h>
void main()
{
int n,c,i;
printf("enter n values");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d",i);
}
}
}
