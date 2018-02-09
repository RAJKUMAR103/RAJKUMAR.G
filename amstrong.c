#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter a value");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        d=d+c*c*c;
        b=b/10;
    }
    if(a==d)
    {
        printf("number isamstrong");
        
    }
        else
        {
            printf("number is not amstrong");
            
    }
}
