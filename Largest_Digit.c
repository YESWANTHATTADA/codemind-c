#include<stdio.h>
int main()
{
    int n,q,r,s=0,mar;
    scanf("%d",&n);
    q=n;
    mar=0;
    while(q!=0)
    {
        r=q%10;
        if(r>mar)
        {
            mar=r;
        }
        q=q/10;
    }
    printf("%d",mar);
}