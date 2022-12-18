#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float h,d,gross;
    if(b<=10000)
    {
        h=0.2*b;
        d=0.8*b;
    }
    else if(b<=20000)
    {
        h=0.9*b;
        d=0.25*b;
    }
    else if(b>20000)
    {
        h=0.95*b;
        d=0.3*b;
    }
    gross=b+h+d;
    printf("%0.2f",gross);
}