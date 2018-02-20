#include<stdio.h>
void main()
{
    int a[3];
    printf("enter  three values");
    scanf("%d",&a[3]);
    if(a[0]<a[1])
    printf("%d",a[0]);
    else if(a[1]<a[2])
    printf("%d",a[1]);
    else
    printf("%d",a[2]);
}
