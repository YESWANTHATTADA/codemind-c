#include<stdio.h>
int main()
{
    int b1,b2,h;
    float a;
    scanf("%d%d%d",&b1,&b2,&h);
    a=0.5*(b1+b2)*h;
    printf("%0.4f",a);
}