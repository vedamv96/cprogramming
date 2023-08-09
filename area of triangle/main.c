#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,h; float a;
    printf("Enter the base and height:");
    scanf("%d %d",&b,&h);
    a=0.5*b*h;
    printf("Area of triangle:%f",a);
}
