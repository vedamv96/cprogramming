#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,r1,r2,det;
    printf("Enter the coefficients a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    det=b*b-(4*a*c);
    if (det>0)
    {
        r1=(-b+sqrt(det))/2*a;
        r2=(-b-sqrt(det))/2*a;
        printf("Roots are real");
        printf("value r1:%f and value of r2:%f",r1,r2);
    }
    else if (det==0)
    {
        printf("Roots are equal");
        printf("\n value of r1:%f and value of r2:%f");
    }
    else
    {
        printf("Roots are not equal");
    }
}

