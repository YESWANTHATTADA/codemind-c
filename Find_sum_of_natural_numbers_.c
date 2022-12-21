#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}