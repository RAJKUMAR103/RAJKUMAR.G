#include<stdio.h>
int main()
{
        int a,b;
        scanf("%d",&a);
        if(a%2!=0)
        {
          b=a-1; 
          printf("%d",b);
        }
        else if(a%2==0)
        {
                printf("%d",a);
        }
        
}
