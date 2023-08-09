#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if (marks>=90)
    {
        printf("A grade");
    }
    else if (marks>=70)
    {
        printf("B grade");
    }
    else if (marks>=50)
    {
        printf("C grade");
    }
    else if (marks>=30)
    {
        printf("D grade");
    }
    else
    {
        printf("Fail");
    }
}
