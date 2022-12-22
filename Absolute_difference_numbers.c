#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=1;
    while(b!=0)
    {
        c=c*10;
        b--;
    }
    int q=a%c;
    int r,s=0;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    int p=s%c;
    int w=0,t;
    while(p!=0)
    {
        t=p%10;
        w=w*10+t;
        p=p/10;
    }
    int y=q-w;
    if(y>0)
    {
        printf("%d",y);
    }
    else
    {
        printf("%d",-1*y);
    }
}