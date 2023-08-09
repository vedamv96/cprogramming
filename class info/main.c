#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rno,s1,s2,s3,s4,s5,total;
    float average;
    char name[10];
    printf("Enter the rno and name:");
    scanf("%d",&rno);
    scanf("%s",name);
    printf("Enter five subjects marks:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total is:%d",total);
    average=(s1+s2+s3+s4+s5)/5;
    printf("Average is:%f",average);


}
