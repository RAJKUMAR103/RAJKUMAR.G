#include<stdio.h>
int main()
{
        int a[100],n,i,b=0,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
               b=b+a[i];
        }
        c=b/n;
        printf("%d",c);
}
