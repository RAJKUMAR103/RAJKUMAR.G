#include<stdio.h>
void main()
{
    int a,b=0;
    printf("enter the square value");
    scanf("%d",&a);
    while(a>1)
    {
        if(a%2!=0)
        b=1;
        break;
    }
    if(b==1)
    {
        printf("it not power of 2");
    }
    else
    {
        printf("it  power of 2");
    }
    
    
}
