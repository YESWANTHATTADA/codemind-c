#include<stdio.h>
int main()
{
    int n,s,r,p=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        p=p+r;
        s=s/10;
    }
    if(p==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}