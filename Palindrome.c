#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int y=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}