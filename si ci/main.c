#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r,t,si,ci;
    printf("enter the principal rate time p r t:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple interest is:%f\n",si);
    ci=p*pow((1+r/100),t);
    printf("Compound interest:%f",ci);
}
