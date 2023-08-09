#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("She is eligible to vote");

    }
    else
    {
        printf("She is not eligible to vote");
    }
}
