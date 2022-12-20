#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    int c;
    c=b*b;
    int r,s=0;
    while(c!=0)
    {
        r=c%10;
        c=c/10;
        s=s+r;
    }
    if(s==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}