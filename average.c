#include<stdio.h>
void main()
{
    int a[100],i,n,avg,b=0;
    printf("enter n values=");
    scanf("%d",&n);
    printf("enter a values odtained=");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b=b+a[i];
        avg=(b/n);
    }
    printf("avg=%d",avg);
}
