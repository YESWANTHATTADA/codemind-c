#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int k=b*1;
    int h=c*2;
    if(a<=k+h)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}