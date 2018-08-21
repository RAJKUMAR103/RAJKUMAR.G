#include<stdio.h>
int main()
{
        int a[100],b,n,count,i;
        scanf("%d",&n);
        scanf("%d",&b);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        
        for(i=0;i<n;i++)
        { count=0;
                if(b==a[i])
                count=1;
                break;
        }
        if(count==0)
        printf("yes");
        else
        printf("no");
}
