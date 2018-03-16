#include<stdio.h>
void main()
{
    int a[4],b=0,c=a[1],i,n;
    printf("enter n values");
    scanf("%d",&n);
    for(i=1;i<4;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<4;i++)
    {
        if(a[i]>b)
        {
           b=a[i]; 
        }
    }
    for(i=1;i<4;i++)
    {
        if(a[i]<c)
        {
            c=a[i];
        }
    }
    printf("%d\t%d",b,c);
}
