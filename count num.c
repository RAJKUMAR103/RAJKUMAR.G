#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],i,b=0;
    printf("enter the letters:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='0')&&(a[i]<='9'))
        {
            b++;
        }
    }
    printf("%d",b);
}
