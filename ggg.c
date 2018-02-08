#include<stdio.h>
void main()
{
int a,n,i;
printf("enter a,n values");
scanf("%d%d",&a,&n);
for(i=0;i<=n;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
}
