#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("a is the largest");
    }
    else if (b>c)
    printf("b is the largest");
    else
        printf("c is the largest");

}
