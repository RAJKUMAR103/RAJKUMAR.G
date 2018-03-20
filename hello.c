#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int c=0,i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
        c++;
        }
    }
    printf("%d",c+1);
    
    
    
}
