#include<stdio.h>
void main()
{
    int a[20],i;
    printf("enter three values=");
    for(i=1;i<=3;i++)
    {
    scanf("%d",&a[i]);
    }
    if(a[1]>a[2])
    {
    printf("maximum value:%d",a[1]);
    }
    else if(a[2]>a[3])
    {
    printf("maximum value:%d",a[2]);
    }
    else
    {
    printf("maximum value:%d",a[3]);
    }
}
