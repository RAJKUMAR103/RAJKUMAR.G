#include<stdio.h>
#include<string.h>
int main()
{
        int a[100],b,n,i,max=1,min=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                if(a[i]>max)
                max=a[i];
                else
                min=a[i];
        }
        printf("%d %d",min,max);
}
