#include<stdio.h>
int main()
{
    int a,i;
    float f;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f+(1.0/i);
    }
    printf("%.2f",f);
}