#include<stdio.h>
void main()
{
    int n,a[n],max=a[0],i;
    printf("enter n values ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     if(a[i]>max)
         max=a[i];
     printf("%d",max);
}
    
