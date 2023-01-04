#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=1,s=0;
    for(int i=1;i<=n;i++)
    {
        p=p+i*i;
        s=s+i;
    }
    int r=s*s;
    int w=r-p;
    printf("%d",w+1);
}