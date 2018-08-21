{
        char a[100],b[100],c,d;
        int n1,n2;
        scanf("%s%s",&a,&b);
        n1=strlen(a);
        n2=strlen(b);
        if(n1>n2)
        {
         printf("%s",a);       
        }
        else if(n1<n2)
        {
                printf("%s",b);
        }
        else
        {
                printf("%s",b);
        }
        return 0;
}
