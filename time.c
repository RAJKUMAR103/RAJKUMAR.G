#include<stdio.h>
void main()
{
    int a,c;
    printf("enter the time ");
    scanf("%d",&a);
    c=a*60;
    printf("time in minutes %d\n",c);
    c=a/60;
    printf("time in seconds%d\n",c);
}
