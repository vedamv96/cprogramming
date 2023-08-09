#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char d;
    printf("Enter the operation:");
    scanf("%c",&d);

    if (d=='+')
       {
        printf("Enter the two numbers:");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Sum is:%d",c);
       }
    else if (d=='-')
    {
        printf("Enter the two numbers:");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("%d",c);
    }
    else if (d=='*')
    {
        printf("Enter the two numbers:");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("%d",c);
    }
    else if (d=='/')
    {
        printf("Enter the two numbers:");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d",c);
    }
    else
    {
        printf("error");
    }
}
