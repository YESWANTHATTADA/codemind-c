#include<stdio.h>
int main()
{
    int a;
    float c,s;
    scanf("%d",&a);
    if(a<=199)
    {
        c=a*1.20;
    }
    else if(a>=200 && a<=400)
    {
        c=a*1.50;
    }
    else if(a>=400 && a<=600)
    {
        c=a*1.80;
    }
    else if(a>=600)
    {
        c=a*2.00;
    }
    if(c>400)
    {
        s=0.15*c;
    }
    else
    {
        s=100;
    }
    printf("%.2f",s+c);
    
}