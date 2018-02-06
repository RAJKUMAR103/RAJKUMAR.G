#include<stdio.h>
void main()
{
int a,b,n,i;
printf("enter a,n value");
scanf("%d%d",&a,&n);
b=a;
for(i=0;i<n;i++)
{
a=a*b;
}
printf("%d",a);
}
