#include<stdio.h>
void main()
{
    int a,b;
    float c;
    char op;
    printf("Enter expression");
    scanf("%d %c %d",&a, &op, &b);
    switch(op)
    {
    case '+':   
    c=a+b;
    printf("value of c %f",c);
    break;
    case '-':
    c=a-b;
    printf("value of c %f",c);
    break;
    case '*':
    c=a*b;
    printf("value of c %f",c);
    break;
    case '/':
    c=a/b;
    printf("value of c %f",c);
    break;
    default:
    printf("YOU ENTERED THE WRONG INPUT");
    }     
 }
