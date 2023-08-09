PROGRAM:
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float c,f;
  printf("Enter the temperature in centigrade:");
  scanf("%f",&c);
  f=(c*1.8)+32;
  printf("Temperature in Fahrenheit:%f\n",f);
  printf("Enter the temperature in Fahrenheit:");
  scanf("%f",&f);
  c=(f-32)/1.8;
  printf("Temperature in centigrade:%f",c);
}
