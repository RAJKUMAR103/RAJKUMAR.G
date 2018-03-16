#include<stdio.h>
void main()
{
    int a=0,b=1,i,n,c;
    printf("enter a values");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",a);
    }
}
