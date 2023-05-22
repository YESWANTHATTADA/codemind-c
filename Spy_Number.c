#include<stdio.h>
int main()
{
    int c=1,s=0,i,a,n;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        n=i%10;
        c=c*n;
        s=s+n;
    }
    if(c==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}