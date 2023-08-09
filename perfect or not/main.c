#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,div,i,result=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++);
    {
        div=n%i;
        if(div==0)
        {
            result=result+div;
        }

    }
    if (result==n)
    {
         printf("%d is perfect number",n);
    }

    else
    {
        printf("%d is not perfect number",n);
    }

}

